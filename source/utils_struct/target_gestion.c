/*
** EPITECH PROJECT, 2022
** B-PSU-200-STG-2-1-mysokoban-remi.mergen [WSL: Ubuntu]
** File description:
** get_target_position
*/

#include "struct.h"
#include <stddef.h>
#include <stdlib.h>

static void target_creator(char c, pos_target_t **target, int x, int y)
{
    if (c == 'O') {
        pos_target_t *tmp = malloc(sizeof(pos_target_t));
        tmp->pos_x = x;
        tmp->pos_y = y;
        tmp->have_a_box = 0;
        tmp->next = (*target);
        (*target) = tmp;
    }
    return;
}

pos_target_t *init_target(char **map)
{
    pos_target_t *target = NULL;

    for (int y = 0; map[y]; y++) {
        for (int x = 0; map[y][x]; x++) {
            target_creator(map[y][x], &target, x, y);
        }
    }
    return target;
}

static void is_there_a_box(game_t *game, pos_target_t * tmp)
{
    if (game->map[tmp->pos_y][tmp->pos_x] == 'X')
        tmp->have_a_box = 1;
    else {
        game->map[tmp->pos_y][tmp->pos_x] = 'O';
        tmp->have_a_box = 0;
    }
}

int print_target(game_t *game)
{
    for (pos_target_t * tmp = game->target; tmp; tmp = tmp->next) {
        if (game->map[tmp->pos_y][tmp->pos_x] != 'P' &&
        game->map[tmp->pos_y][tmp->pos_x] != '#') {
            is_there_a_box(game, tmp);
        }
    }
    return 0;
}
