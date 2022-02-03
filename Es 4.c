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
  double a, b, r, rad;
  do
    {

      printf ("inserisci numero a");
      scanf ("%d, &a");
      printf ("inserisci numero b");
      scanf ("%d, &b");


      if (a < b)
	{
	  r = (double) b / (double) a rad = sqrt (r);
	}
      else
	{
	  r = (double) a / (double) b rad = sqrt (r);
	}

    }
  while (r < 0);

  printf ("il rapporto non si puo fare perche la radice quadrata e' <0")
    return 0;
}
