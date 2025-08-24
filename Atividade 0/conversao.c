#include <stdio.h>

int main() {
    double celsius, fahrenheit;
    int opc;
    
    printf("Escolha o numero 1 para celsius e 2 para fahrenheit para converter a temperatura: ");
    scanf("%d", &opc);
    
    if(opc == 1){
        printf("Digite uma temperatura em Celsius: ");
        scanf("%lf", &celsius);
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("%.2f °C = %.2f °F\n", celsius, fahrenheit);
    }
    else if(opc == 2){
        printf("Digite uma temperatura em Fahrenheit: ");
        scanf("%lf", &fahrenheit);
        celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
        printf("%.2f °F = %.2f °C\n", fahrenheit, celsius);
    }
    
    return 0;
}