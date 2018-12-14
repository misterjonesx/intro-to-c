//prints name and address stored in variables

#include <stdio.h>

int main(void)
{
  char first_name[] = "Michael";
  char last_name[] = "McCarron";
  char zip[] = "181-0015";
  char prefecture[] = "Tokyo-to";
  char city[] = "Mitaka-shi";
  char address_1[] = "2-7-18 Oosawa";
  char address_2[] = "Sawanodai Corpo #2";
  
  
  printf("%s %s\n%s\n%s, %s\n%s, %s", first_name, last_name, zip, prefecture,
  city, address_1, address_2);
  
  return 0;
}