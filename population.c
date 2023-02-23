
#include <cs50.h>
#include <stdio.h>
#include <math.h>


void periods (int start_size, int end_size);

int main(void)
{
     int n;
    do
    {
      n = get_double ("Start size: ");
    }
    while(n < 9);

    int k;
    do
    {
      k = get_int ("End size: ");
    }
    while(k < n);
    if (n==k)
    {
printf("Years: 0");
    }
else
{
    periods(n, k);
}
}


void periods (int start_size, int end_size)
{
  int period = 0;

   do
   {
    start_size = start_size + (start_size/3)-(start_size/4);
    period++;
   }
while (start_size < end_size);
printf("Years: %i", period);
         }
