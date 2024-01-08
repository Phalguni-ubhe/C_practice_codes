#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int temp_add = 0 , temp_or = 0, temp_xor = 0;
  int max_add = 0 , max_or = 0, max_xor = 0;
  for(int a=1; a<n; a++)
  {
      for(int b=a+1; b<=n; b++)
      {
          temp_add = a&b;
          temp_or = a|b;
          temp_xor = a^b;
          
          if(temp_add > max_add && temp_add < k)
          {
              max_add = temp_add;
          }
          if(temp_or > max_or && temp_or < k)
          {
              max_or = temp_or;
          }
          if(temp_xor > max_xor && temp_xor < k)
          {
              max_xor = temp_xor;
          }
      }
  }
  printf("%d\n%d\n%d",max_add ,max_or ,max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}