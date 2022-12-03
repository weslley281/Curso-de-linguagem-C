#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    time_t tempo;
    time(&tempo);
    struct tm *data;
    data = localtime(&tempo);
    int hora = data->tm_hour;
    int minuto = data->tm_min;
    int segundo = data->tm_sec;
    int dia = data->tm_mday;
    int mes = data->tm_mon + 1;
    int ano = data->tm_year + 1900;

    printf("O data atual é %i:%i:%i %i/%i/%i\n", hora, minuto, segundo, dia, mes, ano);

    system("pause");
    return 0;
}
