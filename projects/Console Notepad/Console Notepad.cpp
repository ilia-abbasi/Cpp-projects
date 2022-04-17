#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <vector>
using namespace std;

int main(){
	
	string str, path;
	vector<string> vec;
	
	cin>> path;
	cout<< endl;
	
	ofstream write;
	write.open(path.c_str());
	
	while(1){
		
		getline(cin, str);
		
		if(str == "/exit/"){
			
			write.close();
			return 0;
		}
		if(str == "/redo/"){
			
			write.close();
			
			ifstream read;
			read.open(path.c_str());
			
			while(getline(read, str))
				vec.push_back(str);
			
			vec.pop_back();
			
			write.open(path.c_str());
			
			system("cls");
			cout<< path<< endl;
			
			for(register int i = 0; i < vec.size(); i++){
				
				write<< vec.at(i);
				
				if(i + 1 != vec.size())
					write<< endl;
				
				cout << vec.at(i)<< endl;
			}
			
			vec.clear();
		}
		
		write<< str << endl;
	}
}
