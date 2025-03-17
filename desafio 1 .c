#include <stdio.h>

int main() {
    int a,b;

    printf("Insira dois números:\n");
    scanf("%d %d", &a, &b);
    
    long int diff = (long)a - (long)b;
    
    long int ndiff = (-diff);
    while(diff != 0 && ndiff != 0) {
        diff ++;
        ndiff ++;
       // printf("Números : %ld \t %ld \n", diff, ndiff);
    }
    if (diff != 0) {
        printf("O segundo e maior");
    } else {
        printf("O primeiro e maior");
    }
    return 0;
}
