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
    int data;
    printf("\nEnter the data to be searched: ");
    scanf("%d", &data);
    int flag = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(data == *(a+i*c+j)){
                flag = 1;
                break;
            }
            else
                continue;
        }
    }
    if(flag == 1)
        printf("\nData Found!\n");
    else
        printf("\nData Not Found!\n");
}