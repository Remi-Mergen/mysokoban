/*
** EPITECH PROJECT, 2022
** sokoban [WSL: Ubuntu]
** File description:
** read
*/

#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include "sokoban.h"

static void char_checker(char *map)
{
    for (int i = 0; map[i]; i++) {
        if (map[i] != '\n' && map[i] != '#' && map[i] != ' ' && map[i] != 'P'
        && map[i] != 'X' && map[i] != 'O')
            exit(84);
    }
    if (count_object(map, 'O') != count_object(map, 'X'))
        exit(84);
    if (count_object(map, 'P') != 1)
        exit(84);
}

static char *read_file(char *filepath, int fd)
{
    struct stat st;
    int rd = 0;
    char *map = NULL;

    stat(filepath, &st);
    map = malloc(sizeof(char) * (st.st_size + 1));
    if (map == NULL)
        return NULL;
    rd = read(fd, map, st.st_size);
    if (rd < 0)
        return NULL;
    if (rd == 0) {
        write(1, "Empty file\n", 11);
        return NULL;
    }
    map[st.st_size] = '\0';
    char_checker(map);
    return map;
}

char *open_file(char *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd < 0)
        return NULL;
    return (read_file(filepath, fd));
}
