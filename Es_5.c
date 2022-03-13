#include <stdio.h>
#include <string.h>

//$./a.out e il prima cella di memoria di argv[] <-- RICORDATELO :)

int main(int argc, char*argv[]) 
{
  int cnt = 0, i, k=0;

  for(i = 1; i<argc; i++) 
  {
    cnt += strlen(argv[i]);
  }
  
char frase[cnt + (argc -2)];

  //vado a sommare argc -2 per togliere la soluzione(primo elemento) e lo spazio finale a fine frase
  //ottenendo l'array vuoto pronto per essere riempito.

  for(i = 0; i<cnt; i++)
  {
    
    for(int j= 0; j<strlen(argv[i]); j++)
    {
      frase[k] = argv[i][j];//argv[i] contiene argomento inserito a riga di comamndo in posizione i, j é char.
      k++;
    }
    
    frase[k]= ' ';
    k++;
  }
    printf("%s", frase); //stampo tutta la fraseh.
  
  return 0;
}