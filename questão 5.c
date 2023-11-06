#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {

setlocale(LC_ALL, "portuguese");
	
int idioma;	




printf("idiomas diponíveis");
printf("1 - Inglês\n");
printf("2 - Espanhol\n");	
printf("3- Francês\n");	

printf("Informe o número do idioma\n");
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
 printf("Número inválido");
  break;
	}
		
	
	
	
	return 0;	
}
