#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
//locale kütüphanesi türkçe karakter için
int main(){
	int sayi,ilk,son,a,b=0;
	printf("sayiyi giriniz : ");
	scanf("%d",&sayi);
	ilk=sayi%10;
	a=sayi;
	a=a-ilk;
	sayi=(sayi-ilk)/10;
	if(sayi==0)
	son=ilk;
	else{
		while(sayi>0){
			son=sayi%10;
			sayi=(sayi-son)/10;
			b=b+1;
		}
	}
    a=a-pow(10,b)*son;
    a=a+son+pow(10,b)*ilk;
    printf("%d\n",a);
	
	system("pause");
    return 0;
}
