#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num1 = 5;
    int num2 = 2;

    float result = (float) num1 / num2;

    printf("O resultado da soma é: %.2f\n", result);

    system("pause");
    return 0;
}
