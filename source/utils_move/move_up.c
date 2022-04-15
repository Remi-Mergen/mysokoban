/*
** EPITECH PROJECT, 2022
** B-PSU-200-STG-2-1-mysokoban-remi.mergen [WSL: Ubuntu]
** File description:
** move_right
*/

#include "struct.h"
#include <stddef.h>

void move_up(game_t *game)
{
    if (MAP[game->player->y - 1][game->player->x] != '#') {
        if (MAP[game->player->y - 1][game->player->x] != 'X') {
            MAP[game->player->y][game->player->x] = ' ';
            MAP[--game->player->y][game->player->x] = 'P';
        } else if (MAP[game->player->y - 2][game->player->x] != 'X' &&
        MAP[game->player->y - 2][game->player->x] != '#') {
            MAP[game->player->y][game->player->x] = ' ';
            MAP[--game->player->y][game->player->x] = 'P';
            MAP[game->player->y - 1][game->player->x] = 'X';
        }
    }
    return;
}
