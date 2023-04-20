#include <stdio.h>
#include <string.h>

void invertir(char* cadena)
{
    char *fin = cadena;
    while (*fin != '\0') {
        fin++;
    }
    fin--; // Apuntar al último caracter antes de '\0'

    // Intercambiar los caracteres desde los extremos hacia el centro
    char *inicio = cadena;
    while (inicio < fin)
    {
        char temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        inicio++;
        fin--;
    }
}
int main( )
{
    char cadena[100];
    printf("Texto colocado es:\n");
    gets(cadena);
    invertir(cadena);
    printf("Texto modificado: %s",cadena);

    return 0;
}
