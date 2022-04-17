#include <iostream>
#include <conio.h>
using namespace std;

main(){
	
	unsigned long int n;
	unsigned long int x;
	char c,cc,ccc;

	start:
	
	system("cls");
	cout<<"Enter a number: ";
	cin>>x;
	
	n = x % 13;

	while(n<97){
		n+=26;
	}

	
	while(n>122){
		n-=26;
	}

	c = n;

	n = x % 7;

	while(n<97){
		n+=26;
	}

	while(n>122){
		n-=26;
	}

	cc = n;

	n = x % 3;

	while(n<97){
		n+=26;
	}

	while(n>122){
		n-=26;
	}

	ccc = n;

	n = ((x ^ 2020) ^ ((x*7)%3 ^ 333)) * (x/3 ^ 303);

	if(n<0){
		n = n-n-n;
	}
	
	while(n>999999){
		n/=10;

	}

	cout<<endl<<endl<<"The HASH: "<<cc<<ccc<<c<<"-"<<n<<endl<<endl;
	system("pause");
	
	goto start;
	getch();

}
/*
97
122
*/
