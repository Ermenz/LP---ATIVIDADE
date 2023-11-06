#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (){
setlocale(LC_ALL, "portuguese");

int a;
int i;
int nota;
float soma = 0;
float media;


printf("informe número de notas\n");
scanf("%d", &a);


for (i = 1; i <= a; i++) {

printf("informe %d° nota\n", i);
scanf("%d", &nota);

soma+= nota;
}

i--;
media = soma/i;

printf("A soma das notas é %.2f\n", soma);
printf("A media de notas é %.2f\n", media);



return 0;

 }
