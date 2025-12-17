#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	int satr,sut,i,j;
	printf("satýr sayýsýný giriniz : ");
	scanf("%d",&satr);
	printf("sütun sayýsýný giriniz : ");
	scanf("%d",&sut);
	int a[satr][sut],b[satr][sut],c[satr][sut];
	printf("1.matrsi giriniz\n");
	for(i=0;i<satr;i++){
		for(j=0;j<sut;j++){
		printf("%d.deðeri giriniz : ",(i+1)*(j+1));
		scanf("%d",&a[i][j]);
		}
    }
    printf("2.matrsi giriniz\n");
	for(i=0;i<satr;i++){
		for(j=0;j<sut;j++){
		printf("%d.deðeri giriniz : ",(i+1)*(j+1));
		scanf("%d",&b[i][j]);
		}
    }
    for(i=0;i<satr;i++){
		for(j=0;j<sut;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\n",c[i][j]);
		}
    }
	system("pause");
    return 0;
}
