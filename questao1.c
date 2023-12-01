#include <stdio.h>

int main(void) {
    int num[8], i, invercao;

    for(i = 0; i < 8; i++) {
        num[i] = i+1;
    }

    for(i = 0; i < 4; i++) {
        invercao = num[i];
        num[i] = num[7-i];
        num[7-i] = invercao;
    }

    for(i = 0; i < 8; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}


// Feito pelos Alunos Abnoan Gbariel e Fabricio Pereira.