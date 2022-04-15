/*
** EPITECH PROJECT, 2022
** sokoban [WSL: Ubuntu]
** File description:
** process
*/

#include "sokoban.h"
#include "movements.h"

static void terminal_size_checker(game_t *game)
{
    int height = array_len(game->map);
    int width = my_strlen(game->map[0]);

    clear();
    while (height > LINES || width > COLS) {
        clear();
        mvprintw(LINE, COL - 11, "Incorrect terminal size");
        refresh();
    }
}

static void print_map(game_t *game)
{
    terminal_size_checker(game);
    for (int y = 0; MAP[y] != NULL; y++) {
        for (int x = 0; MAP[y][x]; x++)
            mvprintw(LINE - LCL + y, COL + x - LLL, "%c", MAP[y][x]);
    }
    print_target(game);
    return;
}

static inline int lets_move(game_t *game)
{
    int c = getch();

    switch (c) {
        case KEY_UP:
            move_up(game);
            break;
        case KEY_DOWN:
            move_down(game);
            break;
        case KEY_RIGHT:
            move_right(game);
            break;
        case KEY_LEFT:
            move_left(game);
            break;
        case 32:
            return 2;
    }
    return 0;
}

static inline int loop(game_t *game)
{
    char win = 0;
    char code = 0;

    while (win == 0) {
        clear();
        print_map(game);
        code = lets_move(game);
        print_map(game);
        refresh();
        win = have_loose(game->map);
        if (win == 3) {
            free_everything(game);
            exit(1);
        }
        win = have_win(game);
        if (code == 2)
            return 1;
    }
    free_everything(game);
    return 0;
}

int process(char *fp)
{
    int exit_code = 0;
    game_t *game = init_game(fp);

    if (game == NULL)
        return 84;
    write(1, "init...              [OK]\n", 26);
    initscr();
    curs_set(0);
    noecho();
    keypad(stdscr, true);
    exit_code = loop(game);
    endwin();
    return exit_code;
}
