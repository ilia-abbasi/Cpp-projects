// Caesar Cipher Decoder
// Programmer : Ilia Abbasi

#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

char LOW[26] = { 'a' , 'b' , 'c' , 'd' , 'e', 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z'};
char UPP[26] = { 'A' , 'B' , 'C' , 'D' , 'E', 'F' , 'G' , 'H' , 'I' , 'J' , 'K' , 'L' , 'M' , 'N' , 'O' , 'P' , 'Q' , 'R' , 'S' , 'T' , 'U' , 'V' , 'W' , 'X' , 'Y' , 'Z'};

string decode(string text, string key);
void xdecode(string text);
string upper(string text);

int main(){
	
	string text;
	string key;
	
	cout<<"Your code:\n\n";
	getline(cin, text);
	
	cout<<"\nNumber of shifts:\n\n";
	cin>> key;
	
	cout<<"\nResult:\n\n";
	
	if(key == "?")
		xdecode(text);
	else
		cout<< decode(text, key);
	
	getch();
}

string decode(string text, string key){
	
	string t = text;
	int k;
	
	stringstream(key) >> k;
	
	ifstream read;
	read.open(text.c_str());
	if(read)
		getline(read,t);
	read.close();
	
	t = upper(t);
	
	
	for(register int i = 0; i < t.size(); i++){
		
		if((int)t[i] < 65 or (int)t[i] > 90)
			continue;
		
		int temp;
		temp = ((int)t[i]) - 65;
		temp -= k;
		
		while(temp < 0)
			temp += 26;
		
		temp += 65;
		
		t[i] = (char)temp;
	}
	
	ofstream write;
	write.open("result.txt");
	write << t;
	write.close();
	
	return t;
}

string upper(string text){
	
	string t = text;
	
	for(register int i = 0; i < t.size(); i++)
		for(register int j = 0; j < 26; j++)
			if(t[i] == LOW[j])
				t[i] = UPP[j];
	
	return t;
}

void xdecode(string text){
	
	string t = text;
	
	ifstream read;
	read.open(text.c_str());
	if(read)
		getline(read,t);
	read.close();
	
	t = upper(t);
	
	ofstream write;
	write.open("result.txt");
	
	string tt = t;
	
	for(register int i = 0; i < 25; i++){
		
		for(register int j = 0; j < t.size(); j++){
			
		if((int)t[j] < 65 or (int)t[j] > 90)
			continue;
		
		int temp;
		temp = ((int)t[j]) - 65;
		temp -= i;
		
		while(temp < 0)
			temp += 26;
		
		temp += 65;
		
		t[j] = (char)temp;
		}
		
		cout<<t<<"\n\n";
		write<<t<<"\n\n";
		t = tt;
	}
	
	write.close();
}
