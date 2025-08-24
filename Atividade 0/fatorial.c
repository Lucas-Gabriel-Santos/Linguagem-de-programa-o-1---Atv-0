#include <stdio.h>

int main() {
    int n;
    int fatorial = 1;
    
    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        fatorial *= i;
    }
    
    printf("%d ", fatorial);
    
    return 0;
    
}