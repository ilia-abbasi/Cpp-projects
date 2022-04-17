#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
	
	string name;
	name = "text.txt";
	
	ofstream afile;
	afile.open( name.c_str() ); //ERROR
	
	afile.close();
    return 0;
}
