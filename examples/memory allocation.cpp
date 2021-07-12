#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	
	int *a = new int; // allocating memory
	
	*a = 7;
	cout<< *a;
	
	delete a; // memory deallocated

	
	getch();
	return 0;
}
