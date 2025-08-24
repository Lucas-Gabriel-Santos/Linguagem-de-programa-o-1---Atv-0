#include <stdio.h>

int main() {
    char string[100];
    int cont = 0;

    printf("Digite algo: ");
    fgets(string, 100, stdin);
    
    while (string[cont] != '\0') {
        cont++;
    }
    
    if (string[cont - 1] == '\n') {
        cont--;
    }

    printf("A frase tem %d caracteres.\n", cont);
    return 0;
}