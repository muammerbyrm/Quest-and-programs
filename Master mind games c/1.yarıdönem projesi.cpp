#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	srand(time(NULL));
	
	int i,j,k,a=0,tah,b=0,c=0;
	char Renk[5],kont,Renk2[5];
	//rasgele renkte 4 taþ alma 
    for(i=0;i<4;i++){
		if (rand()%6+1==1)
		    Renk2[i]='R';
		else if(rand()%6+1==2)
		    Renk2[i]='G';
		else if(rand()%6+1==3)
		    Renk2[i]='B';
		else if(rand()%6+1==4)
	    	Renk2[i]='Y';
	    else if(rand()%6+1==5)
		    Renk2[i]='P';
	    else
		    Renk2[i]='O';
    }
    i=1;
    do{
		printf("Programýn doðru çalýþtýðýný kontrol etmek için bilgisayarýn tuttuðu renkleri görmek istiyor musunuz\n(EVET = E , HAYIR = H) :");
        scanf("%c",&kont);
        if(kont=='E'){
            i=0;
            printf("Rasgele oluþturulan renkler = %.4s\n",Renk2);
        }
        else if(kont=='H')
       	    i=0;
        else{
        printf("Yanlýzca E veya H giriniz\n");
        scanf("%c",&kont);
            i=1;
            }
    }  while (i);
    
    printf("Oyuncu tahmin hakký :");
    scanf("%d",&tah);
    
    
    for(k=0;k<tah;k++){
	printf("Renkler:R=Red G=Green B=Blue Y=Yellow P=Purple O=Orange\n");

    //kullanýcýda 4 renk alma
    do{	
    printf("%d.Tahmin : ",k+1);
    scanf("%s",Renk);
    
    for(i=0;Renk[i]!='\0';i++);
        if(i>4){
            printf("Yanlýþ giriþ.\n4 den fazla renk girdiniz .\n");
            a=1;
            k--;
            break;
        }
        else if(i<3){
            printf("Yanlýþ giriþ.\n4 den az renk girdiniz.\n");
            a=1;
            k--;
            break;
        }
        else{
            for(j=0;j<4;j++){
		        if(Renk[j]=='R'||Renk[j]=='G'||Renk[j]=='B'||Renk[j]=='Y'||Renk[j]=='O'||Renk[j]=='P'){
	        	    a=0;
    	        }
                else{
					printf("Yanlýþ giriþ.\nMevcut renkleri kullanýnýz.\n" );
                    a=1;
                    break;
			    }
            }
        }
    
    }while(a);

    for(b=0,i=0;i<4;i++){
		if(Renk[i]==Renk2[i])
		b++;
    }
    printf("%d Rengin yeri doðru\n",b);
    if(b==4){
    printf("%d Rengin yeri doðru\nBilgisayarýn tuttuðu renkler :%.4s\nTebrikler OYUNCU KAZANDI!!!!\n",b,Renk2);
    system("pause");
    return 0;
    }
}
	system("pause");
    return 0;
}
