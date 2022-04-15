/*
** EPITECH PROJECT, 2022
** sokoban [WSL: Ubuntu]
** File description:
** sokoban
*/

#ifndef SOKOBAN_H_
    #define SOKOBAN_H_
    #define LLL game->largest_line_length
    #define LCL game->array_len
    #include <stdlib.h>
    #include <stdio.h>
    #include <curses.h>
    #include <unistd.h>
    #include "struct.h"
    int my_strcmp(const char *s1, const char *s2);
    void print_help(void);
    int process(char *map);
    int my_strlen(char const *str);
    int have_loose(char **map);
    char *put_error(int code);
    game_t *init_game(char *fp);
    char *open_file(char *filepath);
    char **my_stwa(char const *str, char div);
    pos_target_t *init_target(char **map);
    int print_target(game_t *game);
    int print_box(game_t *game);
    int have_win(game_t *game);
    int free_everything(game_t *game);
    int array_len(char **array);
    int count_object(const char *str, char c);
#endif /* !SOKOBAN_H_ */
