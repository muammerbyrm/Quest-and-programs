#include <stdio.h>
#include <stdlib.h>
// girilen sayýnýn kaç basamaklýu olduðunu bulan koda
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
//locale kütüphanesi türkçe karakter için
int main(){
	int sayi,a,b=0;
	printf("sayiyi giriniz : ");
	scanf("%d",&sayi);
	while (sayi>0){
		a=sayi%10;
		sayi=(sayi-a)/10;
		b=b+1;
	}
	printf("girdiginiz sayi %d basamaklidir \n",b);
	system("pause");
    return 0;
}
