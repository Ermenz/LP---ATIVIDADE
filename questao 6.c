#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {

setlocale(LC_ALL, "portuguese");
	
int codigo;	

printf("c�digo do produto\n");
printf("1 - Camiseta\n");
printf("2 -  Cal�a\n");	
printf("3-  Sapato\n");	

printf("Informe o c�digo do produto\n");
scanf("%d", &codigo);


switch (codigo)  {


case 1:

printf("Camiseta\n");
printf("Valor: 500\n");


 break;
 
 case 2:
 printf("Cal�a\n");
printf("Valor: 600\n");
 
 
 
 break;
 
  case 3:
   printf("sapato\n");
   printf("Valor: 700\n");
 
 
 
  break;
 
 
 default:
 printf("N�mero inv�lido\n");
  break;
	}
		
	
	
	
	return 0;	
}
