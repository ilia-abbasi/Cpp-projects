#include <iostream>
#include <conio.h>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

string df = "`~1234567890!@#$%^&*()-=\\_+|qwertyuiop[]asdfghjkl;'zxcvbnm,./QWERTYUIOP{}ASDFGHJKL:\"ZXCVBNM<>?";
string decode(string s, string n);
string saving(string text);

int main(){
	
	
	string str,name;
	
	cout<<"Enter your text:\n\n";
	getline(cin,str);
	
	cout<<endl<<"Name of the algorithm file:\n\n";
	getline(cin,name);
	
	str = decode(str,name);
	
	system("cls");
	
	cout<<str;
	
	
	saving(str);
	
	getch();
}

string decode(string s, string n){

	int size;
	char t;
	string al;
	
	if(n == "")
		n = "algorithm.txt";
	
	if(s == "")
		s = "Encoded Text.txt";
	ifstream read;
	read.open(n.c_str());
	
	if(!read)
		exit(0);
	
	read>>al;
	read.close();
	
	string a;
	
	read.open(s.c_str());
	if(read){
		
		s = "";
		
		while(getline(read,a))
			s += (a + "\n");
	}
	read.close();
	
	size = s.size();
	
	for(register int i = size - 1; i >= 0; i--){
		
		t = s.at(i);
		
		for(register int j = 0; j < 94; j++){
			
			if(t == al.at(j)){
				t = df[j];
				break;
			}
			
			if(t == ' '){
				t = ' ';
				break;
			}
			
			if(t == '\n'){
				t = '\n';
				break;
			}
		}
	
		s.at(i) = t;
	}
	
	return s;
}


string saving(string text){
	
	ofstream write;
	ifstream read;
	string name;
	
	int i = 0;
	while(1){
		
		name = "Decoded Text ";
		stringstream ss;
		ss << i;
		name += ss.str();
		name += ".txt";
		
		i++;
		read.open(name.c_str());
		if(read){
			
			read.close();
			continue;
		}
		read.close();
		
		write.open(name.c_str());
		write << text;
		write.close();
		break;
	}
	
	return name;
}
