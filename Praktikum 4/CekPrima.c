/*
Nama = Zaeri Haikal Rabbani
NIM  = 24060121140159
Nama File = CekPrima.c
Deskripsi = Mengecek bilangan tersebut prima atau tidak

*/




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Bil;
    int Counter;
    int Jumlah=0;

    printf("Masukkan Bilangan : ");
    scanf("%d",&Bil);

    for(Counter = 1;Counter <= Bil ;Counter++)

    {
        if(Bil % Counter == 0)
        {
            Jumlah++;
        }

    }
    if(Jumlah == 2)
        {printf(" %d adalah Bilangan Prima",Bil);}
    else
        {printf(" %d Bukan Bilangan Prima",Bil);}


    return 0;
}
