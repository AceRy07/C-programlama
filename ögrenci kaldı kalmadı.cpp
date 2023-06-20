#include <stdio.h>

int main()
{
	//Bir not gir "kaldý/geçti/takdir/tesekkür" aldý yaz
	
	int Not;
	
	printf("Lutfen ogrencinin notunu giriniz:");
	scanf("%d",&Not);
	
	if(Not>=50)
	{
		printf("bu ogrenci sinifi gecmistir.\n");
	}
	
	else
	{
		printf("bu ogrenci sinifi gecemdi.\n");
	}

	if(Not>=85)
	{
		printf("Bu ogrenci Takdir almistir\n");
	}
	else if(Not>=70 && Not<85)
	{
		printf("Bu ogrenci Tesekkur aldiniz.\n");
	}
	else
	{
		printf("Bu ogrenci Takdir ve Tesekkur alamadiniz.");
	}
}
