#include <stdio.h>
#include <stdlib.h>
#include <locale>


int main () {

}


    setlocale(LC_ALL,  "");

   float valorcompra;
   int diaDasemana;
   float valocompraDesconto;

   printf("qual valor da compra ?\n");
   scanf()"%f , &valorcompra);
   printf("se for fim de semana (1) senão digite (2)\n");
   scanf("%d" , &diaDasemana);


   if (diaDasemana ==1 && valorcompra>= 100)
   {

   valorCompraComDesconto = valorcompra - (valorcompra * 15)100);
   valorcompra=(valorcompra * 15)/100;
   printf("O cliente tem direto a um desconto de R$ %.2f\n" , valorcompra);
   printf("o valor a ser cobrado é R$ %.2f\n", valorcompracomdesconto);

}else 
{
valorCompraComDesconto = valorcompra - (valorcompra * 10)100);
   valorcompra=(valorcompra * 10)/100;
   printf("O cliente tem direito a um desconto de R$ %.2f\n" , valorcompra);
   printf("o valor a ser cobrado é R$ %.2f\n", valorcompracomdesconto);
}

 
return 0;





}









































