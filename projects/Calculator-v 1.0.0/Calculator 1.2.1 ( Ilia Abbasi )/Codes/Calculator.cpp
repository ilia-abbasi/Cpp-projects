#include <iostream>
#include <conio.h>
using namespace std;

main(){
	
	float a,b;
	char ch;
	
	cin>>a>>ch>>b;
	cout<<"______"<<endl;
	
	switch(ch){
		
		case '+': cout<< a + b;break;
		case '-': cout<< a - b;break;
		case '*': cout<< a * b;break;
		case '/': cout<< a / b;break;
		default : cout<<"(ERROR) PLEASE READ THE TEXTFILE (ERROR)";
		
	}
	
	getch();
		
}
