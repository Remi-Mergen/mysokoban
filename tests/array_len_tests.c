/*
** EPITECH PROJECT, 2022
** B-PSU-200-STG-2-1-mysokoban-remi.mergen [WSL: Ubuntu]
** File description:
** array_len_tests
*/

#include <criterion/criterion.h>
#include <stdio.h>
int array_len(char **array);

Test(array_len_test, null_array)
{
    char **array_one = NULL;

    cr_assert_eq(array_len(array_one), -1);
    free(array_one);
}

Test(array_len_test, normal_array4)
{
    char **array = malloc(sizeof(char *) * 4);
    array[0] = "#####";
    array[1] = "#   #";
    array[2] = "#####";
    array[3] = NULL;

    cr_assert_eq(array_len(array), 3);
}

Test(array_len_test, normal_array10)
{
    char **array = malloc(sizeof(char *) * 10);
    array[0] = "#######";
    array[1] = "#     #";
    array[2] = "#     #";
    array[3] = "#     #";
    array[4] = "#     #";
    array[5] = "#     #";
    array[6] = "#     #";
    array[7] = "#     #";
    array[8] = "#######";
    array[9] = NULL;

    cr_assert_eq(array_len(array), 9);
}

Test(array_len_test, normal_array100)
{
    char **array = malloc(sizeof(char *) * 100);
    array[0] = "#####";
    for (int i = 1; i < 98; i++)
        array[i] = "#   #";
    array[98] = "#####";
    array[99] = NULL;

    cr_assert_eq(array_len(array), 99);
}
