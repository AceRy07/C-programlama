#include <stdio.h>

int main()
{
	//Kullanýcý ad soyad yas al ve 18 den büyükse ehliyet ver
	
	char Ad[15];
	char SoyAd[15];
	int Yas;
	
	printf("Lutfen Adinizi yazin:");
	scanf("%s",&Ad);
	printf("\nLutfen SoyAdinizi yaziniz:");
	scanf("%s",&SoyAd);
	printf("\nLutfen yasinizi yaziniz:");
	scanf("%d",&Yas);
	
	if(Yas>18||Yas==18)
	{
		printf("Adiniz:%s\nSoyAdiniz:%s\nYasiniz:%d",Ad,SoyAd,Yas);
		printf("\nEhliyet alabilirsiniz.");
	}
	else
	{
		printf("Adiniz:%s\nSoyAdiniz:%s\nYasiniz:%d",Ad,SoyAd,Yas);
		printf("\nEhliyet alamazsiniz.");
	}
	
	
}
