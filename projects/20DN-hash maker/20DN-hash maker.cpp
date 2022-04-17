#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

vector<int> hash(string str);
int two_digits(int n);

int main(){
	
	
	string text;
	vector<int> vec;
	
	cout<<"Your text: \n\n";
	getline(cin,text);
	
	cout<<endl;
	
	vec = hash(text);
	
	ofstream write;
	write.open("hash.txt");
	
	for(register int i = 0; i < 10; i++){
		
		cout<<vec.at(i);
		write<<vec.at(i);
	}
	
	write.close();
	getch();
}



vector<int> hash(string str){
	
	vector<int> vec;
	int temp;
	int i = 0;
	
	for(register int i = 0; i < str.size(); i++){
		
		temp = (str.at(i) ^ 'j');
		temp = two_digits(temp);
		
		vec.push_back(temp);
	}
	
	

	
	while(vec.size() < 10){
		
		temp = vec.at(i);
		temp = temp | (temp ^ (temp * temp + 7 + i * 3));
		temp = two_digits(temp);
		
		vec.push_back(temp);
		i += 1;
	}
	
	i = 0;

	while(vec.size() > 10){
		
		temp = vec.back();
		temp = temp | (temp ^ (temp * temp + 5 + i * 3));
		temp = two_digits(temp);
		
		vec.at(i) = temp;
		vec.pop_back();
		i += 1;
		
		if(i >= 10)
			i = 0;
	}
	
	return vec;
}

int two_digits(int n){
	
	while(n < 10){

		n *= 13;
		n -= 19;
	}
		
	while(n > 99){
		
		n /= 7;
		n += 13;
	}
	
	return n;
}
