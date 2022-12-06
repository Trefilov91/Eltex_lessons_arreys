#include <stdio.h>

#define MATRIX_SIZE 3

int main()
{
    int i = 0, j = 0;
    int matrix[MATRIX_SIZE][MATRIX_SIZE] ={{1,2,3},\
                                           {4,5,6},\
                                           {7,8,9}}; 
    for(i = 0; i < MATRIX_SIZE; i++){
        for(j = 0; j < MATRIX_SIZE; j++){
            printf("%d ", matrix[i][j]);        
        }
        printf("\n");
    }
 
    return 0;
}