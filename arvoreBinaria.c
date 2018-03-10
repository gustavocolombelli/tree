#include "arvoreBinaria.h"

no * criaNo(int info){

    no * novoNo = (no*)malloc(sizeof(no));

    novoNo->info = info;
    novoNo->esquerda = novoNo->direita = NULL;

    return novoNo;
};
