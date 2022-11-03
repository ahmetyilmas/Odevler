/*

27 EKIM 2022
Lisansustu bir egitim almak icin basvuran adayin ALES puani, yabanci dil puani ve mezuniyet ortalamasina
gore siralama puanini hesapladiktan sonra, siralamaya girip girmeyecegini ekrana yazan C uygulamasini
kodlayiniz. (Butun puanlar 100 uzerinden hesaplanmaktadir.) 

PUAN = ALES'in %50'si + Yabanci Dil'in %25'i + AGNO'nun %25'i seklinde hesaplanir ve 60 uzerinde alanlar
siralamaya girebilir.

*/

#include <stdio.h>


int main(){

int ales1;
float ales2;

printf("ALES puaninizi giriniz:");
scanf("%d",&ales1);

ales2 = ales1*(0.5);

int yd1;
float yd2;

printf("Yabanci Dil puaninizi giriniz:");
scanf("%d",&yd1);

yd2 = yd1*(0.25);

int agno1;
float agno2;
printf("Mezuniyet ortalamanizi giriniz:");
scanf("%d",&agno1);

agno2 = agno1*(0.25);

float sonuc = ales2+yd2+agno2;

if(sonuc>60){

printf("Puaniniz:""%f",sonuc);
printf("\nSiralamaya girdiniz.");

}
else{
    printf("Puaniniz:""%f",sonuc);
    printf("\nSiralamaya giremediniz.");
}

return 0;


}