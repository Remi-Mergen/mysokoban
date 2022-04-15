/*
** EPITECH PROJECT, 2022
** B-PSU-200-STG-2-1-mysokoban-remi.mergen [WSL: Ubuntu]
** File description:
** have_loose
*/

#include "sokoban.h"
#include <stdlib.h>

static int count_blocked_box(char **map)
{
    int count = 0;

    for (int y = 0; map[y]; y++) {
        for (int x = 0; map[y][x] != '\0'; x++) {
            ((map[y][x] == 'X' && map[y][x + 1] == '#' &&
            map[y - 1][x] == '#') || (map[y][x] == 'X' &&
            map[y][x + 1] == '#' && map[y + 1][x] == '#')) ? count += 1 : 0;
            ((map[y][x] == 'X' && map[y][x - 1] == '#' &&
            map[y - 1][x] == '#') || (map[y][x] == 'X' &&
            map[y][x - 1] == '#' && map[y + 1][x] == '#')) ? count += 1 : 0;
        }
    }
    return count;
}

static int count_box(char **map)
{
    int count = 0;

    for (int y = 0; map[y]; y++)
        for (int x = 0; map[y][x] != '\0'; x++)
            (map[y][x] == 'X' ? count += 1 : 0);
    return count;
}

int have_loose(char **map)
{
    if (count_box(map) == count_blocked_box(map)) {
        endwin();
        return 3;
    }
    return 0;
}
