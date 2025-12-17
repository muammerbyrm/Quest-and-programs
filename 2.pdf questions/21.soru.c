#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	int i,a,b,top=0,atop=0;
	printf("Terim sayýsý gir : ");
	scanf("%d",&a);
	a--;
	for(i=0;i<=a;i++){
		atop=atop+pow(10,i)*1;
		top=top+atop;
	}
	printf("%d\n ",top);
	
	system("pause");
    return 0;
}
