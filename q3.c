#include <stdio.h>
int senha, senha2;
int main() {
    scanf("%d", &senha);
    if(senha < 999 || senha > 10000){
        return 0;
    }
    else{

        printf("senha cadastrada: %d\n", senha);
        while (senha > 999 && senha < 10000) {
            scanf("%d", &senha2);
            if (senha2 != senha){
                printf("senha invalida!\n");
            }
            else if (senha2 == senha){
                printf("senha valida!\n");
                break;
            }
        }
    }
    return 0;
}
