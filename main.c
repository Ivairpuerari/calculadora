#include <stdio.h>


void testaPrimos(int a, int b){
    int primo, i, j, num;

    if(a >= b){
        num = a-b;
        int v[num];
        j = a;
        for(i = 0; j <= b; i++){
            v[i] = j;
            j++;
        }
    }else{
        num = b - a;
        int v[num];
        j = b;
        for(i = 0; j <= a; i++){
            v[i] = j;
            j++;
        }
    }
    i = 0;
    int primos[num];
    for(j = v[0]; j <= num; j++){
        if(v[j] % 1 == 0 && v[j] % 2 == 0 || v[j] % 3 == 0){
            primos[i] = v[j];
            i++;
        }
    }

    for(i = 0; i <= num; i++){
        printf("Primo: %d\n", v[i]);
    }


}

int main(){
    int op, a, b;

    printf("Digite a opção: ");
    scanf("%d", &op);

    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite um numero: ");
    scanf("%d", &b);

    switch(op){
        case 0:
            break;
        case 1:
            break;
        case 2:
            testaPrimos(a,b);
            break;
        case 3:
            break;
    }

    return 0;
}
