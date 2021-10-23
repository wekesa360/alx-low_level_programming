#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints resukt of adding given arguments
 * @argc: Number of arguments
 * @argv: Arguments recieved
 * 
 * Return 0 on succesm, 1 if there's a non-digit arg
 * 
 */
int main(int argc, char *argv[]){

    int sum, count, i;

    count = 1;
    sum = 0;
    if (argc == 1){
        printf("0\n");
        return (0);
    }
    while (count < argc){
        for (i = 0; argv[count][i] != '\0'; i++){
            if (!(isdigit(argv[count][i]))){
                printf("Error\n");
                return (1);
            }
        }
        sum += atoi(argv[count]);
        count++;
    }
    printf("%d\n", sum);
    return (0);

}