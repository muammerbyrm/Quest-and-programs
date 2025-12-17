#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	int satr,sut,i,j,k;
	int a[2][10]={0};
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
		printf("\n");
		if(i==0)
		printf("Boylarý : ");
		else
		printf("kilolarý : ");
	    for(j=0;j<10;j++){
			if(i==0)
		    printf("%d\t",a[i][j]);
		    else
	        printf("%d\t",a[i][j]);
	    }
	}
	
	
	
	system("pause");
    return 0;
}
