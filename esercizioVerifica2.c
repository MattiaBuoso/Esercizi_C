#include<stdio.h>

int main(int argc, char*argv[]){
    int n;

    do{
        pritf("inserisci n");
        scanf("%d", &n);

    }while(n>0);

    for(int i = 0; i=n; i++){
        for(int j = 0; j= n; j++){
            printf('*');
        }
        printf(" ");
    }
    return 0;
}