#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    char name[300];
    unsigned int age;
    float weight;
    char verify;

    setlocale(LC_ALL, "Portuguese");

    printf("\nQual é o seu nome: ");
    scanf("%s", &name);

    printf("\nQuanto anos você tem: ");
    scanf("%d", &age);

    printf("\nQual é o seu peso: ");
    scanf("%f", &weight);

    printf("\n----------<<< Processando >>>----------");
    printf("\nMuito Prazer, %s. Você tem %d anos e seu peso é %.2fKg.\n", name, age, weight);

    system("pause");
}
