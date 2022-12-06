#include <stdio.h>

#define MATRIX_SIZE 3
#define TOP_FILL 1
#define BOT_FILL 0
#define DIAGONAL 0 // 0 to fill giagonal by TOP_FILL, 1 to fill by BOT_FILL


int main()
{
    int i = 0, j = 0, fill_positions = MATRIX_SIZE - DIAGONAL;
    int matrix[MATRIX_SIZE][MATRIX_SIZE];


    for(i = 0; i < MATRIX_SIZE; i++){
        for(j = 0; j < MATRIX_SIZE; j++){
            matrix[i][j] = ( j < fill_positions ) ? TOP_FILL : BOT_FILL; 
            printf("%d ", matrix[i][j]);     
        }
        fill_positions--;
        printf("\n");
    }
    

    return 0;
}