/*
** EPITECH PROJECT, 2022
** sokoban [WSL: Ubuntu]
** File description:
** movements
*/

#ifndef MOVEMENTS_H_
    #define MOVEMENTS_H_
    #define MAP game->map
    #define COL (COLS / 2)
    #define LINE (LINES / 2)
    #include "struct.h"

    ////////////////////////////////////////////////////////////
    /// \brief handle up mouvement
    ///
    /// \param game Struct with all the necessary variables
    ///
    /// \return Return Anything
    ///
    ////////////////////////////////////////////////////////////
    void move_up(game_t *game);
    ////////////////////////////////////////////////////////////
    /// \brief handle down mouvement
    ///
    /// \param game Struct with all the necessary variables
    ///
    /// \return Return Anything
    ///
    ////////////////////////////////////////////////////////////
    void move_down(game_t *game);
    ////////////////////////////////////////////////////////////
    /// \brief handle right mouvement
    ///
    /// \param game Struct with all the necessary variables
    ///
    /// \return Return Anything
    ///
    ////////////////////////////////////////////////////////////
    void move_right(game_t *game);
    ////////////////////////////////////////////////////////////
    /// \brief handle left mouvement
    ///
    /// \param game Structure with all the necessary variables
    ///
    /// \return Return Anything
    ///
    ////////////////////////////////////////////////////////////
    void move_left(game_t *game);
#endif /* !MOVEMENTS_H_ */
