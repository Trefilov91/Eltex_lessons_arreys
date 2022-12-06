#include <stdio.h>

#define STRINGS 5
#define COLUMNS 5

int main()
{
    int i = 0, j = 0, fill_value = 1;
    int string_sign = 1, column_sign = 1;
    int string_dop = 0, column_dop = 0; 
    int string_dop_inc = 0, column_dop_inc = 0;
    int string_fill = 1;
    int matrix_elements = STRINGS * COLUMNS;
    int matrix[STRINGS][COLUMNS];

    while(matrix_elements--){
        matrix[i][j] = fill_value++;
        if(string_fill){
            j += column_sign;
            if((j + column_dop) == (COLUMNS - 1)){
                string_fill = 0;  
                column_sign *= -1;
                column_dop = (column_sign < 0) ? j : ++column_dop_inc;   
            }
        }
        else{
            i += string_sign;          
            if((i + string_dop) == (STRINGS - 1)){
                string_fill = 1;
                string_sign *= -1;
                string_dop = (string_sign < 0) ? (i - 1) : ++string_dop_inc;
            }
        }     
    }

    for(i = 0; i < STRINGS; i++){
        for(j = 0; j < COLUMNS; j++){
            printf("%d ", matrix[i][j]);        
        }
        printf("\n");
    }
    

    return 0;
}