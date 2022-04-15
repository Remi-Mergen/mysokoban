/*
** EPITECH PROJECT, 2022
** B-PSU-200-STG-2-1-mysokoban-remi.mergen
** File description:
** my_strcmp
*/

static int my_str_len(const char *str)
{
    int i = 0;

    for (; str[i]; i++);
    return i;
}

int my_strcmp(const char *s1, const char *s2)
{
    if (my_str_len(s1) != my_str_len(s2))
        return -1;
    for (int i = 0; s1[i]; i++)
        if (s1[i] != s2[i])
            return -1;
    return 0;
}
