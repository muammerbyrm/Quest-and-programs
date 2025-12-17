#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
long factoriel(int x){
	long fact=1;
	int i;
	for(i=1;i<=x;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int main(){
	setlocale(LC_ALL,"Turkish");
	double top=0;
	int c=0,ter,x,a;
	printf("X sayýsýný giriniz : ");
	scanf("%d",&x);
	printf("Terim sayýsýný giriniz : ");
	scanf("%d",&ter);
	ter=(ter-1)*2;
	for(a=0;a<=ter;a=a+2){
		c++;
		if(c%2==0)
			top=top-(pow(x,a)/factoriel(a));
		else
		top=top+(pow(x,a)/factoriel(a));
	}
	printf("%.6lf\n",top);
	
	system("pause");
    return 0;
}
