#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float velocidade;
    printf("Digite sua velocidade: ");
    fflush(stdin);
    scanf("%f", &velocidade);

    if(velocidade > 80){
        printf("\nVocê foi multado!\nSe lascou trouxa\n");
    }else{
        printf("\nContinua aumentando a velocidade pra tu ver o que acontece!\n");
    }

    system("pause");
    return 0;
}
