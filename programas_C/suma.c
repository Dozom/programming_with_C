#include <stdio.h>
int main(void){
    int num1, num2, resultado;
    printf("escribe el primer numero:\n");
    // %d significa entero decimal.
    // el & es para apuntar a la variable.
    scanf("%d", &num1);
    printf("escribe el segundo numero:\n");
    scanf("%d", &num2);
    resultado = num1 + num2;
    printf("el resultado de la suma es: %d\n",resultado);
    return 0;
}
