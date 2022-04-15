/*
** EPITECH PROJECT, 2022
** B-PSU-200-STG-2-1-mysokoban-remi.mergen [WSL: Ubuntu]
** File description:
** have_win
*/

#include "sokoban.h"

int have_win(game_t *game)
{
    for (pos_target_t *tmp = game->target; tmp; tmp = tmp->next)
        if (tmp->have_a_box == 0)
            return 0;
    endwin();
    return 1;
}
