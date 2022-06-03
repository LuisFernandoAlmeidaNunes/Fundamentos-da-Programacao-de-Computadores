/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_13.c
 * Author: user
 *
 * Created on 1 de Junho de 2022, 09:05
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM_TURM 8
/*
 * 
 */
int main(int argc, char** argv) {
    int matricula[TAM_TURM], nota[TAM_TURM], nota_turma = 0;
    float media = 0;
    for( int i = 0; i < 8; i++ ){
        printf(" Digite a matricula do aluno: ");
        scanf(" %d", &matricula[i]);
        printf(" Digite a nota do aluno: ");
        scanf(" %d", &nota[i]);
        nota_turma += nota[i];
    }
    media  = nota_turma / 8.0;
    for( int i = 0; i < 8 ; i++){
    printf(" A matricula do primeiro aluno: %d\n", matricula[i]);
    printf(" A nota do primeiro aluno: %d\n", nota[i]);
    }
    printf(" A media da sala é %f", media);
    return (EXIT_SUCCESS);
}

