#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n = 25 & 12;

    printf("O resultado � %d\n", n);

    system("pause");
    return 0;
}
