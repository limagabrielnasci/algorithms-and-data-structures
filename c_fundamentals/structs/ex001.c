#include <stdio.h>
#include <string.h>

typedef struct {
    int hour;
    int minutes;
    int seconds;
} Time;

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    Time time;
    Date date;
    char description[50];
} Appointment;

int main() {
    /*
    Escreva um trecho de codigo para fazer a criac¸ ´ ao dos novos tipos de dados conforme ˜
    solicitado abaixo:
    • Horario: composto de hora, minutos e segundos. ´
    • Data: composto de dia, mes e ano. ˆ
    • Compromisso: composto de uma data, horario e texto que descreve o compromisso. 
    */
   Appointment meeting;

   meeting.date.day = 15;
   meeting.date.month = 5;
   meeting.date.year = 2025;

   meeting.time.hour = 14;
   meeting.time.minutes = 30;
   meeting.time.seconds = 00;

   strcpy(meeting.description, "important meeting");

   printf("Date: %02d/%02d/%d\n", meeting.date.day, meeting.date.month, meeting.date.year);
   printf("Time: %02d:%02d:%02d\n", meeting.time.hour, meeting.time.minutes, meeting.time.seconds);
   printf("Description: %s\n", meeting.description);
}