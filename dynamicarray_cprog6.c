#include <stdio.h>
#include <stdlib.h>

void main(){
    int *a, r, c;
    printf("\nEnter the number of rows and columns:\n");
    scanf("%d %d", &r, &c);
    a = malloc(r * c * sizeof(int));
    printf("\nEnter the 2D array elements:-\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++)
            scanf("%d", &*(a+i*c+j));
    }
    int min = *(a+0*c+0);
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(*(a+i*c+j) < min)
                min = *(a+i*c+j);
        }
    }
    printf("\nMinimum element in the 2D array is: %d\n", min);
}