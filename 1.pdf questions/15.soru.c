#include <stdio.h>
#include <stdlib.h>
//n den 1 e kadar olan sayýlarýn tersten yazýlýmý

int main(){
	int n;
	printf("bir dogal sayi giriniz : ");
	scanf("%d",&n);
	for(n;n>=1;n--){
		printf("%d\n",n);
	}
	
	system("pause");
    return 0;
}
