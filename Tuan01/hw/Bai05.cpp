#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

#define BitSet(number,x) ((number >> x) & 1U); // đọc cả tối vẫn chưa nắm được cách thức hoạt động
												// dùng để xác nhận bit là 1
// Nguồn: https://www.quora.com/Is-there-a-function-in-C-that-converts-an-integer-into-bits
char *int2bin(int n)
{
	int i, j; // biến đếm
	int nbits = sizeof(n) * CHAR_BIT; //đo độ dài của số khi chuyển về nhị phân 
	int spaces = nbits / 4 - 1; //khoảng trắng
	int totalLen = nbits + spaces; // độ dài + space = tổng độ dài tuy nhiên độ dài khi in ra lại phụ thuộc vào máy
	// nếu máy 32-bit thì độ dài sẽ là 32  và tương tự với máy 64-bit
	char *s = (char*)calloc(totalLen + 1, 1); // cấp phát động
	memset(s, '0', totalLen); //set lai '0' cho toan chuoi 

	for (i = 0, j = totalLen - 1; i < nbits; i++, j--) // dịch từ số thập phân sang nhị phân
	{
		if (i && !(i % 4)) // tách dãy bit thành các chuỗi 4 số
			s[j--] = ' '; 

		bool result = BitSet((unsigned)n, i);
		if (result)
			s[j] = '1';
	}
	return s; // trả về chuỗi tức số nhị phân
}

int main()
{
	int i;
	int agree;

START:printf("Nhap so can duoc chuyen doi: ");
	scanf("%d", &i);

	char *s = int2bin(i);
	printf("So %d\t->\t%s", i, s);
	free(s); // giải phóng biến 


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