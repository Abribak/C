#include<iostream>
#include<conio.h>
#define n 10
using namespace std;

void rev(double mass[], int size);
void main(void)
{
	double mass[n];
	for (int i = 0; i < n; i++)
		cin >> mass[i];
	for (int i = 0; i < n; i++)
		cout << mass[i] << "  ";
	cout << endl << endl;
	rev(mass, n);
	for(int i=0; i<n; i++)
		cout << mass[i] << "  ";
	_getch();
	return;
}
void rev(double mass[], int size)
{
	extern int temp;
	for (int i = 0; i < size / 2; i++)
	{
		temp = mass[i];
		mass[i] = mass[size - 1];
		mass[size - i - 1] = temp;

	}
	return;
}
int temp = 0;