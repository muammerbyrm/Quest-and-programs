#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	int a=1,b;
	for(b=1;b<=4;b++){
		a=a*2;
	}
	printf("%d\n",a);
	
	system("pause");
    return 0;
}
