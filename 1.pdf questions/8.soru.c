#include <stdio.h>
#include <stdlib.h>
//low ile high arasýnda sayýlarýn toplamýný yazdýran program

int main(){
	int low,high,toplam=0;
	printf("en kucuk sayiyi giriniz : ");
	scanf("%d",&low);
	printf("en buyuk sayiyi giriniz : ");
	scanf("%d",&high);
	while (low>=high){
			printf("kucuk sayi buyuk sayidan buyuk veya buyuk sayiya esit olamaz\n");
			printf("GECERLI DEGER GIRINIZ\n");
			printf("en kucuk sayiyi giriniz : ");
	        scanf("%d",&low);
	        printf("en buyuk sayiyi giriniz : ");
	        scanf("%d",&high);
	}
    low=low+1;
    if(low==high)
    printf("aralarinda tam sayi yok\n");
    while (low<high){
		toplam=toplam+low;
		low=low+1;
    }
    printf("aralarindaki sayilarin toplami : %d\n",toplam);
	system("pause");
    return 0;
}
