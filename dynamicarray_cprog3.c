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
    for(int i = 0; i < n; i++){
        for(int j = (i + 1); j < n; j++){
            if(a[i] > a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("\nMinimum element in the array is: %d", a[0]);
}