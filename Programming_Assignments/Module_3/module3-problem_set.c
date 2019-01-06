1.1) if(a == b)
1.2) if(I != J)
1.3) if((m * m) < (n * 5))
1.4) if((x > 5) || (y < 10))
1.5) if((A >= 0) && (B <= 5))

2.

number = 20;
while(number >= 0)
{
  printf("%d", number);
  number--;
}

3. for(number = 1; number <= 10; printf("%d\n", number++));

4. 
  
  if(tot_hrs > 40)
    gross_pay = (40 * rate_per_hour) + ((tot_hrs - 40) * rate_per_hour *1.5);
  else
    gross_pay = (tot_hrs * rate_per_hour);
    
5.

  tot_pay = (tot_hrs > 40) ? 
  (40 * rate_per_hour) + ((tot_hrs - 40) * rate_per_hour *1.5) :
  (tot_hrs * rate_per_hour);
  
6. 

  switch(tot_hrs > 40)
  {
    case 1:
      tot_pay = (40 * rate_per_hour) + ((tot_hrs - 40) * rate_per_hour *1.5);
      break;
    default:
      tot_pay = (tot_hrs * rate_per_hour);
  }
  
7.1) true
7.2) true
7.3) false