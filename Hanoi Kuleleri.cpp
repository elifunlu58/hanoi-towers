#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void hanoi(int n,char src,char dest,char aux);
int main() 
{
	cout<<"\n\nThe Hanoi Kuleleri\n\n"<<"Disk Sayisi:";
	int numDisks;
	cin>>numDisks;
	hanoi(numDisks,'A','B','C');
}
void hanoi(int n,char src,char dest,char aux)
{
	if(n>1)
	{
		hanoi(n-1,src,aux,dest);
		hanoi(1,src,dest,aux);
		hanoi(n-1,aux,dest,src);
	}
	else
	cout<<"ustteki diski tasi"<<src<<"den"<<dest<<"ye"<<endl;
	
	
	
	
	
}
