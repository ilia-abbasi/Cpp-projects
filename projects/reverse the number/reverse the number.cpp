#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int ReverseNumber(int number){
	
	int x = number,last,n = 0;
	
	while(1){
		x /= 10;
		if(x == 0)
			break;
		n = n + 1;
	}
	
	while(n != -1){
		last = number - number / 10 * 10;
		number /= 10;
		x += last * pow(10, n);
		n = n - 1;
	}
	
	return x;
}

int main(){
	
	int num;
	
	cout<<"Enter the Number: ";
	cin>>num;
	
	cout<<"\nReverse: "<<ReverseNumber(num)<<endl;
	getch();
}
