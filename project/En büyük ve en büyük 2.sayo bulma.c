#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
void enb(int A[]){
	int max,max2,i;
	if(A[0]>A[1]){
		max=A[0];
		max2=A[1];
	}else{
		max=A[1];
		max2=A[0];
	}
	for(i=2;i<10;i++){
		if(A[i]>max){
		max2=max;
		max=A[i];
	    }
		else if(A[i]>max2){
			max2=A[i];
	    }
	}
	printf("en büyük sayý :%d en büyük ikinci sayý :%d\n",max,max2);
}
int main(){
	setlocale(LC_ALL,"Turkish");
	int A[10],i;
	for(i=0;i<10;i++){
		printf("%d.sayýyý giriniz :",i+1);
		scanf("%d",&A[i]);
	}
	enb(A);

	system("pause");
    return 0;
}
