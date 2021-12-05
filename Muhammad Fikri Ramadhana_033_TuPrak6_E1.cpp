#include <iostream>
#include <conio.h>
using namespace std;

long int faktorial (int x)
{
	long a = 1;
	int i = 1;
	
	while (i<=x)
	{
		a=a*1;
		i++;
	}
return a;
}
int main()
{
	int b,i,j;
	
	cout<<"=========================================="<<endl;
	cout<<"| Masukkan Nilai : "; cin>>b;
	
	for (i=0; i<b; i++)
	{
		for (j=0; j<b-i-1; j++)
		{
			cout<<" ";
		}
		for (j=0 ;j<=i; j++)
		{
			cout<<faktorial(i)/(faktorial(j)*faktorial(i-j))<<" ";
		}
		cout<<endl;
	}
	return 0;
}

