#include <stdio.h>

int main() {
    int v1, v2;

    scanf("%d", &v1);
    scanf("%d", &v2);

    if(v1 == v2){
        printf("Os valores lidos sao iguais");
    }
    else if(v1 == 0 || v2 == 0){
        if(v1 > v2){
            printf("%d eh maior que %d\n", v1, v2);
            printf("%d nao eh multiplo de %d", v1, v2);
        }
        else{
            printf("%d eh maior que %d\n", v2, v1);
             printf("%d nao eh multiplo de %d", v2, v1);
        }
    }
    else if(v1 > v2){
        printf("%d eh maior que %d\n", v1, v2);
        if( (v1 != 0) && v1 % v2 == 0){
            printf("%d eh multiplo de %d", v1, v2);
        }
        else {
            printf("%d nao eh multiplo de %d", v1, v2);
        }
    }
    else if(v1 < v2){
        printf("%d eh maior que %d\n", v2, v1);
        if( (v2 != 0) && v2 % v1 == 0){
            printf("%d eh multiplo de %d", v2, v1);
        }
        else {
            printf("%d nao eh multiplo de %d", v2, v1);
        }
    }
    return 0;
}
