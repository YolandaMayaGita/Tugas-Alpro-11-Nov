#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	float i,n,total;
	cout<<"masukkan n : "; cin>>n;
	do {
		total+=i;
		i++;
	}
	while (i<=n);
	cout<<"jumlah : "<<total<<endl;
	getch();
	
}
