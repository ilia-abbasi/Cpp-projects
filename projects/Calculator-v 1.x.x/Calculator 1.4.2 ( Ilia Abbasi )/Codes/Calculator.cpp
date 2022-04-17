#include <iostream>
#include <conio.h>
using namespace std;

main(){
	
	int ti,i,ili;
	double a,b,sum;
	double a1;
	char ch;
	
	for( ; ; ){
		
		ili=0;
		
		cin>>a>>ch;
		/////////////////////////////////////////////////////////////////////////////////////
		switch(ch){

			case '!':

			sum=1;
			for(i=1 ; i<=a ; i++){
				sum*=i;
			}
			cout<<"________"<<endl<<sum<<"\n\n\n\n";
			continue;

		}
		//////////////////////////////////////////////////////////////////////////////////////
		cin>>b;
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

			case '&':
			
			for( ; a<=b ; a++)
				ili+=a;
			cout<<ili;break;
			
			default : cout<<"(._ERROR_.) Please read the Text File (._ERROR_.)";
		
		}
		cout<<endl<<endl<<endl<<endl;
	}
	getch();
		
}
