#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1 = 4, n2 = 3;

    n1 += n2;
    n2 -= n1;

    printf("O valor de n1 é igual à %d\n", n1);
    printf("O valor de n2 é igual à %d\n", n2);

    system("pause");
    return 0;
}
