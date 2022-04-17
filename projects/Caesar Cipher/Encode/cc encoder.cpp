// Caesar Cipher Encoder
// Programmer : Ilia Abbasi

#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;

char LOW[26] = { 'a' , 'b' , 'c' , 'd' , 'e', 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z'};
char UPP[26] = { 'A' , 'B' , 'C' , 'D' , 'E', 'F' , 'G' , 'H' , 'I' , 'J' , 'K' , 'L' , 'M' , 'N' , 'O' , 'P' , 'Q' , 'R' , 'S' , 'T' , 'U' , 'V' , 'W' , 'X' , 'Y' , 'Z'};

string encode(string text, int key);
string upper(string text);

int main(){
	
	string text;
	int key;
	
	cout<<"Your text:\n\n";
	getline(cin, text);
	
	cout<<"\nNumber of shifts:\n\n";
	cin>> key;
	
	cout<<"\nResult:\n\n";
	cout<< encode(text, key);
	
	getch();
}

string encode(string text, int key){
	
	string t = text;
	
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
		temp += key;
		temp = temp % 26;
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
