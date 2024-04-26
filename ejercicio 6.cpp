#include <stdio.h>
int contAparicion(int *array, int size, int elemento);
int array[] = {11, 1, 11, 11, 1, 11, 11}, size = sizeof(array) / sizeof(array[0]);
int elementoBuscado = 1;
int apariciones = contAparicion(array, size, elementoBuscado); // call a func, como antes usabamos void, int pq recibimos un int
int cont = 0; // para la func

int main() {
    printf("\nEl elemento que fue buscado (%d), aparece un total de %d veces en el array\n", elementoBuscado, apariciones);
    return 0;
}

int contAparicion(int *array, int size, int elemento) {
    for(int i = 0; i < size; i++){ // bucle para comparar el val del momento con el buscado
        if(*array == elemento){
            cont = cont + 1; // => cont++;
        }
        array = array + 1; // => array++; ADEMAS para mover el puntero al sig. elemento del array
    }
    return cont;
}

