#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//kullanýcý bilgileri al sansli cekilis uygulamasý goster kullanýcý adýný göster
	
	
	char Ad[10];
	char SoyAd[15];
	int secim;
	int sayi;
	
	printf ("Sansli cekilis uygulamasina hosgeldiniz");
	printf("\nLutfen Adinizi giriniz:");
	scanf("%s",&Ad);
	printf("\nLutfen soyadinizi giriniz:");
	scanf("%s",&SoyAd);
	
	printf("\nLutfen bu iki siktan birini seciniz\n[1]-Sansli cekilis uygulamasi\n[2]-Kullanici bilgileri goseter");
	printf("\nLutfen 1 ya da 2 yazin:");
	scanf("%d",&secim);
	
	if(secim==1)
	{
		
		printf("Suan sansli cekilis uygulamasindasiniz");
		printf("\nLutfen 1 ile 10 arasinda bir sayi yaziniz:");
		scanf("%d",&sayi);
		
		srand(time(NULL));
		int randomSayi=1+rand()%100;
		
		if(randomSayi==sayi)
		{
			printf("\kullanicinin girdigi sayi:%d\nOyunun girdigi sayi:%d",sayi,randomSayi);
			printf("\nKazandiniz");
		}
		else
		{
			printf("\kullanicinin girdigi sayi:%d\nOyunun girdigi sayi:%d",sayi,randomSayi);
			printf("\nKazanamadiniz");
		}	
	}
		
		else if(secim==2)
		{
			printf("\nKullanicinin Adi:%s\nKullanici Soyadiniz:%s",Ad,SoyAd);
		}
		
	}
