#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	float i,n,total,rata;
	cout<<"masukkan n : "; cin>>n;
	do {
		total+=i;
		i++;
	}
	while (i<=n);
	rata=total/n;
	cout<<"jumlah : "<<total<<endl;
	cout<<"rerata : "<<rata<<endl;
	getch();
	
}
