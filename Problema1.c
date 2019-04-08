#include "Problema1.h"
#define MAX 10

int fneuronio(int *entradas, int *pesos, int t, int maximo){
    int soma = 0;

    for(int i = 0; i < maximo; i++){
        soma += entradas[i] * pesos[i];
        //printf("%d %d %d\n", entradas[i], pesos[i], soma);
    }
    if (soma > t){
        return 1;
    } else return 0;

}

/*int main(){
    int entradas[MAX];
    int pesos[MAX];
    int t, result;

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
    return 0;
}*/
