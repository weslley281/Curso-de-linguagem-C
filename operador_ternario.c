#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1 = 4, n2 = 8;
    /*
    char result[10];
    result = (n1 > n2) ? "sim" : "não";
    */

    printf("o resultado é igual à %s\n", (n1 > n2) ? "sim" : "não");

    system("pause");
    return 0;
}
