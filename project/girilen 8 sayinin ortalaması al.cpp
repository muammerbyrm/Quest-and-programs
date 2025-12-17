#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	float a[8];
	int i;
	float toplam=0;
	for(i=0;i<8;i++){
		printf("%d. sasyýyý giriniz : ",i+1);
		scanf("%f",&a[i]);
		toplam+=a[i];
	}
	printf("%.2f",toplam/8);
	system("pause");
    return 0;
}
