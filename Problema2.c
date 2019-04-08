#include <stdio.h>
#include <stdlib.h>
#define MAX 10

float *recebe_notas(float *notas, int maximo){
    int res[maximo];
    for(int i = 0; i < maximo; i++){
        if(*(notas+i) >= 6.0){
            *(notas+i) = 1;
            //printf("high grade\n");
        } else{
            *(notas+i) = 0;
            //printf("low grade\n");
        }

    }
    return notas;
}

int *conta_notas(float *apr, int maximo){
    int aprov = 0, reprov = 0;
    int *res;
    res = malloc(sizeof(int));
    for(int i = 0; i < maximo; i++){
        if(*(apr+i) == 1){
            aprov++;
            //printf("%d aproved\n", aprov);
        } else{
            reprov++;
            //printf("%d reproved\n", reprov);
        }


    }
    res[0] = aprov;
    res[1] = reprov;
    return res;
}

int percent_aprov(int *vect){
    int *perc;
    perc = malloc(sizeof(int));
    for (int i = 0; i < 2; i++){
        perc[i] = vect[i] * 10;
        
    }
    vect[0] = perc[0];
    vect[1] = perc[1];
    if(perc[0] > 50){
        return 1;
    } else
        return 0;
}

/*int main(){
    float notas[MAX]={1.2, 7.3, 4.5, 6.7, 8.7, 6.7, 8.7, 1.2, 4.5, 6.7}, *apr;
    int *res;
    int percentage;
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
    
    

    return 0;
}*/
