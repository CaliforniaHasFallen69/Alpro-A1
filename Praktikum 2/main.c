/*Nama File: bujursangkar.c*/
/*Deskripsi: menghitung luas bujur sangkar*/
#include <stdio.h> /*Header file*/
int main(){ /*Program Utama*/
/*Kamus*/
 int S; /*Sisi bujursangkar*/
 int Luas; /*Luas bujursangkar*/
/*Algoritma*/
 printf("======Menghitung Luas Bujursangkar=======\n");
 printf("=========================================\n");
 printf("\nMasukan Sisi (S) = ");
 scanf("%d",&S); /*input*/
 Luas=S*S; /*(proses) hitung luas bujursangkar*/
 /*output*/
 printf("\n=========================================\n");
 printf("Luas bujursangkar (S x S)==> %d X %d = %d\n",S,S,Luas);
 printf("=========================================\n");
 return 0;
}
