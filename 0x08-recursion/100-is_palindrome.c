#include <stdint.h>
/**
 * _strlen - return the length of string 
 * @str: string to check
 * 
 * Return length of str
 * 
 */

int_strlen(char *str){
    
    if (*str == '\0')
        return (0);
    else 
        return (1 + _strlen(str + 1));
}

/**
 * check_palindrome - checks if a string is palindrome
 * @l: left hand index
 * @r: right hand index
 * @p: possible palindrome
 * 
 * Return: 1 if the palindrome 0 if not
 */
int is_palindrome(char *s){
    int i;

    i = _strlen(s) - 1;
    return (check_palindrome(0, i, s));
}