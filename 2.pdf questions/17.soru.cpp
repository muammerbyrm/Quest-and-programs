#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	double top,i;
	int x,ter;
	printf("X sayýsýný giriniz : ");
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		top=top+1/i;
	}
	
	printf("%.6lf\n",top);
	
	system("pause");
    return 0;
}
