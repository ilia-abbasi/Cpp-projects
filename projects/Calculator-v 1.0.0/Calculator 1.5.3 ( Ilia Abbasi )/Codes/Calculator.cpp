#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main(){
	
	int ti,i,ili,j;
	double a,b,sum;
	double a1;
	char ch;
	
	for( ; ; ){

		cout<<"oO_______Oo"<<endl;
		cout<<" |       | "<<endl;
		cout<<" |Welcome| "<<endl;
		cout<<" |_______| "<<endl;
		cout<<"oO       Oo"<<endl<<endl<<endl;
		cout<<"1) Calculator"<<endl<<"2) Guide"<<endl<<"3) About"<<endl<<endl;
		cout<<"Choose your choice: ";
		cin>> j;

		if(j==3){
			system("cls");
			cout<<"Version: 1 . 5 . 3\n\nSazande: Ilia Abbasi"<<endl;
			cout<<"Telg: @hoooo64\nTelg: @Ralley_Studios\n\n._ Ralley Studios _.\n\n\n\n\n";
			system("pause");system("cls");continue;
		}

		if(j==1){
			system("cls");
			break;
		}

		if(j==2){
			system("cls");
		cout<<"oO_______Oo"<<endl;
		cout<<" |       | "<<endl;
		cout<<" | Guide | "<<endl;
		cout<<" |_______| "<<endl;
		cout<<"oO       Oo"<<endl<<endl<<endl;
		cout<<"Jam`e = '+'\nMesal: 2 + 2 = 4\n\nTafrigh = '-'\nMesal: 10 - 6 = 4\n\nZarb = '*'\nMesal: 4 * 3 = 12\n\nTaghsim = '/'\nMesal: 15 / 5 = 3\n\nTavan = '^'";
		cout<<"\nMesal: 3 ^ 2 = 9\n\nJam`e adad az a ta b = '&'\nMesal: 1 & 100 = 5050\n\nFactoriel = '!'\nMesal: 3! = 6\n\nCosinoos = 'c'\nMesal: 0c = 1";
		cout<<"\n\nSinoos = 's'\nMesal: 0s = 0\n\nTanzhant = 't'\nMesal: 1t = 1.55\n\nJazr = '#'\nMesal: 100# = 10";
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
			
			default : cout<<"(._ERROR_.) Please read the Text File (._ERROR_.)";
		
		}
		cout<<endl<<endl<<endl<<endl;
	}
	getch();
		
}
