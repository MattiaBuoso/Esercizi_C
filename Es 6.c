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
  int a, b, c, s;

  double media;

  int cnt = 0;

  do
    {
      printf ("\ninserisci numero a\n");
      scanf ("%d", &a);
      printf ("\ninserisci numero b\n");
      scanf ("%d", &b);
    }
  while (a > b);

  do
    {
      printf ("inserisci un altro numero");
      scanf ("\n%d", &n);
      if (c > a && c < b)
	{
	  cnt++;
	  s = s + c;
	}
      else
	{

	}
      media = (double) s / (double) cnt;
    }
  while (c > a && c < b);

  printf ("\n\n la media e': %f", media);
  return 0;
}
