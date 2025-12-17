#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
long factoriel(int x){
	long fact=1;
	int i;
	for(i=1;i<=x;i++){
		fact=fact*i;
	}
	return fact;
}
int main(){
	setlocale(LC_ALL,"Turkish");
	double top=0;
	int  ter,x,a;
	printf("X sayýsýný giriniz : ");
	scanf("%d",&x);
	printf("Terim sayýsýný giriniz : ");
	scanf("%d",&ter);
	ter=ter-1;
	for(a=0;a<=ter;a++){
		top=top+(pow(x,a)/factoriel(a));;
	}
	printf("%.6lf\n",top);
	
	system("pause");
    return 0;
}
