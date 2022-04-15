/*
** EPITECH PROJECT, 2022
** B-PSU-200-STG-2-1-mysokoban-remi.mergen [WSL: Ubuntu]
** File description:
** my_strlen_tests
*/

#include <criterion/criterion.h>
#include <stdio.h>
int my_strlen(char const *str);

Test(my_strlen_tests, normal_test1)
{
    char *str = "#########";

    cr_assert_eq(my_strlen(str), 9);
}

Test(my_strlen_tests, normal_test2)
{
    char *str = "#########O#########";

    cr_assert_eq(my_strlen(str), 19);
}

Test(my_strlen_tests, normal_test3)
{
    char *str = "#########O##################O##################O############";

    cr_assert_eq(my_strlen(str), 60);
}

Test(my_strlen_tests, null_str)
{
    char *str = NULL;

    cr_assert_eq(my_strlen(str), -1);
}

Test(my_strlen_tests, empty_str)
{
    char *str = "";

    cr_assert_eq(my_strlen(str), 0);
}
