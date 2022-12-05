#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("Digite o primeiro numero: ");
    fflush(stdin);
    scanf("%d", &n1);

    printf("\nDigite o segundo numero: ");
    fflush(stdin);
    scanf("%d", &n2);

    if(n1 > n2){
        printf("\nO maior numero é %d\n", n1);
    }else{
        if(n1 < n2){
            printf("\nO maior numero é %d\n", n2);
            return 0;
        }
        if(n1 == n2){
            printf("\nOs numeros %d e %d são iguais\n", n1, n2);
            return 0;
        }
        printf("\nNumero invalido\n");
    }

    system("pause");
    return 0;
}
