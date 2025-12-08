#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi ve system("pause"); komutu cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	int a,b,d,e,f;
	printf("N sayýsýný giriniz : ");
	scanf("%d",&a);
	printf("armstrong sayýlar : \n");
	for (b=1;b<=a;b++){
		e=b;
		f=0;
		while(e>0){
			d=e%10;
			e=(e-d)/10;
			f=f+d*d*d;
		}
		if(f==b)
		printf("%d\n",b);
	}
	system("pause");
    return 0;
}
