#include <stdio.h>
#define cevre 20 


int main()
{
	//karenin cevresi 20 cm olan karenin alani	

	int karenibirKenarUzunlugu=cevre/4;
	int alan=karenibirKenarUzunlugu*karenibirKenarUzunlugu;
	
	printf("20cm olan karenin alani=%d",alan,karenibirKenarUzunlugu);

	//3 sayinin aritmatik ort
	
	int Ilksayi,Ikincisayi,Ucuncusayi;
	int kacsayiyabolunur;
	printf("Lutfen uc sayi gririnz.\n");
	printf("Lutfen birinci sayi giriniz:");
	scanf("%d",&Ilksayi);
	printf("\nLutfen ikinci sayi giriniz:");
	scanf("%d",&Ikincisayi);
	printf("\nLutfen ucuncu sayi giriniz:");
	scanf("%d",&Ucuncusayi);
	printf("\nLutfen kac sayi girdinizi yazýn:");
	scanf("%d",&kacsayiyabolunur);
	
	int ort=(Ilksayi+Ikincisayi+Ucuncusayi)/kacsayiyabolunur;
	
	printf("\nGirdinginiz uc sayialr sudur:%d,%d,%d\nGirdigiz uc sayini ortlamasý sudur=%d",Ilksayi,Ikincisayi,Ucuncusayi,ort);

	
}

