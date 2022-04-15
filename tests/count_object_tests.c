/*
** EPITECH PROJECT, 2022
** B-PSU-200-STG-2-1-mysokoban-remi.mergen [WSL: Ubuntu]
** File description:
** count_object_tests
*/

#include <criterion/criterion.h>
#include <stdio.h>
int count_object(const char *str, char c);

Test(count_object_tests, no_object)
{
    char *str = "#########";

    cr_assert_eq(count_object(str, 'O'), 0);
}

Test(count_object_tests, one_object)
{
    char *str = "#########O#########";

    cr_assert_eq(count_object(str, 'O'), 1);
}

Test(count_object_tests, many_objects)
{
    char *str = "#########O#########";

    cr_assert_eq(count_object(str, '#'), 18);
}

Test(count_object_tests, null_str)
{
    char *str = NULL;

    cr_assert_eq(count_object(str, '#'), -1);
}

Test(count_object_tests, null_char)
{
    char *str = "#########O#########";

    cr_assert_eq(count_object(str, '\0'), -1);
}
