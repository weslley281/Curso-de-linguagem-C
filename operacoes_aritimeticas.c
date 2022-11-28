/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float num1, num2,result;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    result = num1 + num2;
    
    printf("A soma de %.2f + %.2f é igual à %.2f\n", num1, num2, result);
    
    result = num1 - num2;
    printf("A subitração de %.2f - %.2f é igual à %.2f\n", num1, num2, result);
    
    result = num1 * num2;
    printf("A multiplicação de %.2f * %.2f é igual à %.2f\n", num1, num2, result);
    
    result = num1 / num2;
    printf("A divisão de %.2f / %.2f é igual à %.2f\n", num1, num2, result);
    
    system("pause");
    return 0;
}

