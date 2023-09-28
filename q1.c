#include <stdio.h>

int main(){
    int inicial;
    int AnoEscolhido;
    int copa;
    int jogos;

     scanf("%d", &AnoEscolhido);

    for ( inicial = 1892; inicial <= 2022; jogos = inicial = inicial + 4){
        if (AnoEscolhido < 1896)
        {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.", AnoEscolhido);
        return 0;
        }
        else if (AnoEscolhido == 1916 || AnoEscolhido == 1940 || AnoEscolhido == 1942 || AnoEscolhido == 1944 || AnoEscolhido == 1946){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.", AnoEscolhido);
        return 0;
        }
        else if (jogos == AnoEscolhido){
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.", AnoEscolhido);
        return 0;
        }

    }
    for ( inicial = 1926; inicial <= 2022; copa = inicial = inicial + 4)
    {
       if (copa == AnoEscolhido)
       {
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.", AnoEscolhido);
        return 0;
       }

    }
    printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.", AnoEscolhido);
return 0;    
}
