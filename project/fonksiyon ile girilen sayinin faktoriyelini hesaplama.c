#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//her yazýlým için gerekli
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
//locale kütüphanesi türkçe karakter için

int factorial (int a){
	long fackta = 1;
	int i = 1;
	for(i; i <= a; i++){
		fackta=fackta*i;
	}
	return fackta;
	
}
int main(){
	setlocale(LC_ALL,"Turkish");
	int n;
	double b;
	printf("bir sayý girin : ");
	scanf("%d",&n);
	b=factorial(n);
	printf("girdiðiniz sayýnýn faktoriyeli : %.2lf\n",b);
	system("pause");
    return 0;
}
