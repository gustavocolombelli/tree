#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"

int main()
{

    struct _no * raiz = criaNo(0);
    printf("%d", raiz->info);
    return 0;
}
