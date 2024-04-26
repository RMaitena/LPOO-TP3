#include<stdio.h>
int i, array1[]={1, 2, 3, 4, 5}, size = sizeof(array1)/sizeof(int), array2[5]; // al prof le funco array2[size] pero no fue mi caso¿?
void copiaArray(int *array1, int *array2, int size);

int main(){
	copiaArray(array1, array2, size);
	printf("\nAsi ha quedado el segundo array: ");
	for(i=0 ; i<size ; i++){
		printf("%d ", array2[i]);
	}
	
	return 0;
}

void copiaArray(int *array1, int *array2, int size){
	for(i=0 ; i<size ; i++){
		*(array2+i) = *(array1+i);
	}
}

