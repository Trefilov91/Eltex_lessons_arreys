#include <stdio.h>

#define ARREY_SIZE 5

int main()
{
    int i = 0, buffer = 0;
    int arrey[ARREY_SIZE] = {1,2,3,4,5};

    for(i = 0; i < ARREY_SIZE/2; i++){
       buffer = arrey[i];     
       arrey[i] = arrey[ARREY_SIZE - 1 - i];
       arrey[ARREY_SIZE - 1 - i] = buffer;
    }
    
    for(i = 0; i < ARREY_SIZE; i++){
        printf("%d ", arrey[i]);        
    }
    printf("\n"); 

    return 0;
}