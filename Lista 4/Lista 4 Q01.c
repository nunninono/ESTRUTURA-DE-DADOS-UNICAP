#include <stdio.h>
#include "..\ESTUDOS\implementacao\zpilha_de_inteiros.h"

int main(){
    Stack pilha1;
    inicialize(&pilha1);

    int num;

    while (isFull(pilha1) == 0) {
        printf("Insira um numero maior que zero: ");
        scanf("%d", &num);
        if (num < 0) {
            printf("Insira outro numero!\n");
        }
        else {
            push(&pilha1, num);
        }
    }

    while (isEmpty(pilha1) == 0){
        int valor = pop(&pilha1);
        printf("%d\n", valor);
    }

    return 0;
}    