#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int number;
    printf("Digite um numero: ");
    fflush(stdin);
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("\nO valor é par\n");
    }else{
        printf("\nO valor é impar\n");
    }
    printf("\n----------------Fim da Execução----------------\n");

    system("pause");
    return 0;
}
