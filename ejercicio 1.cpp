#include<stdio.h>
int x=5, y=10;
void intercambio(int *a, int *b); // prototipado q ayuda al compilador a verificar el tipo de args. q se pasan a la func y el tipo de valor q devuelve

int main(){
	printf("\nAntes del intercambio por la funcion: x=%d, y=%d", x, y);
	intercambio(&x,&y);
	printf("\nDespues del intercambio de posiciones: x=%d, y=%d", x, y);
	return 0;
}

void intercambio(int *a, int*b){ // void: indicaria q la función no va a devolver ningun valor
	int temp = *a;
	*a = *b;
	*b = temp;
}

