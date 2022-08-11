#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *a, n;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    a = malloc(n * sizeof(int));
    printf("\nEnter the array elements:-\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int data;
    printf("\nEnter the data to be searched: ");
    scanf("%d", &data);
    int flag = 0;
    for(int i = 0; i < n; i++){
        if(data == a[i]){
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        printf("\nData Found!\n");
    else
        printf("\nData Not Found!\n");
}