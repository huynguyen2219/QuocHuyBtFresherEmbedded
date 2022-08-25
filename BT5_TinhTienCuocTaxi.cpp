#include <iostream>
using namespace std;

int Tinh_Cuoc_Taxi(int x) //Ham tinh tien cuoc taxi dua vo so km
{
	int sum = 5000; // khoi tao bien sum luu so tien cuoc km dau tien
	if (x > 0 && x <= 1)
	{
		return sum;
	}
	else if (x > 1 && x <= 31)
	{
		sum += 4000 * (x - 1);
		return sum;
	}
	else
	{
		sum += 4000 * 30 + 3000 * (x - 31);
		return sum;
	}


}

int main()
{
	int n; // so km 
	while (1)
	{
		system("cls");
		do
		{
			
			cout << "\n\n\tNhap so km di duoc: ";
			cin >> n;
			if (n <= 0)
			{
				cout << "So km nhap vao khong hop le. Xin moi nhap lai";
			}
		} while (n <= 0);

		int sotien = Tinh_Cuoc_Taxi(n);
		cout << "\n\n\tSo tien cuoc taxi cho " << n << " km la: " << sotien << "d"<<endl;
		system("pause");
	}


}
