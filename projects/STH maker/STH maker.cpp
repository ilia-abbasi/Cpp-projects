#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <vector>

#define BASE 16
#define DIGEST_LENGTH 64

using namespace std;

string setil_hash(string s);
string raw_or_file(string s);

int main(){
	
	string s = "";
	
	while(1){
		while(s.length() < 1)
			getline(cin, s);
		
		s = raw_or_file(s);
		cout << setil_hash(s) << "\n\n";
		s = "";
	}
	getch();
	return 0;
}


string setil_hash(string s){
	
	char pieces[BASE + 1] = {'N', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'L', 'R', 'E', 'X', 'T'};
	vector<int> chars;
	string digest = "";
	
	for(register int i = 0; i < s.length(); i++){
		chars.push_back(s[i] % BASE);
	}
	for(register int i = 0; i < DIGEST_LENGTH; i++){
		int x = (chars[i] * (chars.size() + 23) * chars[chars.size() - 1] + 5) % 2221;
		chars.push_back(x);
		//cout << x << '\t';
	}
	
	int itr = 0;
	while(chars.size() > DIGEST_LENGTH){
		if(itr >= DIGEST_LENGTH)
			itr = 0;
		
		int x = ((chars[chars.size() - 2] * chars[chars.size() - 1] * chars.size()) - 2) % 43 + 1;
		chars[itr] = x;
		chars.pop_back();
		itr++;
	}
	for(register int i = 0; i < DIGEST_LENGTH; i++){
		digest += pieces[chars[i] % BASE + 1];
	}
	
	return digest;
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
