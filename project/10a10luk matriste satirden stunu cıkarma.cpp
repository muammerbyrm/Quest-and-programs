#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	srand(time(NULL));
	int i,j,k=0,a;
	int A[10][10];
	int sat[10]={0},sut[10]={0},cik[10];
    for(i=0;i<10;i++){
		for(j=0;j<10;j++){
		/*
			//EL ile girme
			printf("%d.satýr %d.sütunu giriniz :",i+1,j+1);
			scanf("%d",&A[i][j]);
	    */
		A[i][j]=rand()%100+1;
		}
    }
    //matrisi diziye koyma
    for(i=0;i<10;i++){
	a=0;
	    for(j=0;j<10;j++){
		   sat[k]=sat[k]+A[i][j];
		   sut[a]=sut[a]+A[i][j];
		   a++;
	    }
	k++;
    }
    for(a=0;a<10;a++){
		cik[a]=sat[a]-sut[a];
		printf("%d.Satýr - %d.sütün : %d\n",a+1,a+1,cik[a]);
    }
	
	system("pause");
    return 0;
}
