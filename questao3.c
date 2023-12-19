#include <stdio.h>


int calcularFatorial(int num) {
    int fatorial = 1;
    for (int i = 1; i <= num; ++i) {
        fatorial *= i;
    }
    return fatorial;
}


int maiorFatorial(int a, int b) {
    int fatorialA = calcularFatorial(a);
    int fatorialB = calcularFatorial(b);

    return (fatorialA > fatorialB) ? fatorialA : fatorialB;
}

int main() {
    int num1, num2;

    printf("Digite um numero inteiro ai: ");
    scanf("%d", &num1);

    printf("Digite outro numero inteiro ai: ");
    scanf("%d", &num2);

    int resultado = maiorFatorial(num1, num2);

    printf("O maior fatorial deles de %d! e %d! eh: %d\n", num1, num2, resultado);

    return 0;
}
