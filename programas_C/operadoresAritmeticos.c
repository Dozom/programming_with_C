#include <stdio.h>
#include <math.h>
int main(void){
        int num1, num2, resultado;
        printf("Escribe un numero: ");
        scanf("%d",&num1);
        printf("Escribe otro numero: ");
        scanf("%d",&num2);
        resultado = num1 + num2;
        printf("La suma de %d y %d es: %d\n",num1,num2,resultado);
        resultado = num1 - num2;
        printf("La resta de %d y %d es: %d\n",num1,num2,resultado);
        resultado = num1 / num2;
        printf("La división de %d y %d es: %d\n",num1,num2,resultado);
        resultado = num1 * num2;
        printf("La multiplicación de %d y %d es: %d\n",num1,num2,resultado);
        resultado = (int)pow(num1,2);
        printf("El primer numero (%d) elevado a 2 es: %d\n",num1,resultado);
        resultado = num1 % 2;
        printf("El modulo del primer numero (%d) entre 2, es: %d\n",num1,resultado);

        return 0;
}
