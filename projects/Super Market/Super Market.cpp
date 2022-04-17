// Super Market project v1.0
// Programmer : Ilia Abbasi

#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

static bool exists = false;
string SAVE_LOCATION = "list.txt";
vector<string> list;
vector<int>  counts;

void  read_file();
void write_file();


int main(){
	
	start:
	
	int n,count;
	string name;
	
	read_file();
	
	system("cls");
	cout<<" ___________________ \n";
	cout<<"|                   |\n";
	cout<<"| Super Market v1.0 |\n";
	cout<<"|___________________|\n";
	cout<<"                     \n";
	cout<<"1) Add item          \n";
	cout<<"2) Remove item       \n";
	cout<<"3) List of items     \n";
	cout<<"4) Exit              \n";
	cout<<"                     \n";
	cout<<"Your choice: ";	cin>> n;
	system("cls");
	
	if(n == 1){
		
		cout<<"Item`s name: ";
		cin>> name;
		cout<<"Count      : ";
		cin>> count;
		system("cls");
		
		try {
			
			read_file();
			
			int i;
			
			for(i = 0; i < list.size(); i++){
				
				if(name == list.at(i)){
					
					exists = true;
					break;
				}
			}
			
			
			if(exists){
				
				counts.at(i) += count;
				exists = false;
			}
			else {
			
				counts.push_back(count);
				list.push_back(name);
			}
			
			write_file();
			cout<<"Item added successfully!\n\n";
			system("pause");
			
			goto start;
		}
		catch(...){
			
			cout<<"Something went wrong while saving your item!\nERR_AT_IF_N_1";
		}
	}
	
	
	
	if(n == 2){
		
		cout<<"Item`s name: ";
		cin>> name;
		cout<<"Count      : ";
		cin>> count;
		system("cls");
		
		try{
		
			read_file();
			
			int i;
				
			for(i = 0; i < list.size(); i++){
				
				if(name == list.at(i)){
				
					exists = true;
					break;
				}
			}
		
			if(exists){
			
				counts.at(i) -= count;
		
				if(counts.at(i) < 0)
					counts.at(i) = 0;
				
				exists = false;
				
				if(counts.at(i) == 0){
					
					list.erase(list.begin() + i);
					counts.erase(counts.begin() + i);
				}
				
				write_file();
				
				cout<<"The item removed successfully!";
			}
			else {
				
				cout<<"The item does not even exist!";
			}
		}
		catch(...){
			
			cout<<"Something went wrong while removing your item!";
		}
		
		cout<<"\n\n";
		system("pause");
		
		goto start;
	}
	
	
	
	if(n == 3){
		
		read_file();
		cout<<"Items:\n";
		cout<<"-----------\n\n";
		
		for(register int i = 0; i < list.size(); i++){
			
			cout<<list.at(i)<<" x"<<counts.at(i)<<endl;
		}	cout<<"\n\n";
		
		system("pause");
		goto start;
	}
	
	
	return 0;
}



void read_file(){
	
	int     count;
	string   name;
	ifstream read;
	read.open(SAVE_LOCATION.c_str());
	
	counts.clear();
	list.clear();
	
	while(read >> count >> name){
		
		counts.push_back(count);
		list.push_back(name);
	}	read.close();
}



void write_file(){
	
	ofstream write;
	write.open(SAVE_LOCATION.c_str());
	
	for(register int i = 0; i < list.size(); i++){
		
		write<<counts.at(i)<<" "<<list.at(i)<<endl;
	}	write.close();
}
