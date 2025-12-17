#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	srand(time(NULL));
	int i,j,k=0,a,b=0,c=0,n=0;
	int A[2][5],B[5][2],C[2][2];
    for(i=0;i<2;i++){
		for(j=0;j<5;j++){
		/*
			//EL ile girme
			printf("%d.satýr %d.sütunu giriniz :",i+1,j+1);
			scanf("%d",&A[i][j]);
	    */
		A[i][j]=rand()%100+1;
		}
    }
    printf("Birinci matris : \n");
     for(i=0;i<2;i++){
		for(j=0;j<5;j++){
	    printf("%d\t",A[i][j]);
		}
	printf("\n");
    }
     for(i=0;i<5;i++){
		for(j=0;j<2;j++){
		/*
			//EL ile girme
			printf("%d.satýr %d.sütunu giriniz :",i+1,j+1);
			scanf("%d",&A[i][j]);
	    */
		B[i][j]=rand()%100+1;
		}
    }
    printf("ikinci matris : \n");
    for(i=0;i<5;i++){
		for(j=0;j<2;j++){
	    printf("%d\t",B[i][j]);
		}
	printf("\n");
    }
    
    for(i=0;i<2;i++){
		for(a=0;a<2;a++){
	     	for(j=0;j<5;j++){
		     n=n+A[i][j]*B[j][a];
	     	}
		C[i][a]=n;
		n=0;
	}
    }
	printf("Matrislerin çarpýmý : \n");
    for(i=0;i<2;i++){
		for(j=0;j<2;j++){
	    printf("%d\t",C[i][j]);
		}
	printf("\n");
    }
    
	system("pause");
    return 0;
}
