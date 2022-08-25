#include <iostream>
using namespace std;

void Ham_sap_xep_tang_dan(int arr[], int n)  //thuat toan interchange sort
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void Ham_sap_xep_giam_dan(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] > arr[i])
			{
				int temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 15,20,1,9,8,66,69,70,112,4 };
	int n = 10; //so phan tu trong mang
	Ham_sap_xep_tang_dan(arr,n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	Ham_sap_xep_giam_dan(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}