#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	int a,b,c,d=0;
	printf("Bir ikili(binary)sayý giriniz : ");
	scanf("%d",&a);
	for(b=0;a>0;b++){
		c=a%10;
		a=(a-c)/10;
		if(c==1)
		d=d+c*pow(2,b);
	}
	printf("%d\n",d);
	system("pause");
    return 0;
}
