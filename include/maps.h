/*
** EPITECH PROJECT, 2022
** sokoban [WSL: Ubuntu]
** File description:
** maps
*/

#ifndef MAPS_H_
    #define MAPS_H_
    #include <stddef.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdbool.h>
    char **append_line(char *line, char **old_map);
    char *put_error(int code);
#endif /* !MAPS_H_ */
