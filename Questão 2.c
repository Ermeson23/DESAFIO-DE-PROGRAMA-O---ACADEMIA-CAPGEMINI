/*No codigo abaixo, pede-se ao usuario que digite uma senha, ao fazer isso,
e necessario pressionar a tecla "ENTER". Com isso, o programa imprime uma
mensagem na tela, informando se a quantidade de caracteres inserida esta de
acordo com a exigencias minimas de caracteres, a saber SEIS.Se sim, isto sera 
informado, a fim de simular melhor uma interacao de rede social; caso nao, 
o programa imprime uma mensagemna tela, informando ao usuario a quantidade de
caracteres minimas que precisam ser adicionadas, que e o pedido da questao-desafio,
a fim de cumprir as exigencias do sistema de seguranca citado. 
*/
#include<stdio.h>
int main()
{
    char senha[20];
    printf("\t\tOlá! Seja muito bem-vind@!\n\n");
    printf("Digite uma senha com o valor minimo de 6 caracteres:\n");
    scanf("%s", senha);
    int i;
    i=0;
    while(senha[i]!='\0')
    {
        i++;
    }
    if(i>=6)
    {
        printf("\nA senha inserida satisfaz os criterios minimos de segurança. Prossiga com o cadastro.");
    }
    else{
        printf("\nQuantidade de caracteres insuficientes para uma senha segura! \nAdicione, no mininmo, %d caractere(s), para prosseguir com o cadastro.", 6-i);
    }
    return 0;
}

