/*
** EPITECH PROJECT, 2022
** B-PSU-200-STG-2-1-mysokoban-remi.mergen [WSL: Ubuntu]
** File description:
** count_object
*/

#include <stddef.h>

int count_object(const char *str, char c)
{
    int count = 0;

    if (str == NULL || c == '\0')
        return -1;
    for (int i = 0; str[i]; i++)
        if (str[i] == c)
            count++;
    return count;
}
