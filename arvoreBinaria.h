#ifndef ARVOREBINARIA_FILE
#define ARVOREBINARIA_FILE

#include <stdlib.h>


typedef struct _no{

    //infos *compromissos;
    int info;
    struct no *esquerda, *direita;

}no;

no * criaNo(int info);


#endif // ARVOREBINARIA_FILE
