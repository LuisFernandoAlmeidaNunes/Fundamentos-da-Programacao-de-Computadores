/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_14.c
 * Author: alunos
 *
 * Created on 1 de Junho de 2022, 18:36
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int matricula[6], nota1[6], nota2[6], l = 0, situacao[6];
    float media[6], media_turma = 0, apv = 0, rpv = 0;
    //pegando os dados de 6 pessoas
    for( int i = 0; i < 6; i++){
        printf(" Digite o numero da matricula: ");
        scanf(" %d", &matricula[i]);
        //pegando 2 notas das 2 provas
            printf(" Digite a nota da prova 1: ");
            scanf(" %d", &nota1[i]);
            printf(" Digite a nota da prova 2: ");
            scanf(" %d", &nota2[i]);
        // calculando media
        media[i] = (nota1[i] + nota2[i]) / 2.0;
        if( media[i] >= 6 ){
            situacao[i] = 1;
            apv++;
        } else {
            situacao[i] = 2;
            rpv++;
        }
        media_turma += media[i] / 6.0;
    }
    //precentual de aprovados
    apv = (apv * 100.0) / 6.0;
    //precentual de aprovados
    rpv = (rpv * 100.0) / 6.0;
    // mostrando tabela
    printf(" media para passar = 6\n");
    printf(" Se situação: 1 = Aprovado | 2 - Reprovado");
    printf("| Matricula | Prova 1 | Prova 2 | Media | Situação|\n");
    for( int i = 0; i < 6; i++){
    printf("| %d | %d | %d | %.2f | %d |\n", matricula[i], nota1[i], nota2[i], media[i], situacao[i]);
    }
    //exibindo outros valores
    printf(" Media da turma = %.2f\n", media_turma);
    printf(" percentual de aprovados = %.2f%%\n", apv);
    printf(" percentual de reprovados = %.2f%%\n", rpv);
    return (EXIT_SUCCESS);
}

