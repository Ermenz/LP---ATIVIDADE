#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main (){

char diadasemana;
float desconto;
int compra;
float resultado;

//setlocale (LC_ALL, "portuguese");

printf("Digite (S) para Sim e (N) para não");


printf("Foi final de samana?\n");
scanf("%c", &diadasemana);

printf("informe valor da compra\n");
scanf("%d", &compra);


if (diadasemana == 'S' && compra > 100) {
   
 desconto =  compra * 0.1; 
 resultado =  compra - (compra * 0.1);
}

if (diadasemana == 'N' && compra > 100) {
   
 desconto =  compra * 0.15;     
 resultado =  compra - (compra * 0.15);
}

if (diadasemana == 'N' || diadasemana == 'S' && compra < 100) {
    
 resultado =  compra;
}




printf("Desconto %.2f\n", desconto);
printf("resultado %.2f\n", resultado);


return 0;
}
