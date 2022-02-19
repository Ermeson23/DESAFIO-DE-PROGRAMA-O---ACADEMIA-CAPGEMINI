/*O codigo abaixo informa a quantidade de anagramas sem e com repeticao. 
Os anagramas com repeticao, porem, estao restritos a ocorrencias de repeticoes
de uma mesma letra, como nas palavras: ovo, oco, ermeson, etc. Ele tambem 
diferencia letras maiusculas e minusculas, portanto peco que os testes sejam 
realizados ou com caracteres maiusculas ou minusculas. */

#include<stdio.h>
int main()
{
    int j, k, l, m, n, o, p, repete=0, produto=1, produto2=1, comp=1;
    char palavra[12];
    printf("Digite a palavra escolhida:\n");
    scanf(" %s", palavra);
    printf("%s\n", palavra);
    int i;
    i=0;
    while(palavra[i]!='\0')
    {
        i++;
    }
/*O laco de repeticao WHILE e utilizado quando se quer repetir um trecho de codigo,
porem nao se sabe a quantidade exata de repeticoes necessarias, elas podem repetir 
inumeras vezes, ou nao repetir nenhuma vez, caso a condicao entre parenteses nao 
seja verdadeira. Acima eu utilizei o WHILE para verificar o tamanho util da STRING,
a qual, na linguagem C, tem o fim determinado pelo '\0'. Eh fato que eu poderia utilizar
a funcao strlen, pertencente a  biblioteca string.h, e passar como parametro a string 
palavra, entao ela me retornaria o tamanho util do vetor de caracteres, mas eu optei 
por nao utiliza-la, tendo em vista que o codigo possui um tamanho 
relativamente pequeno. */
    for(j=0; j<i-1; j++) {for(k=j+1 ; k<i; k++)
    {
if(palavra[j] == palavra[k]){repete++;}
    }
}
/*Acima foi realizado um outro laco de repeticao, objetivando que este percorresse toda 
a string, comparasse e verificasse a repeticao de palavras. (Isto e necessario para nao 
interferir no resultado do calculo de anagramas, que nada mais eh que uma permutacao de 
n elementos, quando estes elementos se repetem, requisita-se a eliminacao das repeticoes, 
para que estas nao sejam contadas a mais e ofereca um resultado equivocado. Aqui estao 
as Formulas para os calculos de permutacoes com e sem repeticao, que resolve a questao 
dos anagramas. Pn= n! e Pn,k=n!/k!). O laco escolhido foi o FOR, tendo em vista que o 
tamanho da string me diz o quanto eu preciso percorrer, comparando letra com letra. 
Caso elas fossem iguais, incrementa-se a variavel "repete" em uma unidade. */
    printf("A quantidade de letras: %d letras. \n", i);
    
    if(repete==0)
    {
        for(n=1; n<=i; n++)
        {
            produto=produto*n;
        } 
    /*Utilizando-se da estrutura condicional IF, testei a existencia de repeticao, quando 
    ela nao existe, calcula-se simplesmente a permutacao dos n elementos. Tal permutacao 
    resolvi atraves de outro laco For, uma variavel cumulativa para efetuar o fatorial, que
    eh a multiplicacao de um numero pelos que o antecedem ate o 1, usei tambem uma variavel 
    auxiliar n. N precisa comecar em 1, a fim de nao resultar em zero todas as sucessivas 
    multiplicacoes. A cada iteracao do laco for, o produto recebe 'produto*n', sendo o n 
    incrementado em uma unidade , a cada iteracao, ate que n seja menor ou igual a i, que 
    eh o tamanho util da string. */
        printf("\nRESPOSTA SOLICITADA: %d anagramas.\n", produto);
    }
    else
    {
    	if(repete==1)
    	{
    	repete= repete+1;
    	/*Havendo repeticao, ou seja, a afirmacao booleana, de que 'repete == 0' sendo falsa,
    	verifico se a repeticao eh igual a 1. Se eh igual a um, eu adiciono um ao repete, caso 
    	contrario, ele estaria dizendo que houve uma repeticao de duas letras, porem guardaria 
    	uma repeticao, e nao a presenca das duas, por isso, inicialmente, quando 'repete == 1', 
    	eu adicionei uma unidade a variavel.*/
    	
        for(l=1; l<=i; l++)
        {
            produto2=produto2*l;
        }
        for(m=1; m<=repete; m++)
        {
            comp=comp*m;
        }
printf("\nRESPOSTA SOLICITADA: %d anagramas.\n", produto2 / comp) ;
			}
			else
			{
				if (repete>1) 
			{ 
    for(l=1; l<=i; l++){
        produto=produto*l;
        }
        for(m=1; m<=repete; m++)
        {
            comp=comp*m;
        }
printf("\n RESPOSTA SOLICITADA: %d anagramas. \n", produto / comp) ;
}}
/*Nos dois lacos de repeticao FOR acima, eu realizo a mesma operacao de fatoriais, a diferencaa eh que neles eu 
preciso compensar a repeticao, por isso a mensagem exibida nao sera produto, mas produto2, 
e no outro apenas produto, dividido por comp, que seria a compensacao, como na formula P n,k=n!/k!*/
    return 0;
}} 


