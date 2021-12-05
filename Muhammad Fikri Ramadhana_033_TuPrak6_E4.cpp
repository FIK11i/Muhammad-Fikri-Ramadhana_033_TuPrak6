#include <iostream> 
#include <conio.h> 
using namespace std;

void hanoi(int a, char dari, char bantu, char tujuan)
{
	if(a==1)
	{
		cout<<"Pindahkan piring dari " << dari << " ke " << tujuan << "\n";
	}
	else
	{
		hanoi(a-1, dari, tujuan, bantu);
		hanoi(1, dari, bantu, tujuan);
		hanoi(a-1, bantu, dari, tujuan);
	}
}
int main ()
{
	int jum_piring;
	
	cout<<" Teknik Hanoi Pada C++"<<endl<<endl;
	cout<<" Masukkan Jumlah Piring : "; cin>>jum_piring;
	
	hanoi (jum_piring, 'A', 'B', 'C');
	getch();
	
}
