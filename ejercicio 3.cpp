#include<stdio.h>
int i, array[] = {11, 3, 22, 33, 1}, size = sizeof(array)/sizeof(int), max, min;
void max_min(int *array, int size, int *max, int *min);

int main(){
	max_min(array, size, &max, &min); // maxwin:)
	printf("\nEl maximo es: %d. \nY el minimo es: %d", max, min);
	return 0;
}

void max_min(int *array, int size, int *max, int *min){
	*max = *min = *array;
	for(i=0 ; i<size ; i++){ // ciclo para la comparacion
		if(*(array+i) > *max){
			*max = *(array+i);
		}
		if(*(array+i) < *min){
			*min = *(array+i);
		}
	}
}

