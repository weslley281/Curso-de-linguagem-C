#include <stdio.h>
#include <locale.h>

void main(){
    unsigned int idade = 26;
    float peso = 73.5;
    char orientacaoSexual = 'M';
    char nome[30] = "Weslley";

    printf("\n O %s e do sexo %c e tem %d anos e pesa %.2fKilos\n", nome, orientacaoSexual, idade, peso);
    system("pause");
}
