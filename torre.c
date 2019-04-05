#include <stdio.h>

void move(int n, char comeco, char aux, char fim){
    if(n >= 1){
        move(n - 1, comeco, fim, aux);
        printf("O disco %d se moveu da torre %c para a torre %c\n", n, comeco, fim);
        move(n - 1, aux, comeco, fim);
    }

}

int main(){
    int n;
    printf("Escreva o numero de discos: ");
    scanf("%d", &n);
    move(n, 'A', 'B', 'C');
    return 0;
}
