/*
** first example, 2023
** CSFML_DOC
** File description:
** main.c
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Network.h>
#include <SFML/Config.h>
#include <SFML/OpenGL.h>

/**
 * @brief Creates a basic window using CSFML library.
 * 
 * This function creates a window with the specified dimensions and title using the CSFML library.
 * The window remains open until it is closed by the user.
 * @code
 * void create_window(void)
 * {
 *      // Create a sfVideoMode object with the desired dimensions and color depth
 *      sfVideoMode mode = {800, 600, 32};
 * 
 *      // Create a sfRenderWindow object
 *      sfRenderWindow *window = NULL;
 * 
 *      // Create a sfEvent object
 *      sfEvent event;
 *
 *      // Create the window
 *      window = sfRenderWindow_create(mode, "My window", sfResize | sfClose, NULL);
 * 
 *      // If the window creation failed, return 84
 *      if (!window)
 *          return (84);
 * 
 *      // Principal loop that keeps the window open
 *      while (sfRenderWindow_isOpen(window)){
 *          // Secondary loop that poll the events
 *          while (sfRenderWindow_pollEvent(window, &event)){
 * 
 *              // If the user closes the window, close the window
 *              if (event.type == sfEvtClosed)
 *                  sfRenderWindow_close(window);
 *          }
 * 
 *          // Clear the window with a black color
 *          sfRenderWindow_clear(window, sfBlack);
 * 
 *          // Display the window
 *          sfRenderWindow_display(window);
 *      }
 * 
 *      // Destroy the window
 *      sfRenderWindow_destroy(window);
 *      return (0);
 *  }
 * @endcode
 * @param None
 * @return An int, that determine if the programm has been executed correctly.
 */
int create_window(void)
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow *window = NULL;
    sfEvent event;

    window = sfRenderWindow_create(mode, "My window", sfResize | sfClose, NULL);
    if (!window)
        return (84);
    while (sfRenderWindow_isOpen(window)){
        while (sfRenderWindow_pollEvent(window, &event)){
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return (0);
}

/**
 * @file first_window.c
 * @brief This is the first example of a basic window creation using CSFML library.
 *
 * @code
 * int main(void)
 * {
 *     // Call the create_window function and return 84 if it fails
 *     if (create_window() == 84)
 *        return (84);
 *    return (0);
 * }
 * @endcode
 * This file contains the main function which is the entry point of the program.
 * It calls the create_window function and returns 84 if it fails.
 * Then it returns 0.
 */
int main(void)
{
    if (create_window() == 84)
        return (84);
    return (0);
}
