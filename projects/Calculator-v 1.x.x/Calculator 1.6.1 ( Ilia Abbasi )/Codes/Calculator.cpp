#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main(){
	
	int ti,i,ili,j;
	double a,b,sum;
	double a1;
	char ch;
	long int y;
	
	for( ; ; ){

		cout<<"oO_______Oo"<<endl;
		cout<<" |       | "<<endl;
		cout<<" |Welcome| "<<endl;
		cout<<" |_______| "<<endl;
		cout<<"oO       Oo"<<endl<<endl<<endl;
		cout<<"1) Calculator"<<endl<<"2) Analyzer"<<endl<<"3) Guide"<<endl<<"4) About"<<endl<<endl;
		cout<<"Choose your choice: ";
		cin>> j;
		
		if(j==2){                 //Analyzer
			system("cls");
			cout<<"Enter the Number: ";cin>>y;system("cls");
			cout<<"The Number: "<<y<<"\n\n\n";
			cout<<"Integer    number: True"<<endl;
			cout<<"Counting   number: ";if(y>0)cout<<"True\n";else cout<<"False\n";
			cout<<"Whole      number: ";if(y>=0)cout<<"True\n";else cout<<"False\n";
			cout<<"Positive   number: ";if(y>0)cout<<"True\n";else cout<<"False\n";
			cout<<"Negative   number: ";if(y<0)cout<<"True\n";else cout<<"False\n";
			cout<<"Neutural   number: ";if(y==0)cout<<"True\n\n";else cout<<"False\n\n";
			cout<<"Factors: \n";
			
			j=1;
			
			if(y>0){
			for(i=1;i<=y/2;i++){
				if(y%i==0){cout<<i<<endl;j++;}
			}}
			
			if(y<0){
			for(i=-1;i>=y/2;i--){
				if(y%i==0){cout<<i<<endl;j++;}
			}}
			
			cout<<y<<endl<<endl<<"Amount: "<<j<<endl<<endl;
			system("pause");system("cls");continue;
			
		}

		if(j==4){                 //about
			system("cls");
			cout<<"Version: 1 . 6 . 1\n\nCreator: Ilia Abbasi"<<endl;
			cout<<"Telg: @iliopz\n\n\n\n\n";
			system("pause");system("cls");continue;
		}

		if(j==1){                 //calculator
			system("cls");
			break;
		}

		if(j==3){                 //Guide
			system("cls");
		cout<<"oO_______Oo"<<endl;
		cout<<" |       | "<<endl;
		cout<<" | Guide | "<<endl;
		cout<<" |_______| "<<endl;
		cout<<"oO       Oo"<<endl<<endl<<endl;
		cout<<"Sum = '+'\ne.g: 2 + 2 = 4\n\nSubmission = '-'\ne.g: 10 - 6 = 4\n\nMultiplication = '*'\ne.g: 4 * 3 = 12\n\nDivision = '/'\ne.g: 15 / 5 = 3\n\nPower = '^'";
		cout<<"\ne.g: 3 ^ 2 = 9\n\nSum from a to b = '&'\ne.g: 1 & 100 = 5050\n\nFactorial = '!'\ne.g: 3! = 6\n\nCos = 'c'\ne.g: 0c = 1";
		cout<<"\n\nSin = 's'\ne.g: 0s = 0\n\nTan = 't'\ne.g: 1t = 1.55\n\nSquare root = '#'\ne.g: 100# = 10\n\nEnter '0d' to clear the history.";
		cout<<"\n\n\n";
		system("pause");system("cls");continue;
		}}
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

			case 'c':
				cout<<"________"<<endl<<cos(a)<<"\n\n\n\n";
				continue;

			case 's':
				cout<<"________"<<endl<<sin(a)<<"\n\n\n\n";
				continue;

			case 't':
				cout<<"________"<<endl<<tan(a)<<"\n\n\n\n";
				continue;

			case '#':
				cout<<"________"<<endl<<sqrt(a)<<"\n\n\n\n";
				continue;
				
			case 'd':
				system("cls");
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
			case '/': 
			if(b==0){

			cout<<"The answer is impossible!!!";

			}
			else{
				cout<<a / b;
			}
			break;
			
			case '^':
			 
			if(b==0 and a==0){
				cout<<"The answer is impossible!!!"<<endl;
			}
			else{
				cout<<pow(a,b);
			}break;

			case '&':
			
			for( ; a<=b ; a++)
				ili+=a;
			cout<<ili;break;
			
			default : cout<<"(._ERROR_.) Please check the Guide (._ERROR_.)";
		
		}
		cout<<endl<<endl<<endl<<endl;
	}
	getch();
		
}
