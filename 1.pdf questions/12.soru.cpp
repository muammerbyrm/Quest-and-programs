#include <stdio.h>
#include <stdlib.h>
//low ile high aralarýndaki step atlayarak yazdýran program
int main(){
	int low,high,adim,a;
	printf("en kucuk sayiyi giriniz : ");
	scanf("%d",&low);
	printf("en buyuk sayiyi giriniz : ");
	scanf("%d",&high);
	printf("adimi giriniz : ");
	scanf("%d",&adim);
	while (low>=high){
			printf("kucuk sayi buyuk sayidan buyuk veya buyuk sayiya esit olamaz\n");
			printf("GECERLI DEGER GIRINIZ\n");
			printf("en kucuk sayiyi girini : ");
	        scanf("%d",&low);
	        printf("en buyuk sayiyi giriniz : ");
	        scanf("%d",&high);
	        printf("adimi giriniz : ");
	        scanf("%d",&adim);
	}
    low=low+1;
    if(low==high)
    printf("aralarinda tam sayi yok\n");
    low=low-1;
    for(low=low+adim;low<high;low=low+adim){
		printf("%d\n",low);
    }
    system("pause");
    return 0;
}
