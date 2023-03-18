// Caesar Cipher Encoder
// Programmer : Ilia Abbasi

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

char LOW[26] = { 'a' , 'b' , 'c' , 'd' , 'e', 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z'};
char UPP[26] = { 'A' , 'B' , 'C' , 'D' , 'E', 'F' , 'G' , 'H' , 'I' , 'J' , 'K' , 'L' , 'M' , 'N' , 'O' , 'P' , 'Q' , 'R' , 'S' , 'T' , 'U' , 'V' , 'W' , 'X' , 'Y' , 'Z'};

string cc_encrypt(string text, int key);
string raw_or_file(string s);
string save_file(string t, string n);
string upper(string text);

int main(){
	
	string text, cipher, name, k;
	int key;
	
	while(1){
		cout<<"Your text:\n\n";
		getline(cin, text);
		cout<<"\nNumber of shifts:\n\n";
		cin>> k;
		cout<<"\nResult:\n\n";
		
		text = raw_or_file(text);
		key = stoi(k);
		cipher = cc_encrypt(text, key);
		
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

string cc_encrypt(string text, int key){
	
	text = upper(text);
	
	for(register int i = 0; i < text.size(); i++){
		
		if((int)text[i] < 65 or (int)text[i] > 90)
			continue;
		
		int temp;
		temp = ((int)text[i]) - 65;
		temp += key;
		temp = temp % 26;
		temp += 65;
		
		text[i] = (char)temp;
	}
	
	return text;
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
