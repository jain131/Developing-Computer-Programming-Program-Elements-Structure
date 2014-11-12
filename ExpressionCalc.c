#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Welcome to Calculator. \n");							//Welcome Screen
  char check;
  FILE * Log;
  Log = fopen ("Log.txt", "w+");							//Opening a new file for Logging info. Opening in reading and writing mode
      
    do
    { 															
      printf("Please select an Arithmetic operation from the following: \n");			
      printf("1)Addition \t 2)Subtraction \t 3)Multiplication \t 4)Division ");
      int ch;
      char opt;
      float var1, var2;
      float res;
      
      scanf(" %d", &ch);											//Input of operation, A SPACE before %d makes scanf ignore whitespace
      
      printf("Do you want to use the previous result as one of the operands (Y/N)? \n");
      scanf(" %c", &opt);													//Asking user if he wants to use saved previous result
      
      printf("Enter any values for operand(s): \n");
      if(opt=='Y' || opt=='y')
        {
          printf("Operand 1 is the previous result: ");
          rewind(Log);
          fscanf(Log, " %f", &var1);									//Taking value from the LOG text file for variable 1
          printf("%f \n", var1);
        }  
      
      else 
        {
          printf("Operand 1: "); 
          scanf("%f", &var1);										//Input of variable1
        }
        
      printf("Operand 2: "); 
      scanf(" %f", &var2);									//This is an optional starting asterisk indicates 
      															//that the data is to be read from the stream but 
      															//ignored, i.e. it is not stored in the corresponding argument.	
      															//Input of variable2
      switch(ch) 												//Switch case construct: Statements for different conditions
      {
        case 1: res=var1+var2; break;
        case 2: res=var1-var2; break;
        case 3: res=var1*var2; break;
        case 4: res=var1/var2; 
      } 
      
      printf("\nThe Result= %f \n", res); 						//Displaying result from file
      
      rewind(Log);
      fprintf(Log, " %f", res);								//Logging the result
      							 
      printf("Continue y/n?  ");								//Asking user to continue or exit
      scanf(" %c",&check);										//A SPACE before %d makes scanf ignore whitespace
      
    }while(check!='n');    				
   
   fclose(Log);													//Closing opened text file
   
return(0);
}