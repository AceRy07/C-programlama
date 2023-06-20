#include <stdio.h>

int main()
{
	
	//girilen sayilarin basamak toplami
	
	
	int sayi,toplam=0,kalan;
	
	printf("Lutfen sayi giriniz:");
	scanf("%d",&sayi);
	
	
	while(sayi!=0)
	{
		
		kalan=sayi%10;
		toplam=toplam+kalan;
		sayi=sayi/10;
		
	}
	printf("Basamaklar toplami:%d",toplam);
}
