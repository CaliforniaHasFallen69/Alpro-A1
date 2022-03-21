/*
Nama = Zaeri Haikal Rabbani
NIM  = 24060121140159
Nama File = FaktorBil.c
Deskripsi = Menghitung faktor bilangan yang diberikan

*/




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Bil;
    int Counter;

    printf("Masukkan Bilangan : ");
    scanf("%d",&Bil);

    for(Counter = 1;Counter <= Bil ;Counter++)

    {
        if(Bil % Counter == 0)
        {
            printf(" %d",Counter);
        }
    }


    return 0;
}
