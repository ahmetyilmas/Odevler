//       3 KASIM 2022

#include <stdio.h>

int main(){

int girdi;

printf("Deger giriniz:");
scanf("%d",&girdi);

for (int i = 1; i <= girdi; i++)
{
    for (int a = 1; a <= i; a++)
    {
        printf("#");

    }
    printf("\n");   
    
}




}



