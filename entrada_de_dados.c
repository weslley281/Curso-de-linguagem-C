#include <stdio.h>
#include <locale.h>

void main(){
    char nome[100];
    unsigned int idade;
    float peso;

    printf("Qual eh o seu nome? ");
    scanf("%s", &nome);

    printf("Qual eh a sua idade? ");
    scanf("%d", &idade);

    printf("Qual eh o seu peso? ");
    scanf("%f", &peso);

    printf("\nSeu nome eh %s\n Sua idade eh %d\n Seu peso eh %.2fKg\n", nome, idade, peso);

    system("pause");
}
