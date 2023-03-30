#include <stdio.h>

//Função que calcula a média ponderada com base em 2 notas e retorna essa média (recebe nota1 e nota2 como float para calcular como float)
float Media(float nota1, float nota2)
{
    float media;
    media = ((nota1 * 4) + (nota2 * 6)) / (4 + 6);
    
    return media;
}

//Função que retorna o conceito com base na média
char Conceito(float media)
{
    char conceito;
    
    if (media < 5)
    {
        conceito = 'D';
        return conceito;
    }
    else if (media >= 5 && media < 7)
    {
        conceito = 'C';
        return conceito;
    }
    else if (media >= 7 && media < 9)
    {
        conceito = 'B';
        return conceito;
    }
    else if (media >= 9)
    {
        conceito = 'A';
        return conceito;
    }
}

int main()
{
    int nota1;
    int nota2;
    float media;
    char conceito;
    
    //solicitando e salvando notas1 e 2
    printf("Digite a primeira nota:\n");
    scanf("%i", &nota1);
    
    printf("Digite a segunda nota:\n");
    scanf("%i", &nota2);
    
    //vars 'media' e 'conceito' recebem retorno das funções
    media = Media(nota1,nota2);
    conceito = Conceito(media);
    
    //printando média e conceito
    printf("Média: %.2f\n", media);
    printf("Conceito: %c", conceito);

    return 0;
}
