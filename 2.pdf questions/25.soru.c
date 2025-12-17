#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	int a,k,j;
	printf("N sayýsýný giriniz : ");
	scanf("%d",&a);
	for (k=0;k<a;++k) { 
        long long c=1; 
        for (j=0;j<=k;++j)
		{ 
            printf("%lld ", c); 
            c=c*(k-j)/(j+1); 
        }
     printf("\n"); 
    } 
	
	system("pause");
    return 0;
}
