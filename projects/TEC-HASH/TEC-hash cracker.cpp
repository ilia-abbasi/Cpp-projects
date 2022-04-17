#include <iostream>
#include <conio.h>
using namespace std;

main(){
	
	unsigned long int n;
	unsigned long int x;
	unsigned long int y;
	char c,cc,ccc,a,aa,aaa;

	start:
	
	system("cls");
	cout<<"Enter the first 3 characters: ";
	cin>>a>>aa>>aaa;
	cout<<"Enter the number: ";
	cin>>y;

	for(x = 0;x<999999;x++){
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
	
	//checking
	
	if(cc == a and ccc == aa and c == aaa and n == y){

		cout<<"\n\n\n~~ RESULT FOUND ~~\n\nThe number: "<<x<<"\n\n";
		system("pause");
		goto start;
	}
	
}

	cout<<"\n\n\n~~ NO MATCHING RESULT FOUND ~~\n\n";
	system("pause");
	
	goto start;
	getch();

}
/*
97
122
*/
