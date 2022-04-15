/*
** EPITECH PROJECT, 2022
** minishell_1 [WSL: Ubuntu]
** File description:
** cut_str
*/

#include <stddef.h>
#include <stdlib.h>

static int get_nbr_of_word(char const *str, char div)
{
    int is_in_word = 0;
    int nb_word = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != div) {
            is_in_word == 0 ? ++nb_word : 0;
            is_in_word = 1;
        } else {
            str[i] == div ? is_in_word = 0 : 0;
        }
    }
    return (nb_word);
}

static char **malloc_array(char const *str, char div)
{
    int len_word = 0;
    int m = 0;
    int nb_word = get_nbr_of_word(str, div);
    char **tab = malloc(sizeof(char *) * (nb_word + 1));

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != div)
            ++len_word;
        if ((str[i + 1] == div || str[i + 1] == '\0') && (str[i] != div)) {
            tab[m] = malloc(sizeof(char) * (len_word + 1));
            len_word = 0;
            ++m;
        }
    }
    return (tab);
}

char **my_stwa(char const *str, char div)
{
    int j = 0;
    int k = 0;
    char **tab = malloc_array(str, div);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] != div) {
            tab[j][k] = str[i];
            ++k;
        }
        if ((str[i + 1] == div || str[i + 1] == '\0') && (str[i] != div)) {
            tab[j++][k] = '\0';
            k = 0;
        }
    }
    tab[j] = NULL;
    return (tab);
}
