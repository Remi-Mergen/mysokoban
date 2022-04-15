/*
** EPITECH PROJECT, 2022
** sokoban [WSL: Ubuntu]
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_
    #define MAP game->map

    typedef struct {
        int x;
        int y;
    } pos_player_t;

    typedef struct pos_target_s {
        int pos_x;
        int pos_y;
        char have_a_box;
        struct pos_target_s *next;
    } pos_target_t;

    typedef struct {
        pos_player_t *player;
        char **map;
        pos_target_t *target;
        int nb_box;
        int largest_line_length;
        int array_len;
    } game_t;

#endif /* !STRUCT_H_ */
