#include "Problema1.h"
#include "Problema2.h"
#include "torre.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

//aluno: Joao Gabriel Antunes Santos
//matricula: 170013651

int main(int argc, char const *argv[])
{
    float notas[MAX], *apr;
    int *res;
    int percentage, entradas[MAX], pesos[MAX], t, result, n; //declaraçao de todas as variaveis necessarias

    printf("------------------------Problema 1----------------------------\n");//inicio do problema 1
    printf("Escreva 10 valores reais para entrada: ");
    for(int i = 0; i < MAX; i++){
        scanf("%d", &entradas[i]);
    }
    printf("Escreva 10 valores reais para os pesos: ");
    for(int i = 0; i < MAX; i++){
        scanf("%d", &pesos[i]);
    }
    printf("Escreva o limiar: ");
    scanf("%d", &t);


    result = fneuronio(&entradas[0], &pesos[0], t, MAX);
    if(result == 1){
        printf("Neuronio ativado!");
    } else printf("Neuronio inibido!");

    printf("------------------------Problema 2----------------------------\n");//inicio do problema 2
    printf("Escreva as notas a seguir: ");
    for(int i = 0; i <  MAX; i++)
       scanf("%f", &notas[i]);

    apr = recebe_notas(&notas[0], MAX);
    res = conta_notas(&apr[0], MAX);
    printf("%d aprovados e %d reprovados\n", res[0], res[1]);

    percentage = percent_aprov(&res[0]);
    printf("%d por cento aprovado e %d por cento reprovado.\n", res[0], res[1]);
    if(percentage == 1)
        printf("Mais da metade da turma passou.\n");
    else
        printf("Mais da metade da turma reprovou.\n");

    
    printf("------------------------Problema 3----------------------------\n");//inicio do problema 3
    printf("Escreva o numero de discos: ");
    scanf("%d", &n);
    move(n, 'A', 'B', 'C');

    return 0;
}
