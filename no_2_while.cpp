#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main () {
	float i,n,total;
	i=0;
	total=0;
	cout<<"masukkan n : "; cin>>n;
	while (i<=n) {
		total+=i;
		i++;
	}
	cout<<"jumlah : "<<total<<endl;
	getch();
}
