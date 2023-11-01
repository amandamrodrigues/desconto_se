/*Uma loja fornece 15% de desconto para clientes que
compram acima de R$ 500,00. Faça um programa que
receba o total de compras de um cliente e, através de
uma função sem retorno, calcule e mostre o total a
pagar. Se o cliente comprou menos de R$ 500,00 deverá
aparecer uma mensagem informando que ele não
tem direito ao desconto e quanto ele deve gastar para
conseguir esse desconto.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void desconto(float totalcompras);

int main()
{
    setlocale (LC_ALL, "Portuguese");

    float totalcompras;

    printf("Qual o total gasto em compras?\n");
    scanf ("%f", &totalcompras);

    desconto(totalcompras);



}
void desconto(float totalcompras){
    float desc, desconto, falta;
    if (totalcompras>=500){
        desc=totalcompras+(totalcompras*0.15);
        printf("Total a pagar: %.2f com desconto incluso", desc);
    }else{
            falta=500-totalcompras;
    printf ("Não possui desconto, precisa gastar mais %.2f para adquirir o desconto", falta);
    }


}
