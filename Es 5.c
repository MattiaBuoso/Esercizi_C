/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int
main ()
{
  int a, b, c, diff, pari = 0, dispari = 0, nulli = 0;
  do
    {
      printf ("inserisci a\n");
      scanf ("%d", &a);
      printf ("inserisci b\n");
      scanf ("%d", &b);
      printf ("inserisci c\n");
      scanf ("%d", &c);

      diff = a - b;

      if (diff % 2 == 0)
	{
	  pari++;
	}
      else if (diff == 0)
	{
	  nulli++;
	}
      else
	{
	  dispari++;
	}
    }
  while (a + b < c);

  printf ("\ndifferenza tra a e b e' pari % d", pari);
  printf ("\ndifferenza tra a e b e' nulla % d", nulli);
  printf ("\ndifferenza tra a e b e' dispari % d", dispari);

  return 0;
}
