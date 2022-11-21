#include <stdio.h>
#include <stdlib.h>

void main(){
    char nome[10];
    printf("What's your name? ");
    scanf("%s", &nome);
    printf("Please to meet you %s\n", nome);
    system("pause");
}
