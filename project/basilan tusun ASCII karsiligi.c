#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 int main(void){
		int ac;
		printf("bir tusa basiniz : ");
		ac = getchar();
		printf("%c tusuna bastiniz\n",ac);
		printf("girdigin kodun ascii kodu: %d\n",ac);
		printf("tam sayi karsiligi: %d\n",ac-'0');
		system("pause");
		
 }
