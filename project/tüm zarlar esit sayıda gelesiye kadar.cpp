#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	int a,b=0,c=0;
	int d[600],A[6];
	srand(time(NULL));
	do{
		for(a=0;a<6;a++){
			A[a]=0;
		}
	  for(a=0;a<600;a++){
		d[a]=rand()%6+1;
		A[d[a]-1]++;
	  }
	  c++;
	  printf("Deneme sayýsý : %d\n",c);
	  if( A[0]==100 && A[1]==100 && A[2]==100 && A[3]==100 && A[4]==100 && A[5]==100)
	  break;
	}while(1);
	    for(a=0;a<6;a++){
		 printf("%d. Gelen zar sayýsý = %d\n",a+1,A[a]);
	    }
	system("pause");
    return 0;
}
