#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");

  float valor1;
  float valor2;
  float resultado;
  char escolha ;
  
  printf("Opera��es dispon�veis\n");
  printf(" (+) ADI��O \n");
  printf(" (-) SUBTRA��O \n");
  printf(" (/) DIVIS�O \n"); 
  printf(" (+) MULTIPLICA��O \n");

  printf ("informe operac�o\n");
  scanf ("%c", &escolha);


  printf ("Informe primeiro valor\n");
  scanf ("%f", &valor1);


  printf ("Informe segundo valor\n");
  scanf ("%f", &valor2);



  switch (escolha)
    {

    case '+':
      resultado = valor1 + valor2;
      break;


    case '-':
      resultado = valor1 - valor2;
      break;


    case '/':
      resultado = valor1 / valor2;
      break;


    case '*':
      resultado = valor1 * valor2;
      break;

    default:
      printf ("operac�o inv�lida\n");
      break;
    }

  printf ("Resultado: %.2f", resultado);



  return 0;
}
