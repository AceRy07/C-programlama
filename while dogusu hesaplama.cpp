#include <stdio.h>

int main()
{

	
	//Faktöriyel Hesaplama
	int girilecekSayi;
	printf("Lutfen bir sayi giriz:");
	scanf("%d",&girilecekSayi);
	
	int i=1;
	int Faktoriyel=1;
	
	while(i<=girilecekSayi)
	{
		Faktoriyel=Faktoriyel*i;
		i++;
		
		
	}
	printf("\nSonuc:%d",Faktoriyel);
	
	
	//girilen sayi ya kadar toplami
	int GirilecekSayi;
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&GirilecekSayi);
	
	int i=0;
	int toplam=0;
	
	while(i<=GirilecekSayi)
	{
		printf("Degerler:%d\n",i);
		toplam +=i;
		
		i++;
		
	}
	printf("\nGirdiginiz sayiya kadar toplami sudur:%d",toplam);
	
	
	
	
	
	
}
