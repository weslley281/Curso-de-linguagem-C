#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1 = 5;
    int n2 = 5;

    int compare = n1 > n2;

    printf("O resultado é %i\n", compare);

    system("pause");
    return 0;
}
