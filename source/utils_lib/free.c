/*
** EPITECH PROJECT, 2022
** B-PSU-200-STG-2-1-mysokoban-remi.mergen [WSL: Ubuntu]
** File description:
** free
*/

#include "sokoban.h"

static void free_target(pos_target_t *target)
{
    pos_target_t *tmp = target;

    while (target) {
        tmp = target;
        target = target->next;
        free(tmp);
    }
    return;
}

static void free_map(char **map)
{
    int len = array_len(map);

    for (int i = 0; i < len; i++) {
        free(map[i]);
    }
    free(map);
    return;
}

int free_everything(game_t *game)
{
    free(game->player);
    free_target(game->target);
    free_map(game->map);
    free(game);
    return 0;
}
