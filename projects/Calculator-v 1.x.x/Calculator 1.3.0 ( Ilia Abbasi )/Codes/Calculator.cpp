#include <iostream>
#include <conio.h>
using namespace std;

main(){
	
	int i,ti;
	double a,b;
	double a1;
	char ch;
	
	for(i=1;i<=2;i+0){
	
		cin>>a>>ch>>b;
		a1 = a;
		cout<<"________"<<endl;
	
		switch(ch){
		
			case '+': cout<< a + b;break;
			case '-': cout<< a - b;break;
			case '*': cout<< a * b;break;
			case '/': cout<< a / b;break;
			case '^': 
			if(b<0){
				for(ti==-1;ti>b;--ti)
					a*=a1;
			}
			if(b==0 and a!=0)
				a = 1;
			if(b==0 and a==0){
				for( ; ; )
					cout<<"F*cking answer is impossible!!!"<<endl;
			}
			if(b>0){
				for(ti=1;ti<b;++ti)
					a*=a1;
			}
			cout<< a;break;
			default : cout<<"(._ERROR_.) Please read the Text File (._ERROR_.)";
		
		}
		cout<<endl<<endl<<endl<<endl;
	}
	getch();
		
}
