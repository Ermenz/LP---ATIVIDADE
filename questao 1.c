#include <stdio.h>

int main()
{
    
    
    int celcius;
    
    printf("Informe os graus Celcius");
    scanf("%d", &celcius);
    
    if (celcius>25) {
        printf("O clima está ensolarado");
    }
    else if (celcius<15) {
        printf("O clima está chuvoso");
    }
    else {
        printf("O clima está nublado");
        
    }
      

    

    return 0;
}
