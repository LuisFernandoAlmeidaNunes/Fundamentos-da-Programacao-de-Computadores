/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ex_3.c
 * Author: user
 *
 * Created on 28 de Maio de 2022, 14:13
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int variavel, j = 0, k = 0, cod_client = 1, cod_prod[10], num_prod[10];
    // pegando 10 item e suas unidades
    for (int i = 0; i < 3; i++) {
        printf(" Digite o codigo de produto: ");
        scanf(" %d", &variavel);
        cod_prod[j] = variavel;
        j++;
        printf(" Digite a quantidade do produto: ");
        scanf(" %d", &variavel);
        num_prod[k] = variavel;
        k++;
    }
    while (cod_client != 0) {
        printf(" Digite seu codigo de cliente ( 0 - para fechar o programa ): ");
        scanf(" %d", &cod_client);
        if( cod_client == 0 ){
            break;
        }
        printf(" Digite o código de produto: ");
        scanf(" %d", &variavel);
        
        // determinando produto
        for (int i = 0, j = 0; i < 3; i++, j++) {
            if (cod_prod[j] == variavel) {
                k = j;
                break;
            } else {
            // codigo nao bate
            printf("\n Codigo de produto inexistente ! \n");
            }
        }
            printf("\n Digite a quantidade desejada: ");
        // codigo bate
            printf("\n Digite a quantidade desejada: ");
            scanf(" %d", &variavel);
            if (variavel > num_prod[k]) {
                // é requisitado mais do que há em estoque
                printf("\n Não há estoque para atender ao pedido !");
            } else {
                // tudo bate
                printf("\n Pedido efetuado com sucesso !\n");
            }
    }
    return (EXIT_SUCCESS);
}

