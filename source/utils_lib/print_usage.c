/*
** EPITECH PROJECT, 2022
** B-PSU-200-STG-2-1-mysokoban-remi.mergen [WSL: Ubuntu]
** File description:
** print_usage
*/

#include <unistd.h>

static void help(char *str, int len)
{
    write(1, str, len);
}

void print_help(void)
{
    help("USAGE\n", 6);
    help("\t./my_sokoban map\n", 18);
    help("DESCRIPTION\n", 12);
    help("\tmap file representing the warehouse map, ", 42);
    help("containing \"#\" for walls,\n", 26);
    help("            \"P\" for the player, \"X\" for boxes ", 46);
    help("and \"O\" for storage locations.\n", 31);
    return;
}
