

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(int argc, char **argv)
{
	char t[10][11]={"harddisk","fare","klavye","bilgisayar","telefon","kablo","batarya","touchpad","işlemci","bluetooth"};
	
	
	int e=0,a,s2=11;
	srand(time(NULL));
	a=rand()%9;
	
	
	while(t[a][e]!='\0')
	e++;
	
	
	char *p=(char *)malloc((e+1)*sizeof(char));
	
	for(int l=0;l<e;l++)
	*(p+l)='\0';
	
	printf("ADAM ASMACAYA HOSGELDINIZ!!\n\nKURALLAR SU SEKILDEDIR\n>>EGER KELIME GIRECEKSENIZ TEK HAKKINIZ VARDIR. BILEMEZSENIZ KAYBEDERSINIZ, BILIRSENIZ KAZANIRSINIZ.\n>>EGER HARF GIRECEKSENIZ 11 YANLIS YAPMA HAKKINIZ VARDIR.\n\nKOLAY GELSINN!!!");
	
	//int w;
	
	while(1){
	printf("\n\n\nHarf girmek -> 2\nKelime girmek -> 1\nPes etmek -> 0\n\n\n");
	
	
	int w;
	scanf("%d",&w);
	system("cls");
	if(w==1){
		printf("Kelimeyi giriniz\n");
		char q[e+1];
		scanf("%s",q);
		
		if(!strcmp(q,t[a])){
			printf("BILDINIZZ!!");
			free(p);
			getch();
			return 0;
		}
		else{
			printf("Bilemediniz :(\n>>%s\nKaybettiniz...",t[a]);
			free(p);
			getch();
			return 0;
			
		}
		
		
		}
	
	else if(w==2){	
		
			printf("Lutfen harf giriniz\n");
			
			char ch=0;
			scanf(" %c",&ch);
			
			
			//Bu alan son durumu göstermek için vardır
			//----------------------------------------------
			
			int sayac=0;
			for(int r=0;r<e;r++)
			{
				if(ch==t[a][r])
				sayac++;				
			}
			
			
			if(sayac==0){
			s2=s2-1;
			printf("\n\n");
			if(s2==10){
				printf("10 HARF GIRME HAKKINIZ KALDI\n\n");
			printf("***************\n");	
			
			}
			else if(s2==9){
				printf("9 HARF GIRME HAKKINIZ KALDI\n\n");
			printf("*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n***************\n");
			}
			else if(s2==8){
				printf("8 HARF GIRME HAKKINIZ KALDI\n\n");
			printf("********\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n***************\n");
			}
			else if(s2==7){
				printf("7 HARF GIRME HAKKINIZ KALDI\n\n");
			printf("********\n* *\n**\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n***************\n");
				
				}	
			else if(s2==6){
				printf("6 HARF GIRME HAKKINIZ KALDI\n\n");
			printf("********\n* *    *\n**     *\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n***************\n");	
				}	
			else if(s2==5){
				printf("5 HARF GIRME HAKKINIZ KALDI\n\n");
				
			printf("********\n* *    *\n**     *\n*      O\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*\n***************\n");	
				
				}	
			else if(s2==4){
				printf("4 HARF GIRME HAKKINIZ KALDI\n\n");
			printf("********\n* *    *\n**     *\n*      O\n*      |\n*      |\n*      |\n*      |\n*\n*\n*\n*\n*\n*\n***************\n");	
				
				}	
			else if(s2==3){
				printf("3 HARF GIRME HAKKINIZ KALDI\n\n");
			printf("********\n* *    *\n**     *\n*      O\n*      |\n*      |\n*      |\n*     -|\n*    /\n*\n*\n*\n*\n*\n***************\n");	
				
				}
			else if(s2==2){
				printf("2 HARF GIRME HAKKINIZ KALDI\n\n");
			printf("********\n* *    *\n**     *\n*      O\n*      |\n*      |\n*      |\n*     -|-\n*    /   \\\n*\n*\n*\n*\n*\n***************\n");
				
				}
			else if(s2==1){
				printf("1 HARF GIRME HAKKINIZ KALDI\n\n");
			printf("********\n* *    *\n**     *\n*      O\n*     -|\n*    / |\n*      |\n*     -|-\n*    /   \\\n*\n*\n*\n*\n*\n***************\n");
				
				}	
			else if(s2==0){
				printf("HAKKINIZ BITMISTIR :((\nKAYBETTINIZ\n\n");
			printf("********\n* *    *\n**     *\n*      O\n*     -|-\n*    / | \\\n*      |\n*     -|-\n*    /   \\\n*\n*\n*\n*\n*\n***************\n");
			free(p);
			getch();
				return 0;
				}	
				
				
				printf("\n\n");				
				
				}
			else
			printf("Girdiginiz harf mevcut boyle devam :)))\n");
				

			
			
			//-----------------------------------------------
			
			
			for(int d=0;d<e;d++){
			if(t[a][d]==ch)
			p[d]=ch;
		}
			
	
			
			for(int v=0;v<e;v++){//yazma
				if(p[v]=='\0')
				printf("_ ");
				
				else
				printf("%c ",p[v]);
		}
				if(!strcmp(p,t[a])){
					printf("KAZANDINIZZ!!!");
					free(p);
					getch();
					return 0;
					}
		
		printf("\n\n");
	
		}
	
	else if(w==0){
		printf("Aranan kelime -> %s\n pes ettinizz...",t[a]);
		
		break;
		
		}
	
	else
	printf("Hatalı secim yaptınız!");
	
}
	free(p);
	getch();
return 0;
}
