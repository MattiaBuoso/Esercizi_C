
#include <stdio.h>

int
main (int argc, char *argv[])
{
  int n;
  do
    {
      printf ("inserisci n\n");
      scanf ("%d", &n);
    }
  while (n < 0);

  int varCiclo = n - n * 2;

  for (int i = varCiclo; i <= n; i++)
    {
      printf ("%d\n", i);
    }

  return 0;
}
