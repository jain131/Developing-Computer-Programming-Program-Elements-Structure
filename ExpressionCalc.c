#include <stdio.h>

int main()
{
  printf("Welcome to Calculator. \n");						//Welcome Screen
  char check;
    do
    {
      printf("Please select an Arithmetic operation from the following: \n");			
      printf("1)Addition \t 2)Subtraction \t 3)Multiplication \t 4)Division \n");
      int ch;
      float var1, var2;
      float res;
      
      scanf("%d", &ch);										//Input of operation
      printf("Enter any float values for operands: \n");
      printf("Operand 1: "); 
      scanf("%f", &var1);										//Input of variable1
      printf("Operand 2: "); 
      scanf("%f", &var2);										//Input of variable2
      switch(ch) 												//Switch case construct: Statements for different conditions
      {
        case 1: res=var1+var2; break;
        case 2: res=var1-var2; break;
        case 3: res=var1*var2; break;
        case 4: res=var1/var2; 
     } 
      printf("%f operation %f \n", var1, var2);
      printf("\nThe Result= %f \n", res); 			//Displaying result from file
      printf("Continue y/n?  \n");					//Asking user to continue or exit
      scanf("%c",&check);							//Getting rid of any garbage data in buffer 
      scanf("%c",&check);
      
    }while(check!='n');    				
   
return 0;
}