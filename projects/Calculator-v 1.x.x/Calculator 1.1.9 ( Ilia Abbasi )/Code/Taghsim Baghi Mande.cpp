#include <iostream>
#include <conio.h>
using namespace std;

main(){
	
	int a,b;
	
	cout<<"Maghsoom: ";
	cin>> a;
	
	cout<<"Maghsoom Elayh: ";
	cin>> b;
	
	cout<<"Khareje Ghesmat: "<< a / b<<endl;
	cout<<"Baghi Mande: "<< a % b<<endl<<endl<<endl<<endl;
	
	cout<<"  "<< a<<"  |  "<< b<<endl;
	cout<<"-"<<"     |____"<<endl<<"  "<< a / b * b<<"     "<< a / b<<endl<<"_____"<<endl;
	
	cout<<"   "<< a % b;
	
	getch();
	
}
