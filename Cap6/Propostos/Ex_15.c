/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_15.c
 * Author: alunos
 *
 * Created on 1 de Junho de 2022, 19:29
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int client[8], locacao[8], gratis[8];
    // coletando 8 clientes e suas locações
    for( int i = 0; i < 8; i++){
        printf(" Digite o codigo de cliente: ");
        scanf(" %d", &client[i]);
        printf(" Digite o numero de locações realizadas: ");
        scanf(" %d", &locacao[i]);
        if( locacao[i] >= 10 ){
            gratis[i] = floor(locacao[i] / 10.0);
        }
    }
    for( int i = 0; i < 8; i++){
        printf(" O cliente %d locou %d DVD's e ganhou %d de graça !\n", client[i], locacao[i], gratis[i]);
    }
    return (EXIT_SUCCESS);
}

