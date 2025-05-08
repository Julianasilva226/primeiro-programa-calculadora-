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
     printf("Escolha a opção desejada do menu.\n\n");
     printf("1 - adição\n");
     printf("2 - subtração\n");
     printf("3 - multiplicação\n");
     printf("4 - divisão\n");
     printf("5 - porcentagem\n\n");
     printf("opção: ");
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
    		printf("digite os valores para subtração.\n");
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
    		printf("digite os valores para multiplicação.\n");
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
    		printf("digite os valores para divisão.\n");
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
           printf("A opção digitada não esta disponivel no menu.");
           system("pause");
           system("cls");	
    	}	     			
	}
   return 0;
   
}
