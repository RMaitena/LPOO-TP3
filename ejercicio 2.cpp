#include<stdio.h>
int suma, i, array[]={1, 2, 3, 4, 5};
float prom;
void calcSumaProm(int *array, int n, int *suma, float *prom);

int main(){
	int n = sizeof(array) / sizeof(array[0]); //sizeof se utiliza para devolver el tamaño total en bytes (en este caso array cuanto ocupa) Y la 2da solo para el 1mer elemento
	calcSumaProm(array, n, &suma, &prom);
	printf("\nLa suma es: %d", suma);
	printf("\nY el promedio es: %.2f", prom);
	return 0;
}

void calcSumaProm(int *array, int n, int *suma, float *prom){
	*suma = 0;
	for(i=0 ; i<n ; i++){
		*suma = *suma + *(array + i); // => *suma += *(array + i);
	}
	*prom = (float)*suma / n;
}

