#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1 = 4, n2 = 3;

    printf("A expre��o � verdadeira %s\n", n1 > n2 && n2 < n1 ? "sim" : "n�o" );

    system("pause");
    return 0;
}
