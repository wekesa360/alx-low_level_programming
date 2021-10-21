#include <stdio.h>
/**
 * fibonacci - returns the fibonacci value of a number
 * main - prints out the fibonacci value of a number.
 * 
 * @param i : An integer value.
 * @return int 
 * 
 */
int fibonacci(int i);

int main(){
    int i;

    for(i = 0; i < 10; i++){
        printf("%d\t\n", fibonacci(i));
    }
    return 0;
}
int fibonacci(int i){
    
    if(i == 0){
        return 0;
    }

    if(i == 1){
        return 1;
    }
    return (fibonacci(i-1) + fibonacci(i-2));
}
