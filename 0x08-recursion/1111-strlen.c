#include "main.h"

/**
 * _strlen - return length of string
 * @str: string to check
 *                                                     * Return: length of str
 */                                                   int _strlen(char *str)                                {                                                             if (*str == '\0')                                             return (0);                                   else
                return (1 + _strlen(str + 1));
}
