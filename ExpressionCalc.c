#include <stdio.h>

int main()
{
  printf("Welcome to Calculator. \n");						//Welcome Screen
  
    printf("Please select an Arithmetic operation from the following: \n");			
    printf("1)Addition \t 2)Subtraction \t 3)Multiplication \t 4)Division \n");
    int ch, var1, var2;
    float res;
    scanf("%d", &ch);										//Input of operation
    printf("Operand 1: "); 
    scanf("%d", &var1);										//Input of variable1
    printf("Operand 2: "); 
    scanf("%d", &var2);										//Input of variable2
    switch(ch) 												//Statements for different conditions
    {
      case 1: res=var1+var2; break;
      case 2: res=var1-var2; break;
      case 3: res=var1*var2; break;
      case 4: res=var1/var2; 
    } 
    printf("%d operation %d \n", var1, var2);
    printf("\nThe Result= %f \n", res);     				//Printing result
        
return 0;
}