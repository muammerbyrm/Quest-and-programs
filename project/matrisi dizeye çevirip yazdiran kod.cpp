#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	int a [2][5];
	int b[10];
	int i,j,k=0;
	
	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
			printf("sayýyý gir : ");
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
			b[k]=a[i][j];
			printf("%d\t",b[k]);
			k++;
		}
	}
	
	system("pause");
    return 0;
}
