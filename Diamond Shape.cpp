#include<iostream>
using namespace std;
int main()
{
	int rows;
	cout << "Enter number of rows = ";
	cin >> rows;
	rows = rows / 2 + 1;
	for (int i = 0; i < rows; i++)
	{
		for (int j = rows; j > i - 1; j--)
		{
			cout << " ";
		}
		for (int k = 0; k <= i - 1; k++)
		{
			cout << "*";
		}
		for (int l = 0; l < i - 1; l++)
		{
			cout << "*";
		}
		for (int m = rows; m >i - 1; m--)
		{
			cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < rows; i++)
	{
		for (int n = 0; n <= i; n++)
		{
			cout << " ";
		}
		for (int o = rows; o > i; o--)
		{
			cout << "*";
		}
		for (int p = rows; p > i + 1; p--)
		{
			cout << "*";
		}
		for (int q = 0; q <= i; q++)
		{
			cout << " ";
		}
		cout << endl;
	}
	cout << "This is a Diamond." << endl;
	system("pause");
	return 0;
}