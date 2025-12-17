#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
//locale kütüphanesi türkçe karakter için
int main(){
	int sayi,ilk,son,a,b=0;
	printf("sayiyi giriniz : ");
	scanf("%d",&sayi);
	while (sayi>0){
		a=sayi%10;
		sayi=(sayi-a)/10;
		b=b+1;
		printf("%d .basamak = %d\n",b,a);
	}

	system("pause");
    return 0;
}
