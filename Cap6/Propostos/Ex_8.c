/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_8.c
 * Author: user
 *
 * Created on 31 de Maio de 2022, 08:09
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    // escrevendo nomes com vetor
    int maior = 0, maior_k, k = 0, media[7], nota = 0, nota1, exame_final, exa[7], j = 0, exam = 0;
    char nome[7][10];
    // 7 nomes
    for (k = 0; k < 3; k++) {
        printf(" Digite o nome do aluno: ");
        scanf(" %s", &nome[k]);
        // calculando media
        printf(" Digite a nota 1 do aluno: ");
        scanf(" %d", &nota1);
        printf(" Digite a nota 2 do aluno: ");
        scanf(" %d", &nota);
        media[k] = nota + nota1;
        if( media[k] < 7) {
            exam++;
            exame_final = 7 - media[k];
            exa[j] = k;
            j++;
        }
        if( maior < media[k]){
            maior = media[k];
            maior_k = k;
        }
    }
    // mostrando os 7 nomes
    for (k = 0; k < 7; k++) {
        printf("%s tem a maior media\n", nome[maior_k]);
        printf("estão de recuperação: ");
        for( int i = 0; i < exam; i++){
        printf("%s\n", nome[exa[j]]);
        }
    }

    return (EXIT_SUCCESS);
}

