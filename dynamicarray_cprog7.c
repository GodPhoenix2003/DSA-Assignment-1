#include <stdio.h>
#include <stdlib.h>

void main(){
    int *x, nx, *y, ny, *z, nz;
    printf("\nEnter the array size of the 1st array: ");
    scanf("%d", &nx);
    x = malloc(nx * sizeof(int));
    printf("\nEnter the array elements for the 1st array:-\n");
    for(int i = 0; i < nx; i++)
        scanf("%d", &x[i]);
    printf("\n1st Original Array:-\n");
    for(int i = 0; i < nx; i++)
        printf("%d  ", x[i]);
    printf("\n\nEnter the array size of the 2nd array: ");
    scanf("%d", &ny);
    y = malloc(ny * sizeof(int));
    printf("\nEnter the array elements for the 2nd array:-\n");
    for(int i = 0; i < ny; i++)
        scanf("%d", &y[i]);
    printf("\n2nd Original Array:-\n");
    for(int i = 0; i < ny; i++)
        printf("%d  ", y[i]);
    nz = nx + ny;
    z = malloc(nz * sizeof(int));
    int i;
    for(i = 0; i < nx; i++)
        z[i] = x[i];
    for(int j = 0; j < ny && i < nz; i++, j++)
        z[i] = y[j];
    for(i = 0; i < nz; i++){
        for(int j = (i+1); j < nz; j++){
            if(z[i]>z[j]){
                int tmp = z[i];
                z[i] = z[j];
                z[j] = tmp;
            }
        }
    }
    printf("\n\nMerged Array:-\n");
    for(i = 0; i < nz; i++)
        printf("%d  ", z[i]);
}