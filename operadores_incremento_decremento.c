#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int number = 8;
    number++;

    printf("O resultado do incremento � igual � %d\n", number);

    number--;

    printf("O resultado do decremento � igual � %d\n", number);

    system("pause");
    return 0;
}
