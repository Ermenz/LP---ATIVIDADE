#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {

setlocale(LC_ALL, "portuguese");
	
int codigo;	

printf("código do produto\n");
printf("1 - Camiseta\n");
printf("2 -  Calça\n");	
printf("3-  Sapato\n");	

printf("Informe o código do produto\n");
scanf("%d", &codigo);


switch (codigo)  {


case 1:

printf("Camiseta\n");
printf("Valor: 500\n");


 break;
 
 case 2:
 printf("Calça\n");
printf("Valor: 600\n");
 
 
 
 break;
 
  case 3:
   printf("sapato\n");
   printf("Valor: 700\n");
 
 
 
  break;
 
 
 default:
 printf("Número inválido\n");
  break;
	}
		
	
	
	
	return 0;	
}
