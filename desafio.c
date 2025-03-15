#include <stdio.h>

int main() {
    
    int a,b,resultado;

    printf("Digite dois numeros!\n");
    
    printf("Primeiro numero:\n");
    scanf("%d", &a);
    printf("Segundo numero:\n");
    scanf("%d", &b);
    
    resultado = a + b;
    int sub = a - b;
    
    int maior = (resultado + sub) / 2;
   
    printf("O maior número e %d",maior);
    
    return 0;
}
