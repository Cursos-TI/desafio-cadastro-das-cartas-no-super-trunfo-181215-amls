#include <stdio.h>

int main (){
    int nota1, nota2, nota3;
int média;

printf ("***programa de cálculo de média***\n");

printf("digite a sua primeira nota: \n");
scanf ("%d", &nota1);

printf("digite a sua segunda nota: \n");
scanf ("%d", &nota2);

printf("digite a sua terceira nota: \n");
scanf ("%d", &nota3);

média = ( nota1 + nota2 + nota3) /3;

printf("A média é: %d", média);

return 0;
