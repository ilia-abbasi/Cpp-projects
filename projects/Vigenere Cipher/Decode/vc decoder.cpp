// Vigenere Cipher Decoder
// Programmer : Ilia Abbasi

#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;

char LOW[26] = { 'a' , 'b' , 'c' , 'd' , 'e', 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z'};
char UPP[26] = { 'A' , 'B' , 'C' , 'D' , 'E', 'F' , 'G' , 'H' , 'I' , 'J' , 'K' , 'L' , 'M' , 'N' , 'O' , 'P' , 'Q' , 'R' , 'S' , 'T' , 'U' , 'V' , 'W' , 'X' , 'Y' , 'Z'};

string decode(string text, string key);
string upper(string text);
int toint(char c);

int main(){
	
	string text, key;
	
	cout<<"Your code: \n\n";
	getline(cin, text);
	cout<<"\nThe key: \n\n";
	getline(cin, key);
	cout<<"\nResult: \n\n";
	
	cout<<decode(text, key);
	
	getch();
}

string decode(string text, string key){
	
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
	
	
	t = upper(t);
	k = upper(k);
	
	
	for(register int i = 0, j = 0; i < t.size(); i++){
		
		int x,y;
		x = toint(t[i]);
		y = toint(k[j]);
		
		if(x >= 1 and x <= 26 and y >= 1 and y <= 26){
		
			x -= y;
			while(x < 1)
				x += 26;
			x += 64;
		}
		
		t[i] = (char)x;
		
		j++;
		if(j >= k.size())
			j = 0;
	}
	
	ofstream write;
	write.open("result.txt");
	write << t;
	write.close();
	
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
	
	for(register int i = 0; i < t.size(); i++)
		for(register int j = 0; j < 26; j++)
			if(t[i] == LOW[j])
				t[i] = UPP[j];
	
	return t;
}
