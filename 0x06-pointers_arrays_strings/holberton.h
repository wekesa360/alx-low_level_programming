#ifndef HOLBERTON_H
#define HOLBERTON_H

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *string);
char *cap_string(char *string);
char *leet(char *string);
char *rot13(char *string);
int _putchar(char c);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

#endif