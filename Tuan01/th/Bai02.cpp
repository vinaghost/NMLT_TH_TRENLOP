#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int t, n;
	cout << "Nhap thang:";
	cin >> t;
	cout << "Nhap nam:";
	cin >> n;
	switch (t)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "So ngay cua thang " << t << " la 31 ngay" << endl;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "So ngay cua thang " << t << " la 30 ngay" << endl;
			break;
		default:
			if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
			{
				cout << "So ngay cua thang " << t << " la 29 ngay" << endl;
			}
			else
			{
				cout << "So ngay cua thang " << t << " la 28 ngay" << endl;
			}

	}

	_getch();
	return 0;
}