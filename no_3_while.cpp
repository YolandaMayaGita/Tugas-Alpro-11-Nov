#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main () {
	float i,n,total,rata;
	i=0;
	total=0;
	cout<<"masukkan n : "; cin>>n;
	while (i<=n) {
		total+=i;
		i++;
	}
	rata=total/n;
	cout<<"jumlah : "<<total<<endl;
	cout<<"rerata : "<<rata<<endl;
	getch();
}
