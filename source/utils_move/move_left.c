/*
** EPITECH PROJECT, 2022
** B-PSU-200-STG-2-1-mysokoban-remi.mergen [WSL: Ubuntu]
** File description:
** move_right
*/

#include "struct.h"
#include <stddef.h>

void move_left(game_t *game)
{
    if (MAP[game->player->y][game->player->x - 1] != '#') {
        if (MAP[game->player->y][game->player->x - 1] != 'X') {
            MAP[game->player->y][game->player->x] = ' ';
            MAP[game->player->y][--game->player->x] = 'P';
        } else if (MAP[game->player->y][game->player->x - 2] != 'X' &&
        MAP[game->player->y][game->player->x - 2] != '#') {
            MAP[game->player->y][game->player->x] = ' ';
            MAP[game->player->y][--game->player->x] = 'P';
            MAP[game->player->y][game->player->x - 1] = 'X';
        }
    }
    return;
}
