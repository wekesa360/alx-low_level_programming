#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints the number of args
 * @argc: argumnet count
 * @argv: argument vector
 * 
 * Return: Always 0 
 * 
 */

int main(int argc, char *argv[]){

    (void) argv;
    printf("%d\n", argc - 1);
    return (0);
}