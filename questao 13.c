#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (){
setlocale(LC_ALL, "portuguese");

float num1;
float num2;

printf ("informe primerio valor\n");
scanf("%f", &num1);

printf ("informe segundo valor\n");
scanf("%f", &num2);

if (num1 > num2) {
	printf ("O primeiro valor ( %.2f ) � o maior n�mero",num1);	
} else {
	printf("O segundo valor ( %.2f ) � o maior n�mero",num2);
}




return 0;
 }
