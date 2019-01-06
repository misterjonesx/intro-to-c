#include <stdio.h>

int number;
/*
int main(void)
{
  number = 20;
while(number >= 0)
{
  printf("%d\n", number);
  number--;
}
}
*/

/*
int main(void)
{
  for(number = 1; number <= 10; printf("%d\n", number++));
  return 0;
}
*/

int main(void)
{
  double rate_per_hour = 100;
  double tot_hrs = 39;
  double tot_pay;
  
  /*
  if(tot_hrs > 40)
    tot_pay = (40 * rate_per_hour) + ((tot_hrs - 40) * rate_per_hour *1.5);
  else
    tot_pay = (tot_hrs * rate_per_hour);
    */
    
  tot_pay = (tot_hrs > 40) ? 
  (40 * rate_per_hour) + ((tot_hrs - 40) * rate_per_hour *1.5) :
  (tot_hrs * rate_per_hour);
  
  /*
  switch(tot_hrs > 40)
  {
    case 1:
      tot_pay = (40 * rate_per_hour) + ((tot_hrs - 40) * rate_per_hour *1.5);
      break;
    default:
      tot_pay = (tot_hrs * rate_per_hour);
  }
  */
  printf("$%.2f", tot_pay);
  
  printf("\n%d", (50 < 20 || 12 + 5 > 7));
  printf("\n%d", (1 + 1));
  printf("\n%d", 25 > 'x');
  
  _Bool is_true = 0;
  
  printf("\n%d", is_true = (1+1));
  
  return 0;
}