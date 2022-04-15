/*
** EPITECH PROJECT, 2022
** B-PSU-200-STG-2-1-mysokoban-remi.mergen [WSL: Ubuntu]
** File description:
** array_len
*/

#include <stddef.h>

int array_len(char **array)
{
    int i = 0;

    if (array == NULL)
        return -1;
    for (; array[i]; i++);
    return i;
}
