#include <iostream>
#include <vector> // vector library has been declared
#include <conio.h>
using namespace std;

int main(){
	
	vector <float> myvctr(10,1); // a vector with 10 slots created. all the numbers are float and equals to 1
	for(float i = 0; i < 1; i += 0.1){
		
		cout<<myvctr.at(i*10)<<endl; // myvctr.at(index) is like array[index]
		myvctr.at(i*10) = i;
		cout<<myvctr.at(i*10)<<endl;
	}
	cout<<endl<<myvctr.size()<<endl<<myvctr.capacity()<<endl; // .size is like .length in js arrays
	cout<<myvctr.size()<<endl;
	myvctr.push_back(67.09); // .push_back adds a value add the end of the vector and adds 1 slot to the size
	cout<<myvctr.size()<<endl;
	cout<<myvctr.at(10)<<endl<<myvctr.capacity();
}
