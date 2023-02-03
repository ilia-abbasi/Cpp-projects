// Vigenere Cipher Encoder
// Programmer : Ilia Abbasi

#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

char LOW[26] = { 'a' , 'b' , 'c' , 'd' , 'e', 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z'};
char UPP[26] = { 'A' , 'B' , 'C' , 'D' , 'E', 'F' , 'G' , 'H' , 'I' , 'J' , 'K' , 'L' , 'M' , 'N' , 'O' , 'P' , 'Q' , 'R' , 'S' , 'T' , 'U' , 'V' , 'W' , 'X' , 'Y' , 'Z'};

string encode(string text, string key);
string save_file(string t);
string upper(string text);
int toint(char c);

int main(){
	
	string text, key;
	
	cout<<"Your text: \n\n";
	getline(cin, text);
	cout<<"\nThe key: \n\n";
	getline(cin, key);
	cout<<"\nResult: \n\n";
	
	cout<<encode(text, key);
	
	getch();
}

string encode(string text, string key){
	
	string t = text;
	string k = key;
	
	ifstream file;
	file.open(text.c_str());
	if(file)
		getline(file, t);
	file.close();
	
	file.open(key.c_str());
	if(file)
		getline(file, k);
	file.close();
	
	k = upper(k);
	
	for(register int i = 0, j = 0; i < t.size(); i++){
		
		int x,y,letter_case = 0;
		x = (int)t[i];
		y = toint(k[j]);
		
		if(x > 64 and x < 91)
			letter_case = 90;
		if(x > 96 and x < 123)
			letter_case = 122;
		if(!letter_case)
			continue;
		
		x += y-1;
		if(x > letter_case)
			x -= 26;
		
		t[i] = (char)x;
		
		j++;
		if(j >= k.size())
			j = 0;
	}
	
	save_file(t);
	
	return t;
}
int toint(char c){
	
	int re = (int)c;
	
	if(re >= 65 and re <= 90)
		re -= 64;
	
	return re;
}
string upper(string text){
	
	string t = text;
	
	for(register int i = 0; i < t.size(); i++){
		int x = (int)t[i];
		if(x > 90)
			x -= 32;
		t[i] = (char)x;
	}
	
	return t;
}
string save_file(string t){
	
	ofstream write;
	ifstream read;
	string name;
	
	int i = 0;
	while(1){
		
		name = "result";
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
		write << t;
		write.close();
		break;
	}
	
	return name;
}
