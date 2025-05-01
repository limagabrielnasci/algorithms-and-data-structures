#include <stdio.h>
#include <string.h>

typedef struct {
    int hora;
    int minutos;
    int segundos;
} Horario;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    Horario horario;
    Data data;
    char texto[50];
} Compromisso;

int main() {
    /*
    Escreva um trecho de codigo para fazer a criac¸ ´ ao dos novos tipos de dados conforme ˜
    solicitado abaixo:
    • Horario: composto de hora, minutos e segundos. ´
    • Data: composto de dia, mes e ano. ˆ
    • Compromisso: composto de uma data, horario e texto que descreve o compromisso. 
    */
    Compromisso reuniao;

    reuniao.data.dia = 15;
    reuniao.data.mes = 5;
    reuniao.data.ano = 2025;

    reuniao.horario.hora = 14;
    reuniao.horario.minutos = 30;
    reuniao.horario.segundos = 00;

    strcpy(reuniao.texto, "reuniao importante");

    printf("data: %02d/%02d/%d\n", reuniao.data.dia, reuniao.data.mes, reuniao.data.ano);
    printf("hora: %02d:%02d:%02d\n", reuniao.horario.hora, reuniao.horario.minutos, reuniao.horario.segundos);
    printf("descricao: %s\n", reuniao.texto);
}