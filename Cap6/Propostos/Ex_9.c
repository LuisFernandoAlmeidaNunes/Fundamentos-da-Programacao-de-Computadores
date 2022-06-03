/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_9.c
 * Author: alunos
 *
 * Created on 31 de Maio de 2022, 10:07
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 3

/*
 * 
 */
int main(int argc, char** argv) {
    // alterar 3 para 10
    int codigo[TAM], preco[TAM], k = 0, reajust[TAM], j = 0;
    char nome[TAM][10];
    // preenchendo as 10 informações
    for (int i = 0; i < TAM; i++) {
        printf(" Digite o: ");
        printf(" Nome do produto: ");
        scanf(" %s", &nome[k]);
        printf(" codigo do produto: ");
        scanf(" %d", &codigo[k]);
        printf(" preço do produto: ");
        scanf(" %d", &preco[k]);
        k++;
        // sofre aumento
        //todos os casos
        if ((preco > 1000) && (codigo[k] % 2 == 0)) {
            preco[k] = preco[k] + (preco[k] * (20.0 / 100.0));
            reajust[j] = k;
            j++;
        } else {
            //caso só o código
            if (codigo[k] % 2 == 0) {
                preco[k] = preco[k] + (preco[k] * (15.0 / 100.0));
                reajust[j] = k;
                j++;
            } else {
                //caso só o preço
                if (preco > 1000) {
                    preco[k] = preco[k] + (preco[k] * (10.0 / 100.0));
                    reajust[j] = k;
                    j++;
                }
            }
        }

    }
    printf(" Os produtos que sofrem aumento são: ");
    for (int i = 0; i < j; i++) {
        printf("%s: %d = %dR$",nome[reajust[j]], codigo[reajust[j]], preco[reajust[j]]);
    }
    return (EXIT_SUCCESS);
}

