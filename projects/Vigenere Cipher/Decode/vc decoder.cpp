// Vigenere Cipher Decoder
// Programmer : Ilia Abbasi

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

char LOW[26] = { 'a' , 'b' , 'c' , 'd' , 'e', 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z'};
char UPP[26] = { 'A' , 'B' , 'C' , 'D' , 'E', 'F' , 'G' , 'H' , 'I' , 'J' , 'K' , 'L' , 'M' , 'N' , 'O' , 'P' , 'Q' , 'R' , 'S' , 'T' , 'U' , 'V' , 'W' , 'X' , 'Y' , 'Z'};

string vc_decrypt(string text, string key);
string raw_or_file(string s);
string save_file(string t, string n);
string upper(string text);
int toint(char c);

int main(){
	
	string text, key, cipher, name;
	
	while(1){
		cout<<"Your cipher: \n\n";
		getline(cin, cipher);
		cout<<"\nThe key: \n\n";
		getline(cin, key);
		cout<<"\nResult: \n\n";
		
		cipher = raw_or_file(cipher);
		key = raw_or_file(key);
		text = vc_decrypt(cipher, key);
		
		cout << text << "\n\n";
		cout << "Name of the file to be saved(! to cancel): ";
		cin >> name;
		cin.ignore();
		system("cls");
		if(name == "!")
			continue;
		
		cout << "Saved as " << save_file(text, name) << "\n--------\n\n";
	}
	
	return 0;
}

string vc_decrypt(string text, string key){
	
	key = upper(key);
	
	for(register int i = 0, j = 0; i < text.size(); i++){
		
		int x, y, letter_case = 0;
		x = (int)text[i];
		y = toint(key[j]);
		
		if(x > 64 and x < 91)
			letter_case = 65;
		if(x > 96 and x < 123)
			letter_case = 97;
		if(!letter_case)
			continue;
		
		x -= y-1;
		if(x < letter_case)
			x += 26;
		
		text[i] = (char)x;
		
		j++;
		if(j >= key.size())
			j = 0;
	}
	
	return text;
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

string raw_or_file(string s){
	
	ifstream read;
	read.open(s);
	if(!read)
		return s;
	
	string line;
	s = "";
	while(getline(read, line))
		s = s + line + '\n';
	s.pop_back();
	
	read.close();
	return s;
}

string save_file(string t, string n){
	
	ofstream write;
	ifstream read;
	string name;
	
	int i = 0;
	while(1){
		
		name = n;
		if(i)
			name += to_string(i);
		name += ".txt";
		
		i++;
		read.open(name);
		if(read){
			read.close();
			continue;
		}
		read.close();
		
		write.open(name);
		write << t;
		write.close();
		break;
	}
	
	return name;
}
