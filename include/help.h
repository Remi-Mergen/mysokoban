/*
** EPITECH PROJECT, 2022
** B-PSU-200-STG-2-1-mysokoban-remi.mergen
** File description:
** help
*/

#ifndef HELP_H_
    #define HELP_H_
    #include <unistd.h>

    static inline int my_strlen(char const *s)
    {
        int i = 0;

        while (s[i])
            ++i;
        return i;
    }

    static inline void my_putstr(char *str)
    {
        int len = my_strlen(str);

        write(1, str, len);
        return;
    }
#endif /* !HELP_H_ */
