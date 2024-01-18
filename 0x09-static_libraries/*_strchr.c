#include "main.h"

/**
 * _strchr - locates the first occurrence of a character in a string
 * @s: input string
 * @c: character to locate
 *
 * Return: a pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0') {
        if (*s == c) {
            return s; // Return the pointer to the first occurrence of c
        }
        s++;
    }

    return NULL; // Return NULL if the character is not found
}

