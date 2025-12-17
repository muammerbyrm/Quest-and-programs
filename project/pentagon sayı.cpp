#include <stdio.h>
#include <stdlib.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
int main(){
	int a,n=1;
	for(a=1;n<100;a++){
		n=(a*a*3-a)/2;
		if(n<100)
		printf("%d\n",n);
}
	system("pause");
    return 0;
}
