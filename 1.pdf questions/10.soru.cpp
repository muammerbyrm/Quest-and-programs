#include <stdio.h>
#include <stdlib.h>
//girilen 3 sayýdan en büyül olaný bulan 	program

 int main(){
int a,b,c,max;
printf("A yi girin : ");
scanf("%d",&a);	
	max=a;
printf("B yi girin : ");
scanf("%d",&b);
if (max<b)
    max=b;
printf("C yi girin : ");
scanf("%d",&c);
if (max<c)
max=c;
printf("en buyuk sayi : %d\n",max);
system("pause");
return 0;

 }
