#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	int b=0,a=1;
	while(a<=50){
		b=b+a;
		a=a+1;
	}
	printf("%d\n",b);
	system("pause");
    return 0;
}
