#include <stdio.h>

int main() {
    float valor;
    char nivel;
    
    scanf("%c", &nivel);
    scanf("%f", &valor);

    if(nivel == 'a'){
        valor = valor + (valor * 0.05);
        printf("R$ %.2f", valor);
    }
    else if(nivel == 'b'){
        valor = valor + (valor * 0.07);
        printf("R$ %.2f", valor);
    }
    else if(nivel == 'c'){
        valor = valor + (valor * 0.08);
        printf("R$ %.2f", valor);
    }
    return 0;
}
