#include <stdio.h>
#define SHIPPING_CHARGE_PER_BOX 2.75

int box_cnt;
float tot_shp_cost;
int x;

//#define QUOTE "Hopefully this will help!"
char first[50];
char last[50];

long int number = 5000000000;

int main(void)
{
  box_cnt = 2;
  
  tot_shp_cost = box_cnt * SHIPPING_CHARGE_PER_BOX;
  
  printf("%f", tot_shp_cost);
  //printf("The answer is %10.1f ",1.2345);
  //printf("/%10.5s/ ",QUOTE);
  //printf("x = %010d ",43);
  //printf("%c",'\x4d');
  
  /*
  while(1){
  printf("\nenter your first and last name:\n");
  scanf("%s%s", first, last);
  printf("\n%s...%s", first, last);
  }
  */
  
  //printf("decimal: %020d   long decimal: %ld   hex: %x   long hex: %lx", number, 
  //number, number, number);
  
  x = 10 / 2 + 3;
  printf("\n%d",x);
x = 3 + 2 * 5;
printf("\n%d",x);
x = 10 % 5;
printf("\n%d",x);
x = 3 % 2;
printf("\n%d",x);
x = 3 * 6 / 4;
printf("\n%d",x);
x = strlen("test string");
printf("\n%d",x);
  
  //result = (a + 5) / (b - 3);
  //area = length * width;
  //Farenheit = (Celcius * (9 / 5)) + 32;
  //volume = length * width * height;
  //surface_area = (2 * length * width) + (2 * width * height) + (2 * height * length);
  
  
  int a = 2;
    int b = 6;
    int c = 9;
    int y;

    y = a + b / 2  * c++;
    printf(" a + b * c++ = %d \n", y);
    
    int x = 10;
printf("dec=%d; octal=%o; hex=%x ", x, x, x);
  
  return 0;
}