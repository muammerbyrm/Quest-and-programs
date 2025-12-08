#include <stdio.h>
#include <stdlib.h>
//low ile high arasýnda sayýlarýn girilen sayý deðerine bölünebilenleri yazdýran program

int main(){
	int low,high,number,a;
	printf("en kucuk sayiyi giriniz : ");
	scanf("%d",&low);
	printf("en buyuk sayiyi giriniz : ");
	scanf("%d",&high);
	printf("bolunebilirlik bakilmak istenen sayiyi giriniz : ");
	scanf("%d",&number);
	while (low>=high){
			printf("kucuk sayi buyuk sayidan buyuk veya buyuk sayiya esit olamaz\n");
			printf("GECERLI DEGER GIRINIZ\n");
			printf("en kucuk sayiyi giriniz\n");
	        scanf("%d",&low);
	        printf("en buyuk sayiyi giriniz\n");
	        scanf("%d",&high);
	}
    low=low+1;
    if(low==high)
    printf("aralarinda tam sayi yok\n");
    while (low<high){
		if(low%number==0)
		printf("%d\n",low);
		low=low+1;
    }
	system("pause");
    return 0;
}
