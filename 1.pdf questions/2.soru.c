#include <stdio.h>
#include <stdlib.h>
//yarý çapý girilen dairenin alaný

int main(){
	int n;
	float yari,pi=3.14;
	printf("yari capi giriniz : ");
	scanf("%d",&n);
	yari=pi*n*n;
	printf("%d yari capli dairenin alani : %f\n",n,yari);
	system("pause");
    return 0;
}
