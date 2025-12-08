#include <stdio.h>
#include <stdlib.h>
//1000 ile 2000 arasýndaki çift sayýlarý üreten ve bunlarý ekrana yazdýran, ayrýca toplamýný da yazdýran program
//1000 ve  2000 dahil deðildir
int main(){
	int a=1002,b=0;
	for (a;a<2000;a=a+2){
		printf("%d\n",a);
		b=b+a;
	}
	printf("toplamlari = %d\n",b);
	system("pause");
    return 0;
}
