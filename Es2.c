#include <stdio.h>
#define DIM 5

int main()
{
int n[DIM];
  int i;
  
  for(i= 0; i<DIM; i++)
  {
    printf("inserisci numeri: \n");
    scanf("%d", &n[i]);
  }

  for(i = DIM - 1; i>0; i--)
  {
    printf("%d\n", n[i]);
  }
  
  return 0;
}