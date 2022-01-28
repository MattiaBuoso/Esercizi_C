/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int a, b, r, s = 0;

  do
    {
      printf ("inserisci a\n");
      scanf ("%d", &a);
      printf ("inserisci b\n");
      scanf ("%d", &b);

      r = a * b;
      printf ("\n\tIl Risultato della moltiplicazione e: %d\n\n", r);

      s = s + r;
  
    }
  while (a != 0 && b != 0);
  
  printf ("\n\tIl Risultato della somma e: %d\n\n", s);

  return 0;
}
