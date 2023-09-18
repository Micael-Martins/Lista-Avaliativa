#include <stdio.h>
    int n1, par, impar, digito, soma = 0;
int SomarNumeros(int n1){ 
    // executar o comando de somar aos dígitos
    while(n1>0){
        digito = n1 % 10;
        soma = soma + digito;
        n1 = n1 / 10;
}
}

int main() {


    scanf("%d", &n1);
    // dizer se o numero é par ou impar
    if(n1 % 2 == 0){
        printf("%d eh par\n", n1);
    }
    else {
        printf("%d eh impar\n", n1);
    }
    SomarNumeros(n1);
    
    printf("A soma dos algarismos de %d é %d", n1, soma);
    return 0;
}
