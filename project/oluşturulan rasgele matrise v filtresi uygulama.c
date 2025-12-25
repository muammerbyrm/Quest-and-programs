#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	srand(time(NULL));
	setlocale(LC_ALL,"Turkish");
	int S=15;
	int N[S][S],G[15][15]={0},c,d;
	for(c=0;c<S;c++){
		for(d=0;d<S;d++){
			N[c][d]=rand()%256;
		}	
	}
	//oluþturulan N matrisi yazdýrma
	for(c=0;c<S;c++){
		for(d=0;d<S;d++){
			printf("%d\t",N[c][d]);
		}
		printf("\n");
	}
	printf("\n");
	//filtrelenmiþ sayýlarý g matrisine aktarma
	for(c=0;c<S-2;c++){
		for(d=0;d<S-2;d++){
	        G[1+c][1+d]=(-1)*(N[0+c][1+d]+N[1+c][0+d]+N[1+c][2+d]+N[2+c][1+d])+5*N[1+c][1+d];
	    }
    }  
    //oluþturulan G matrisi yazdýrma
	for(c=0;c<S;c++){
		for(d=0;d<S;d++){
			printf("%d\t",G[c][d]);
		}
		printf("\n");
	}
	
	system("pause");
    return 0;
}
