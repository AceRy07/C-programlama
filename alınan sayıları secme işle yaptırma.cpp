#include <stdio.h>

int main()
{
	//kullan�c�dan 2 sayi al i�le secnekleri olustu ve birini secsi top.-c�kar.
	
	
	int alinacakSayi1,alinacakaSayi2,secim;
	printf("Lutfen Ilk sayiyi giriniz:");
	scanf("%d",&alinacakSayi1);
	printf("\nLutfen ikinci sayiyi giriniz:");
	scanf("%d",&alinacakaSayi2);
	
	
	printf("Lutfen bu islemlerden birini secin \nToplama islemi[1]\nCikarma islemi[2]\nCarpma islemi[3]\nBolme islemi[4]");
	printf("\nLutfen bir secim yapiniz:");
	scanf("%d",&secim);
	
	
	
	if(secim==1)
	{
		printf("Toplma islemini sectiniz sayilarin toplami sudur=%d",alinacakSayi1+alinacakaSayi2);
	}
	else if(secim==2)
	{
		printf("Cikarma islemini sectiniz sayilarin cikarma sudur=%d",alinacakSayi1-alinacakaSayi2);
	}
	else if(secim==3)
	{
		printf("Carpma islemini sectiniz sayilarin carpimi sudur=%d",alinacakSayi1*alinacakaSayi2);
	}
	else if(secim==4)
	{
		printf("Bolme islemini sectiniz sayilarin bolumu sudur=%d",alinacakSayi1/alinacakaSayi2);
	}
	else
	{
		printf("sectiginiz sayinin bir gidisi yoktur lutfen baska bir sayi seciniz");
	}

	
}
