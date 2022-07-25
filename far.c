#include<stdio.h>

int main()
{
  int fahr, celcius, lower, upper, step;
  


  lower =0;
  step= 20;
  upper = 300;
 
 fahr= lower;
while(lower <= upper)
{
 celcius = 5 * (fahr - 32) /9;
 printf("%d\t,%d\n",lower,celcius);
 lower = lower + step;
}

}
