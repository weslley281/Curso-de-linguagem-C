#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int n = rand() % 10 + 1;

    setlocale(LC_ALL, "Portuguese");

    printf("Eu gerei o numero (%d)\n", n);

    system("pause");
}
