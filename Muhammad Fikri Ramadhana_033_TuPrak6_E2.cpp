#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

void printLebarChar (char a[], string b, int x, int y)
{
	if (y == 0)
	{
		cout<< (b) ;
		cout<<" ";
		return;
	}
	for (int i=0;i<x;i++)
	{
		string newB;
		newB = b + a[i];
		printLebarChar (a, newB, x, y-1);
	}
}
void inputLebarChar (char a[], int y, int x)
{
	printLebarChar (a, "", x, y);
}
int main ()
{
	char a1[]={'a','b','c'};
	int y=3;
	cout<<" Jumlah Karakter : "; cin>>y;
	inputLebarChar (a1, y, 3);
}
