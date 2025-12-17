#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	int b,c,i,j,k=0;
	printf("matrisin satýrýný giriniz : ");
	scanf("%d",&b);
	printf("matrisin sütunu giriniz : ");
	scanf("%d",&c);
	int C[b*c];
	int A[b][c];
    for(i=0;i<b;i++){
		for(j=0;j<c;j++){
			printf("%d.satýr %d.sütunu giriniz :",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
    }
    
    //matrisi diziye koyma
    for(i=0;i<b;i++){
	    for(j=0;j<c;j++){
		   C[k]=A[i][j];
		   k++;
	    }
    }
    for(k=0;k<i*j;k++){
		printf("%d.sayý : %d\n",k+1,C[k]);
    }
	system("pause");
    return 0;
}
