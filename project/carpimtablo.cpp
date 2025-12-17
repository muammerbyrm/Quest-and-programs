#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//her yazýlým için gerekli
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
//locale kütüphanesi türkçe karakter için
int main(){
	int i,j;
	for (i=1;i<=10;i++){
		for(j=1;j<=10;j++){
		
	printf("%d x %d = %d\t",j,i,j*i);
}
printf("\n");
		}
	setlocale(LC_ALL,"Turkish");
	system("pause");
    return 0;
}
