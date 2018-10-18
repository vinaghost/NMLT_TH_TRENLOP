#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, ucln;
	int i;
	int agree;

START:printf("Nhap a va b cach nhau dau khoang trang: ");
	scanf("%d %d", &a, &b);
	
	printf("Cac uoc chung cua hai so %d va %d la: ", a, b);

	while (a && b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	
	ucln = (a < b) ? b : a;
	
	for (i = 1; i < ucln; i++)
	{
		if (ucln % i == 0)
			printf("%d, ", i);
	}

	printf("%d", ucln);
	
	
	printf("\n\n\nKet thuc chuong trinh NHAP 1");
	printf("\nNHAP 0 neu muon nhap hai so khac\n");
	scanf("%d", &agree);

	if (!agree)
	{
		system("cls");
		goto START;
	}

	return 0;
}