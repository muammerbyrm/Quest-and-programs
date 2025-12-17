#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	int a,b;
	double c=0;
	printf("Sayý giriniz : ");
	scanf("%d",&a);
	while(a>0){
		b=a%2;
		a=(a-b)/2;
		c=c*10+b;
	}
	printf("%.0lf\n",c);
	system("pause");
    return 0;
}
