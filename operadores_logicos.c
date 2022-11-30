#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1 = 4, n2 = 3;

    printf("A expreção é verdadeira %s\n", n1 > n2 && n2 < n1 ? "sim" : "não" );

    system("pause");
    return 0;
}
