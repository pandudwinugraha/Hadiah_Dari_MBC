#include <stdio.h>
int main()
{
    int a, b, hasil, menu_pilihan;
    float c, d, hasil_bagi;
    while(1){
    printf("===============================================\n");
    printf("Program Kalkulator Sederhana_Hadiah Latihan MBC\n");
    printf("===============================================\n\n");
    printf("Menu Pilihan :\n");
    printf("1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n");
    printf("Pilih menu : ");
    scanf("%d",&menu_pilihan);
   
     switch (menu_pilihan){
             case 1:
                  printf("Masukan bilangan pertama : ");
                  scanf("%d", &a);
                  printf("Masukan bilangan kedua   : ");
                  scanf("%d", &b);
                      hasil = a + b;
                  printf("Hasil = %d\n", hasil);
                  break;
           
              case 2:
                 printf("Masukan bilangan pertama : ");
                 scanf("%d", &a);
                 printf("Masukan bilangan kedua   : ");
                 scanf("%d", &b);
                      hasil = a - b;
                 printf("Hasil = %d\n", hasil);
                 break;

              case 3:
                 printf("Masukan bilangan pertama : ");
                 scanf("%d", &a);
                 printf("Masukan bilangan kedua   : ");
                 scanf("%d", &b);
                      hasil = a * b;
                 printf("Hasil = %d\n", hasil);
                 break;
           
              case 4:
                 printf("Masukan bilangan pertama : ");
                 scanf("%f", &c);
                 printf("Masukan bilangan kedua   : ");
                 scanf("%f", &d);
                      hasil_bagi = c / d;   
                 printf("Hasil = %.2f\n", hasil_bagi);
                 break;

        default :
                 printf("Menu yang anda piilih tidak tersedia!");
                 break;

      }
    }
return 0;
}
