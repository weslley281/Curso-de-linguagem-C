#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    char name[300];
    unsigned int age;
    float weight;
    char verify;

    setlocale(LC_ALL, "Portuguese");

    printf("\nQual � o seu nome: ");
    scanf("%s", &name);

    printf("\nQuanto anos voc� tem: ");
    scanf("%d", &age);

    printf("\nQual � o seu peso: ");
    scanf("%f", &weight);

    printf("\n----------<<< Processando >>>----------");
    printf("\nMuito Prazer, %s. Voc� tem %d anos e seu peso � %.2fKg.\n", name, age, weight);

    system("pause");
}
