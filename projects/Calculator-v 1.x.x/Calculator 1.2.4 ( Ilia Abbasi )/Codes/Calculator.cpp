#include <iostream>
#include <conio.h>
using namespace std;

main(){
	
	int i;
	float a,b;
	char ch;
	
	for(i=1;i<=2;i+0){
	
		cin>>a>>ch>>b;
		cout<<"________"<<endl;
	
		switch(ch){
		
			case '+': cout<< a + b;break;
			case '-': cout<< a - b;break;
			case '*': cout<< a * b;break;
			case '/': cout<< a / b;break;
			default : cout<<"(._ERROR_.) Please read the Text File (._ERROR_.)";
		
		}
		cout<<endl<<endl<<endl<<endl;
	}
	getch();
		
}
