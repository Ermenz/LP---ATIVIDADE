#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {

setlocale(LC_ALL, "portuguese");
	
int idioma;	




printf("idiomas dipon�veis");
printf("1 - Ingl�s\n");
printf("2 - Espanhol\n");	
printf("3- Franc�s\n");	

printf("Informe o n�mero do idioma\n");
scanf("%d", &idioma);


switch (idioma)  {


case 1:

printf("Welcome");
 break;
 
 case 2:
 printf("bienvenida");
 break;
 
  case 3:
 printf("accueillir");
  break;
 
 
 default:
 printf("N�mero inv�lido");
  break;
	}
		
	
	
	
	return 0;	
}
