/*O codigo abaixo solicita uma entrada, do tipo inteira, ao usuario,
a partir desta entrada, que eu recebo com a variavel, 'n', eu imprimo a requisitada escada*/
#include<stdio.h>
int main()
{
    int i, j, k, n;
    printf("Digite o tamanho da escada desejada:\n");
    scanf("%d", &n);
    /*Os tres lacos de repeticao FOR fazem as seguintes atividades:
Contando de um a n, e incrementando-se uma unidade a cada iteracao
de i, j e k; um unico FOR seria suficiente para exibir n asteriscos,
aplicando-se '\n', temos a quebra de pagina, entretanto,temos apenas
uma lista vertical de n asteriscos. Portanto, faz-se necessario um 
outro FOR, no caso inicializado com o j, que vai ate o i, preenchendo
nas linhas o numero de asteriscos necessarios para a estrutura da escada.
Por fim, a fim de mostrar a escada espelhada,imprimi um outro laco, dando
'n' espacos, iniciando em 0 e dando(n-1) espacamentos, ate se espelhar os
'n' elementos na ultima linha da escada.*/

    for (i=1; i<=n; i++)
    {
        for(k=0; k<(n-i); k++)
        {
            printf(" ");
        }
        
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}

