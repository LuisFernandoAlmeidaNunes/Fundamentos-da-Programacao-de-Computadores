/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_5.c
 * Author: user
 *
 * Created on 29 de Maio de 2022, 18:10
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num_matricula, alun_logc[15], k = 0, alun_ling[10], j = 0;
    for (int i = 0; i < 15; i++) {
        printf(" Digite o numero de matricula do aluno de lógica: ");
        scanf(" %d", &alun_logc[k]);
        k++;
    }
    for (int i = 0; i < 10; i++) {
        printf(" Digite o numero de matricula do alunos de linguagem de programação: ");
        scanf(" %d", &alun_ling[j]);
        j++;
    }
    // comparações
    for (int i = 0; i < 15; i++) {
        for (int l = 0; l < 10 ; l++ ) {
            if (alun_logc[i] == alun_ling[l]) {
                printf("O aluno de matricula %d estuda nas duas turmas\n", alun_logc[i]);
            }
        }
    }
    return (EXIT_SUCCESS);
}

