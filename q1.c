#include <stdio.h>

int main(){
    int inicial;
    int AnoEscolhido;
    int copa;
    int jogos;

     scanf("%d", &AnoEscolhido);

    for ( inicial = 1896; inicial <= 2022; jogos = inicial = inicial + 4){
        if (AnoEscolhido < 1896)
        {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d", AnoEscolhido);
        break;
        }
        else if (AnoEscolhido == 1916 || AnoEscolhido == 1940 || AnoEscolhido == 1942 || AnoEscolhido == 1944 || AnoEscolhido == 1946){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d", AnoEscolhido);
        return 0;
        break;
        }
        else if (jogos != AnoEscolhido){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d", AnoEscolhido);
        break;
        }
        else if (jogos == AnoEscolhido){
        printf("Os jogos Olimpicos de Verao ocorreram no ano de %d", AnoEscolhido);
        break;
        }
        
    }
    for ( inicial = 1930; inicial <= 2022; copa = inicial = inicial + 4)
    {
       if (copa == AnoEscolhido)
       {
        printf("A copa do mundo ocorreu no ano de %d", AnoEscolhido);
        break;
       }
       
    }

return 0;    
}
