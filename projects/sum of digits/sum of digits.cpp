#include <iostream>
#include <conio.h>
using namespace std;

int sumdigit(int number){
	
	int x,y = 0;
	while(number != 0){
		
		x = number - number / 10 * 10;
		number /= 10;
		y += x;
	}
	return y;
}

int main(){
	
	int x;
	cout<<"Enter the number: ";
	cin>>x;
	
	cout<<"\nSum of all digits: "<<sumdigit(x)<<endl;
	
	getch();
}
