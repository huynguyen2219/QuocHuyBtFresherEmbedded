#include <iostream>
using namespace std;
#define MAX 100



int main()
{
	int a[MAX] = { 5,4,2,5,3,4,3,5,2,3 };
	int n = 10; //so phan tu trong mang
	int b[MAX] = { 0 };
	
	//LUU SO LAN XUAT HIEN cua tung phan tu trong mang a vao mang b
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[i] == a[j])
			{
				b[i]++;
			}
		}
	}
	//luu so lan xuat hien nhieu nhat vao bien max
	int max = 1;
	for (int i = 0; i < n; i++)
	{
		if (b[i] > max)
		{
			max = b[i];
		}
	}
	//Xuat gia tri co so lan xuat hien nhieu nhat (max lan)
	for (int i = 0; i < n; i++)
	{
		if (max == b[i])
		{
			cout << "\n\n\tPhan tu " << a[i] << " co so lan xuat hien nhieu nhat la " << b[i] << " lan"<<endl;
		}
	}


}



