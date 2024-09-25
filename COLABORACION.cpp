
#include <stdio.h>

int main()
{
    int hora, minuto, minutoNuevo;
    printf("Hora: ");
    scanf_s("%i", &hora); 
    printf("Minutos:");
    scanf_s("%i", &minuto);
    printf("Añadir:");
    scanf_s("%i", &minutoNuevo); 
    minuto = minuto + minutoNuevo;
    if (minuto >= 60)
    {
        hora = hora+minuto/60;
        minuto = minuto%60;
    }
    if (hora >=24)
    { hora = 0;
    }
}

