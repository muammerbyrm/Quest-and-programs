#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// girilen doðal sayýnýn s=1/2+1/4+.....1/n þeklinde yazan program
//her yazýlým için gerekli
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
int main(){
	int n;
	float top=0,a=2;
	printf("sayi giriniz : ");
	scanf("%d",&n);
	while (n<0){
		printf("gecersiz deger girdiniz takrar sayi giriniz : ");
	    scanf("%d",&n);
	}
	while(a<n){
		top=(1/a)+top;
		a=a+2;
	}
	printf("%.2f\n",top);
	system("pause");
    return 0;
}
