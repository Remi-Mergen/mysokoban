/*
** EPITECH PROJECT, 2022
** B-PSU-200-STG-2-1-mysokoban-remi.mergen
** File description:
** init_struct
*/

#ifndef INIT_STRUCT_H_
    #define INIT_STRUCT_H_
    #include "struct.h"
    #include <stddef.h>
    #include <stdlib.h>
    #include "sokoban.h"

    static inline int update_position(char **map, pos_player_t *player,
                                        int x, int y)
    {
        for (; map[y][x]; x++) {
            if (map[y][x] == 'P') {
                player->x = x;
                player->y = y;
                return 1;
            }
        }
        return 0;
    }
#endif /* !INIT_STRUCT_H_ */
