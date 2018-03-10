#ifndef ARVOREBINARIA_FILE
#define ARVOREBINARIA_FILE

typedef struct _dateTime{

    unsigned short int dia;
    unsigned short int mes;
    unsigned short int ano;
    unsigned short int hora; //00:00 as 23:59
    unsigned short int minuto;

}dateTime;

typedef struct _infos{

    char descricao[150];
    dateTime *hora;

}infos;

#endif ARVOREBINARIA_FILE
