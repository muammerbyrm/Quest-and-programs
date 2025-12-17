#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	int i,j,k;
	int a[2][10]={0};
	double topk,topb;
	for(i=0;i<2;i++){
	    for(j=0;j<10;j++){
		    if(i==0)
	    	printf("%d. çocuðun boyunu giriniz : ",j+1);
		    else
		    printf("%d. çocuðun kilosunu giriniz : ",j+1);
	     	scanf("%d",&a[i][j]);
	    }
	}
	for(i=0;i<2;i++){
	    for(j=0;j<10;j++){
			if(i==0)
			topb+=a[i][j];
			else
			topk+=a[i][j];
	    }
	}
	printf("ortalama kilo : %.2lf\nortalama kilo %.2lf\n",topk/10,topb/10);
	
	
	system("pause");
    return 0;
}
