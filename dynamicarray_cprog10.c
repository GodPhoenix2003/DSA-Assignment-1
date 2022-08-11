#include <stdio.h>
#include <stdlib.h>

void input(int *x, int size);
void display(int *x,int size);
void inputafterreallocation(int *x, int size, int newsize);

void main(){
	int *a, n;
	printf("\nEnter the array: ");
	scanf("%d", &n);
	a = calloc(n , sizeof(int));
	input(a, n);
	printf("\nOriginal Array:-\n");
	display(a, n);
	printf("\n\nEnter the amount of extra data: ");
	int n1;
	scanf("%d", &n1);
	n1 = n + n1;
	printf("\nAfter reallocation:-\nEnter the new data:\n");
	a = realloc(a, n1);
	inputafterreallocation(a, n, n1);
	printf("\nModified Array:-\n");
	display(a, n1);
}

void input(int *x, int size){
	printf("\nEnter the array elements:\n");
	for(int i = 0; i < size; i++)
		scanf("%d", &x[i]);
}

void display(int *x, int size){	
	for(int i = 0; i < size; i++)
		printf("%d  ", x[i]);
}

void inputafterreallocation(int *x, int size, int newsize){
	for(int i = size; i < newsize; i++)
		scanf("%d", &x[i]);
}