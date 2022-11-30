#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char nome[10];
    strcpy(nome, "Weslley");
    printf("%s\n", nome);

    float media = 6.5;
    char resultado[12];
    strcpy(resultado, (media >= 7) ? "Aprovado" : "Reprovado");
    printf("O aluno foi %s\n", resultado);

    int tamanhoDoResultado = strlen(resultado);
    printf("O tamanho do resultado é %d\n", tamanhoDoResultado);

    int comparacao = strcmp(nome, resultado);
    char comparacaoFormatado[5];
    strcpy(comparacaoFormatado, (comparacao == 1) ? "Sim" : "Não");
    printf("O nome é maior que resultado? %s\n", comparacaoFormatado);

    system("pause");
    return 0;
}
