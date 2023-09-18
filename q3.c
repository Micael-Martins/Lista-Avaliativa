#include <stdio.h>
int senha, senha2;
int main() {
    scanf("%d", &senha);
    printf("senha cadastrada: %d\n", senha);
    while (senha != 0) {
        scanf("%d", &senha2);
        if (senha2 != senha){
            printf("senha invalida!\n");
        }
        else if (senha2 == senha){
            printf("senha valida!\n");
            break;
        }
    }
    return 0;
}
