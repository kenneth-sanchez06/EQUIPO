
#include <stdio.h>

int main()
{
    int hora, minuto, minutoNuevo;
    printf("Hora: ");
    scanf_s("%i", &hora); 
    printf("Minutos:");
    scanf_s("%i", &minuto);
    printf("Agregar:");
    scanf_s("%i", &minutoNuevo); 
    minuto = minuto + minutoNuevo;
    if (minuto >= 60)
    {
        hora = hora+minuto/60;
        minuto = minuto%60;
        if (hora >=24)
    	 hora = (hora / 24) + (hota % 24);
    
    }
    printf("La nueva hora es: %2.2i:%2.2i", hora, minuto);
   
    
}

