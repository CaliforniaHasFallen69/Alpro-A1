/* Nama File        : CekHari.c
/* Deskripsi        : Menampilkan nama hari berdasarkan inputan
/* Nama pembuat     : Zaeri Haikal Rabbani/24060121140159
/* Tanggal pembuatan: 14 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int hari;

    printf("masukkan tanggal : ");
    scanf("%d",&hari);

    switch(hari){
        case 1 :
            printf("Senin");
            break;
        case 2 :
            printf("Selasa");
            break;
        case 3 :
            printf("Rabu");
            break;
        case 4 :
            printf("Kamis");
            break;
        case 5 :
            printf("Jumat");
            break;
        case 6 :
            printf("Sabtu");
            break;
        case 7 :
            printf("Minggu");
            break;
        default :
            printf("salah");
            break;

    return 0;





    }












}
