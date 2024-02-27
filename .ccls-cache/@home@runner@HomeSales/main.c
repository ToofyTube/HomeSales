#include <stdio.h>
#include <string.h> 

int main(void) {
  printf("Enter Sales perosn's Initial:");
  char salesperson;
  float inputSale;
  float DTotal=0;
  float ETotal=0; 
  float FTotal=0;
  float grandTotal;
  float highTotal;

  
  scanf("%c", &salesperson);
  
  while(salesperson != 'z' && salesperson !='Z')
    {
      if(salesperson == 'D' || salesperson == 'd')
      {
        printf("Danielle please insert amount of sales:");
        scanf("%f",&inputSale);
        DTotal += inputSale;
      }
      else if (salesperson == 'E' || salesperson == 'e')
        {
        printf("Edward please insert amount of sales:");
        scanf("%f",&inputSale);
        ETotal += inputSale;
        }
      else if (salesperson == 'F' || salesperson == 'f')
        {
        printf("Fransis please insert amount of sales:");
        scanf("%f",&inputSale);
        FTotal += inputSale;
      }
      else
      {
        printf("Invalid sales person\n");
      }
      
      printf("Enter Sales perosn's Initial:");
      scanf("%c", &salesperson);
    }
  
  grandTotal = DTotal + ETotal + FTotal;

  

  
  printf("Danielle's total sales is %.2f\n",DTotal);
  printf("Edward's total sales is %.2f\n",ETotal);
  printf("Frank's total sales is %.2f\n",FTotal);
  
  printf("The grand total is %.2f\n",grandTotal);
  printf("The highest total is %.2f\n",highTotal);

  if(DTotal > ETotal && DTotal > FTotal);
  {
    highTotal = DTotal;
    printf("danielle-$%.2f\n", highTotal);
  }
  if(DTotal > ETotal && DTotal > FTotal)
  {
    highTotal = ETotal;
    printf("Edward-$%.2f\n", highTotal);
  }
  else
  {
    highTotal = FTotal;
    printf("Frank-$%.2f\n", highTotal);
  }

  
return 0;
}