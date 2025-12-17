#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	int a,b=0,n;
	int d[6000],A[6]={0};
	srand(time(NULL));
	for(a=0;a<6000;a++){
		n=rand()%6+1;
		d[a]=n;
		A[n-1]++;
	}
	for(a=0;a<6;a++){
		printf("%d. Gelen zar sayýsý = %d\n",a+1,A[a]);
	}
	system("pause");
    return 0;
}
