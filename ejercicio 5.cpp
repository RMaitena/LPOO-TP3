#include <stdio.h>
#include <string.h>
char cadena1[100]={"quiero "}, cadena2[100]={"dormir"}, result[200];
int i, j;
void concatenar(char *cadena1, char *cadena2, char *resultado);

int main(){
    concatenar(cadena1, cadena2, result);
    printf("\nLa cadena concatenada es: %s\n", result);
    return 0;
}

void concatenar(char *cadena1, char *cadena2, char *result) {
    for (i=0 ; cadena1[i] != '\0'; i++) { // copy la 1ra cadena a result
        result[i] = cadena1[i];
    }
    
    for (j=0 ; cadena2[j] != '\0'; j++) {
        result[j + strlen(cadena1)] = cadena2[j]; // copy la 2da cadena en la pos. correcta a result q ya tenia la 1ra
    }
}
