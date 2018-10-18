#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t, n;
	int agree;

START:printf("Nhap nam: ");
	scanf("%d", &n);
	printf("Nhap thang: ");
	scanf("%d", &t);

	switch (t)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("So ngay cua thang %d la 31 ngay", t);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("So ngay cua thang %d la 30 ngay", t);
			break;
		case 2:
			if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
			{
				printf("So ngay cua thang %d la 29 ngay", t);
			}
			else
			{
				printf("So ngay cua thang %d la 28 ngay", t);
			}
			break;
		default:
			printf("Nhap sai thang.");

	}
	printf("\n\n\nKet thuc chuong trinh NHAP 1");
	printf("\nNHAP 0 neu muon nhap nam thang khac\n");
	scanf("%d", &agree);

	if (!agree)
	{
		system("cls");
		goto START;
	}

	return 0;
}