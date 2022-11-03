//     3 KASIM 2022


#include <stdio.h>

int main(){

int girdi;
float sonuc;

printf("n degerini giriniz:");
scanf("%d",&girdi);

for (int i = 1; i <= girdi; i++)
{
    sonuc += ((i*i) + 1.23)/(i - 0.25);
}
printf("%.2f",sonuc);


return 0;

}