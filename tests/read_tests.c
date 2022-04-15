/*
** EPITECH PROJECT, 2022
** B-PSU-200-STG-2-1-mysokoban-remi.mergen [WSL: Ubuntu]
** File description:
** open_file_tests
*/

#include <criterion/criterion.h>
#include <stdio.h>
char *open_file(char *filepath);

Test(open_file_tests, read_a_file)
{
    char *str = "Hey ! I'm Steve\n";

    cr_assert_eq(open_file("texte.txt"), str);
}

Test(open_file_tests, no_existing_file)
{
    cr_assert_null(open_file("path"));
}

Test(open_file_tests, null_str)
{
    char *str = NULL;

    cr_assert_eq(open_file(str), -1);
}

Test(open_file_tests, empty_str)
{
    char *str = "";

    cr_assert_eq(open_file(str), 0);
}
