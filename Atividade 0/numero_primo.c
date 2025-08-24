#include <stdio.h>

int main() {
    int n;
    int primo = 1;
    
    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                primo = 0; 
                break;
            }
        }

    if (primo == 1)
        printf("%d É primo.\n", n);
    else
        printf("%d Não é primo.\n", n);
        
    return 0;
}

