# include <stdio.h>
# include <locale.h>
# include <stdlib.h>

int main()
{
int opcao=0;
float valor1,valor2;
float adicao,subtracao,multiplicacao,divisao,porcentagem;
int laco=1;
 
 
    for(laco=1;laco=1;)
    {
     setlocale(LC_ALL,"portuguese");	
     printf("\tCALCULADORA\n\n");
     printf("Escolha a op��o desejada do menu.\n\n");
     printf("1 - adi��o\n");
     printf("2 - subtra��o\n");
     printf("3 - multiplica��o\n");
     printf("4 - divis�o\n");
     printf("5 - porcentagem\n\n");
     printf("op��o: ");
     scanf("%d",&opcao);
 
      system("cls");
    	
      if(opcao == 1)
        {
            printf("digite os valores para somar.\n");
            printf(" primeiro valor: ");
            scanf("%f",&valor1);
            printf(" segundo valor: ");
            scanf("%f",&valor2);
        } 

      if(opcao == 1)
    	{
    		adicao = valor1 + valor2;
    		printf("%.2f + %.2f = %.2f", valor1,valor2,adicao);
    		system("pause");
    		system("cls\n");	
      	}
		
      if(opcao == 2)
    	{
    		printf("digite os valores para subtra��o.\n");
    		printf("primeiro valor: ");
    		scanf("%f",&valor1);
    		printf("segundo valor: ");
    		scanf("%f",&valor2);
    	}
	
      if(opcao == 2)
    	{
    		subtracao = valor1 -valor2;
    		printf("%.2f - %.2f = %.2f", valor1,valor2,subtracao);
    		system("pause");
    		system("cls");
    	}
	
      if(opcao == 3)
    	{
    		printf("digite os valores para multiplica��o.\n");
    		printf("primeiro valor: ");
    		scanf("%f",&valor1);
    		printf("segundo valor: ");
    		scanf("%f",&valor2);
    	}
	
      if(opcao == 3)
    	{
    		multiplicacao = valor1 * valor2;
    		printf("%.2f * %.2f = %.2f", valor1,valor2,multiplicacao);
    		system("pause");
    		system("cls");
    	}
	
      if(opcao == 4)
    	{
    		printf("digite os valores para divis�o.\n");
    		printf("primeiro valor: ");
    		scanf("%f",&valor1);
    		printf("segundo valor: ");
    		scanf("%f",&valor2);
    	}
 	
      if(opcao == 4)
    	{
	    	divisao = valor1 / valor2;
    		printf("%.2f / %.2f = %.2f", valor1,valor2,divisao); 
    		system("pause");
    		system("cls");
    	}
    	
      if(opcao == 5)
	  {
	       printf("digite o valor para porcentagem.\n");
	       printf("primeiro valor: ");
	       scanf("%f", &valor1);
	       printf("segundo valor: ");
	       scanf("%f", &valor2);
	  }	
	  
	  if(opcao == 5)
	  {
	       porcentagem = (valor1 * valor2)/100;
	       printf("%.2f %% de %.2f = %.2f \n", valor1,valor2,porcentagem);
	       system("pause");
	  }
	  
	  if(opcao >=5 || opcao<=0)
    	{
           printf("A op��o digitada n�o esta disponivel no menu.");
           system("pause");
           system("cls");	
    	}	     			
	}
   return 0;
   
}
