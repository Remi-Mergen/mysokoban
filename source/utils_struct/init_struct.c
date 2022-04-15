/*
** EPITECH PROJECT, 2022
** sokoban [WSL: Ubuntu]
** File description:
** init_struct
*/

#include "init_struct.h"

static void get_player_position(char **map, pos_player_t *player)
{
    int x = 0;
    int y = 0;

    for (; map[y]; y++)
        if (update_position(map, player, x, y) == 1)
            return;
}

static int longest_line(char **map)
{
    int len = 0;

    for (int i = 0; map[i]; i++)
        len = my_strlen(map[i]) > len ? my_strlen(map[i]) : len;
    return len;
}

static pos_player_t *init_player(void)
{
    pos_player_t *player = malloc(sizeof(pos_player_t));

    if (player == NULL)
        return NULL;
    player->x = 0;
    player->y = 0;
    return player;
}

game_t *init_game(char *filepath)
{
    char **la_map = NULL;
    pos_target_t *target_lkl = NULL;
    char *tmp = open_file(filepath);
    game_t *game = malloc(sizeof(game_t));
    pos_player_t *player_s = init_player();

    if (game == NULL || player_s == NULL || tmp == NULL)
        return NULL;
    la_map = my_stwa(tmp, '\n');
    target_lkl = init_target(la_map);
    game->player = player_s;
    game->map = la_map;
    game->target = target_lkl;
    game->nb_box = count_object(tmp, 'X');
    get_player_position(la_map, game->player);
    LLL = longest_line(la_map) / 2;
    LCL = array_len(la_map) / 2;
    free(tmp);
    return game;
}
