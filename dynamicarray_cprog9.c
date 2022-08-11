#include <stdio.h>
#include <stdlib.h>

void main(){
    int *a, n;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    a = malloc(n * sizeof(int));
    printf("\nEnter the array elements:-\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] == 0){
            printf("\n0 can't be taken as input. Please re enter the data.\n");
            scanf("%d", &a[i]);
        }
    }
    printf("\nOriginal Array:-\n");
    for(int  i = 0; i < n; i++)
        printf("%d  ", a[i]);
    int x,y;
    printf("\n\nEnter the lower and upper limits of the range in which the data is to be deleted:\n");
    scanf("%d %d", &x, &y);
    for(int  i = (x-1); i < y; i++)
        a[i] = 0;
    printf("\nMerged Array:-\n");
    for(int i = 0; i < n; i++){
        if(a[i] != 0)
            printf("%d  ", a[i]);
    }
}