#include<stdio.h>
#include<string.h>

int main(int argc, char*argv[]){
    int cntb =0, cntr = 0;
    double costob, costor, mediab, mediar, costobtot,costortot;
    int risp;
    bool ciclo= false;

    do{
        printf("inserisci tipo di consumazione, bevanda ""1""o ristorazione ""2"", per terminare esci""3""\n");
        scanf("%s", &risp);

        if(risp== "b"){
            printf("inserici importo:\n");
            scanf("%f", &costob);
            costobtot = costobtot + costob;
            cntb++;
            ciclo = false;

        }else if(risp=="r"){
            printf("inserisci importo:\n");
            scanf("%f", &costor);
            costortot = costortot + costor;
            cntr++;
            ciclo = false;
        }else if(risp=="esci"){
            ciclo = true;
        }else{
            printf("carattere non valido");
        }
    }while(ciclo = true);

    mediab= costobtot/cntb;
    mediar= costortot/cntr;

    if(cntb>cntr){
        printf("sono state vendute più bevande");
    }else{
         printf("sono state vendute più ristorazioni");
    }

    printf("l'icasso medio delle bevande è di%f", mediab);
    printf("l'icasso medio delle ristorazioni è di%f", mediar);

    return 0;
}