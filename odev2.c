/*
27 EKIM 2022

Askeri liselere ogrenci kabulunde,adayin yasinin 13 - 17 arasinda olmasi (13 ve 17 dahil)
ve vucut kitle indeksinin 18,50 - 24,99 arasinda olmasi (alt ve ust sinir dahil) istenmektedir.
Klavyeden girilen yas, boy, kilo bilgilerine gore adayin kabul durumunu ekrana yazdiran
C uygulamasini kodlayiniz.

Vucut kitle indeksi = KILO(KG) / BOY*BOY (METRE)
*/

#include <stdio.h>

int main (){

int yas;
printf("Yasinizi yaziniz:");
scanf("%d",&yas);

float kilo;
float boy;

printf("Boyunuzu metre cinsinden yaziniz:");
scanf("%f",&boy);

printf("Kilonuzu kilogram cinsinden yaziniz:");
scanf("%f",&kilo);

float vki = kilo / (boy*boy);

if((yas<=17)&&(yas>=13)&&(vki<=24.49)&&(vki>=18.50)){
printf("Kabul edildiniz.");

}
else{
    printf("Kabul edilmediniz.");
}
}