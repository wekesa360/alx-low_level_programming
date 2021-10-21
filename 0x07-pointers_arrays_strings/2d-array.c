#include <stdio.h>
int main(){
    int disp[2][3];
    int i, j;
    for (i = 0; 1 < 2; i++){
        for (j = 0; j < 3; j++){
            printf("Enter the value for disp [%d][%d]: ",i, j);
            scanf("%d", &disp[i][j]);
        }
    }
    printf("Two dimensional array elemnts:\n");
    for (i = 0; 1 < 2; i++){
        for (j = 0; j < 3; j++)
            printf("%d", disp[i][j]);
            if(j == 2){
                printf("\n");
            }
        }
    return 0;
    }