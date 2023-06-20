#include <stdio.h>
#include <string.h>

int main()
{
	
	//kulanýcý bilgileri  al/ bakiye bak / para yatirma ve cekme ve kullanici bilgileri gör 
	
	char Ad[10]="Arda";
	int sifre=1234;
	int secim;
	char IstenecekAd[10];
	int bakiye=1000;
	int IstenecekSifre;
	int YatiralacakPara;
	int CekilecekPara;
	
	int Ysifre;
	
	printf("Bankamatik uygulamasina hos gelidiniz\nlutfen adinizi girinzi:");
	scanf("%s",&IstenecekAd);
	printf("\nLutfen sifrenizi giriniz:");
	scanf("%d",&IstenecekSifre);
	
	if(strcmp(Ad,IstenecekAd)==0 && IstenecekSifre==sifre)
	{
		printf("Kullanici bilgielriniz eslesmistir\n\n");
		printf("Seceneklerimiz \n[1]-Para yatirma\n[2]-Para cekme\n[3]-Bakiyeyi gorme\n[4]-Kullanici bilgilerini gorme");
		printf("\nHangi secenegi girdiginizi yazin:");
		scanf("%d",&secim);
		
		
		if(secim==1)
		{
			printf("\nSuanda Para yatirma islemindesiniz\nLutfen ne kadar para yatiricaginizi yazin:");
			scanf("%d",&YatiralacakPara);
			bakiye +=YatiralacakPara;
			printf("\nYatirdiginiz para miktari:%d\nBakiyeniz deki para miktari:%d",YatiralacakPara,bakiye);
		}
		else if(secim==2)
		{
			printf("\nSuanda para cekme yerindesiniz");
			printf("\nLutfen ne kadar para cekeceginizi yazin:");
			scanf("%d",&CekilecekPara);
			bakiye -=CekilecekPara;
			printf("\Cektiginz para miktari:%d\nBakiyeniz deki para miktari:%d",CekilecekPara,bakiye);
		}
		else if(secim==3)
		{
			printf("\nSuanda Bakiyeyi gorme yerindesiniz\nBakiyeniz:%d",bakiye);
		}
		else if(secim==4)
		{
			printf("\nSuanda kullanici bilgileri gorme yerindesiniz\nKullanici Adiniz:%s\nSifreniz:%d",Ad,sifre);
		}
		else
		{
			printf("\nLutfen secenkelerden birini seciniz!!!");
		}
	}
	else
	{
		printf("Kullaninci adiniz ya da sifreniz yanlistir");
		
	
}

}
