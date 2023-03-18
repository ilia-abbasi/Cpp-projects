// Caesar Cipher Decoder
// Programmer : Ilia Abbasi

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

char LOW[26] = { 'a' , 'b' , 'c' , 'd' , 'e', 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z'};
char UPP[26] = { 'A' , 'B' , 'C' , 'D' , 'E', 'F' , 'G' , 'H' , 'I' , 'J' , 'K' , 'L' , 'M' , 'N' , 'O' , 'P' , 'Q' , 'R' , 'S' , 'T' , 'U' , 'V' , 'W' , 'X' , 'Y' , 'Z'};

string cc_decrypt(string text, string key);
string cc_xdecrypt(string text);
string raw_or_file(string s);
string save_file(string t, string n);
string upper(string text);

int main(){
	
	string text, key, cipher, name;
	
	while(1){
		cout<<"Your code:\n\n";
		getline(cin, text);
		
		cout<<"\nNumber of shifts:\n\n";
		cin>> key;
		
		cout<<"\nResult:\n\n";
		
		text = raw_or_file(text);
		
		if(key == "?")
			cipher = cc_xdecrypt(text);
		else
			cipher = cc_decrypt(text, key);
		
		cout << cipher << "\n\n";
		cout << "Name of the file to be saved(! to cancel): ";
		cin >> name;
		cin.ignore();
		system("cls");
		if(name == "!")
			continue;
		
		cout << "Saved as " << save_file(cipher, name) << "\n--------\n\n";
	}
	
	return 0;
}

string cc_decrypt(string text, string key){
	
	int k = stoi(key);
	text = upper(text);
	
	for(register int i = 0; i < text.size(); i++){
		
		if((int)text[i] < 65 or (int)text[i] > 90)
			continue;
		
		int temp;
		temp = ((int)text[i]) - 65;
		temp -= k;
		
		while(temp < 0)
			temp += 26;
		
		temp += 65;
		
		text[i] = (char)temp;
	}
	
	return text;
}

string upper(string text){
	
	for(register int i = 0; i < text.size(); i++)
		for(register int j = 0; j < 26; j++)
			if(text[i] == LOW[j])
				text[i] = UPP[j];
	
	return text;
}

string cc_xdecrypt(string text){
	
	text = upper(text);
	
	string write = "";
	string text_c = text;
	
	for(register int i = 0; i < 25; i++){
		
		for(register int j = 0; j < text.size(); j++){
			
			if((int)text[j] < 65 or (int)text[j] > 90)
				continue;
			
			int temp;
			temp = ((int)text[j]) - 65;
			temp -= i;
			
			while(temp < 0)
				temp += 26;
			
			temp += 65;
			
			text[j] = (char)temp;
		}
		
		write = write + text + "\n\n";
		text = text_c;
	}
	
	return write;
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
