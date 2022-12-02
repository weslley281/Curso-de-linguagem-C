#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n = 37 & 17;

    printf("O resultado é %d\n", n);

    system("pause");
    return 0;
}
