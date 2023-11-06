#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>


int main () {

//setlocale(LC_ALL, "portuguese");

float nota;

printf("informe sua nota\n");
scanf("%f", &nota);

if (nota >= 9) {
	printf("Excelente\n");
}

if (nota >= 7 && nota <=8.9) {
	printf("Bom\n");
}

if (nota >= 5 && nota <= 6.9) {
	printf("Razoável\n");
}

if (nota < 5) {
	printf("Insuficiente\n");
}




return 0;
}
