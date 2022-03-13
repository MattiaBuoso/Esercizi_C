#include <stdio.h>
#define DIM 4

int main ()
{
  int n[DIM];
  int i;

  for (i = 0; i < DIM; i++)
    {
      n[i] = 0;
      printf ("Inserisci numero: \n");
      scanf ("%d", &n[i]);
    }

  for (i = 0; i < DIM; i++)
    {
      printf ("i numeri inseriti sono:");
      printf ("%d\n", n[i]);
    }

  return 0;
}

