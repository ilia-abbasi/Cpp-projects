#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;

string xor_crypt(string text, string key);

int main(){
	
	string str,k,res;
	
	cout<<"Enter your text:\n\n";
	getline(cin, str);
	
	cout<<"\nEnter the Key:\n\n";
	getline(cin, k);
	
	res = xor_crypt(str,k);
	
	system("cls");
	cout<<res;
	
	ofstream write;
	write.open("xor.txt");
	write << res;
	write.close();
	
	getch();
	return 0;
}

string xor_crypt(string text, string key){
	
	ifstream read;
	read.open(text.c_str());
	
	if(read)
		getline(read,text);
	read.close();
	
	
	for(register int i = 0; i < text.size(); i++)
		text[i] ^= key[i % key.size()];
	
	return text;
}
