#include <stdio.h>

 int main()
 {
 	//bir sayi gir tek mi çift mi 
 	
 	int girilecekSayi;
 	
 	printf("Lutfen bir sayi giriniz:");
 	scanf("%d",&girilecekSayi);
 	
 	if(girilecekSayi%2==0)
 	{
 		printf("girilen sayi cifttir.");
	 }
	 
	 else
	 {
	 	printf("girilen sayi tektir.");
	 }
	 
 }
