#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
	
	int numero;
	int resultado;
	int i;
    
    printf("Digite um n�mero: ");
    scanf("%d", &numero);
 
 for (i = 2; i <= numero / 2; i++) {
    if (numero % i == 0) {
       resultado++;
        }
        }
        
 if (resultado == 0) {
 	printf("� um n�mero primo");	
 } else {  
  printf("N�o � um n�mero primo");
 }
	
	
return 0;
}
