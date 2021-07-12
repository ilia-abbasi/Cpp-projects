#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>
#include <direct.h>
#include <time.h>
#include <fstream>
#include <conio.h>
using namespace std;

string save_location = "C:\\Program Files\\XBank\\accounts";

class account {
	private:
		string fname;
		string lname;
		string id;
		float money;
		char account_number[9];
		int password;
	public:
		account();
		void set_fname(string value);
		void set_lname(string value);
		void set_password(int value);
		void send_money(char reciever[9], int pswd, float amount);
		void load_account(char accnum[9], int pswd);
		void save_account();
		void change_password(int old_pass, int new_pass);
		string show_fname();
		string show_lname();
		string show_fullname();
		string show_id();
		float show_money();
		char* show_account_number();
		
};

int main(){
	
	srand(time(0));
	ofstream write;
	ifstream read;
	int choice,c2,c3;
	string ffname,llname;
	char ch[9];
	float cc;
	
	mkdir("C:\\Program Files\\XBank");
	mkdir(save_location.c_str());
	
	while(1){
		
		start:
		
		choice = 0;
		c2 = 0;
		system("cls");
		
		cout<<"============ XBANK ============\n\n";
		cout<<"1) Create Account\n2) Log in\n3) Exit\n\nYour choice: ";
		cin>>choice;
		system("cls");
		
		if(choice == 1){
			account user;
			
			cout<<"First name: ";
			cin>>ffname;
			system("cls");
			
			cout<<"Last name: ";
			cin>>llname;
			system("cls");
			
			cout<<"Password (Numbers only): ";
			cin>>c2;
			system("cls");
			
			
			user.set_fname(ffname);
			user.set_lname(llname);
			user.set_password(c2);
			user.save_account();
			cout<<"Your account has been created. You can log in.\n\n";
			cout<<"-SAVE THESE INFORMATION: \n\n";
			cout<<"Full name : "<<user.show_fullname()<<endl;
			cout<<"Account number : "<<user.show_account_number()<<endl;
			cout<<"ID : "<<user.show_id()<<endl<<endl;
			system("pause");
			cout<<endl;
			system("pause");
			system("cls");
			goto start;
		}
		if(choice == 2){
			account user;
			
			cout<<"Account number: ";
			cin>>ch;
			cout<<"\nPassword      : ";
			cin>>c2;
			system("cls");
			user.load_account(ch,c2);
			
			show:
			
			system("cls");
			
			cout<<"           - - - User    Info - - - \n\n";
			cout<<"Name           : "<<user.show_fullname()<<endl;
			cout<<"Account number : "<<user.show_account_number()<<endl;
			cout<<"ID             : "<<user.show_id()<<endl;
			cout<<"Money          : "<<user.show_money()<<endl<<endl;
			cout<<"--------------------------------------------\n\n";
			cout<<"1) Send money\n2) Change password\n3) Log out\n\nYour choice: ";
			cin>>choice;
			system("cls");
			
			if(choice == 1){
				
				cout<<"Reciever`s Account number : ";
				cin>>ch;
				cout<<"\nAmount : ";
				cin>>cc;
				cout<<"\nPassword : ";
				cin>>c3;
				system("cls");
				
				user.send_money(ch, c3, cc);
				system("cls");
				
				cout<<"Money has been sent successfully\n\n";
				system("pause");
				
				choice = 0;
				c2 = 0;
				c3 = 0;
				cc = 0;
				
				goto show;
			}
			
			if(choice == 2){
				
				cout<<"Enter the old password : ";
				cin>> c2;
				cout<<"\nEnter the new password : ";
				cin>> c3;
				
				user.change_password(c2,c3);
				
				c2 = 0;
				c3 = 0;
				goto show;
			}
			goto start;
		}
		if(choice == 3)
			exit(0);

	}
}






account :: account(){
	
	money = 100.00;
	//money set
	int rnd = (rand() * rand()) % 900 + 100;
	int keep = rnd * 1000000;
	rnd = (rand() * rand()) % 900 + 100;
	keep = keep + rnd * 1000;
	rnd = (rand() * rand()) % 900 + 100;
	keep = keep + rnd;
	itoa(keep,account_number,10);
	//account_number set
	int x = -1;
	again:
	
	x = x + 1;
	rnd = rand() % 26 + 1;
	char ch,arr[3];
	switch(rnd){
		case 1: ch = 'A'; break;
		case 2: ch = 'B'; break;
		case 3: ch = 'C'; break;
		case 4: ch = 'D'; break;
		case 5: ch = 'E'; break;
		case 6: ch = 'F'; break;
		case 7: ch = 'G'; break;
		case 8: ch = 'H'; break;
		case 9: ch = 'I'; break;
		case 10:ch = 'J'; break;
		case 11:ch = 'K'; break;
		case 12:ch = 'L'; break;
		case 13:ch = 'M'; break;
		case 14:ch = 'N'; break;
		case 15:ch = 'O'; break;
		case 16:ch = 'P'; break;
		case 17:ch = 'Q'; break;
		case 18:ch = 'R'; break;
		case 19:ch = 'S'; break;
		case 20:ch = 'T'; break;
		case 21:ch = 'U'; break;
		case 22:ch = 'V'; break;
		case 23:ch = 'W'; break;
		case 24:ch = 'X'; break;
		case 25:ch = 'Y'; break;
		case 26:ch = 'Z';
	} id += ch;
	if(x == 0)
		goto again;
	rnd = (rand() * rand()) % 900 + 100;
	itoa(rnd,arr,10);
	id += arr;
	//id set
}
void account :: set_fname(string value){
	
	fname = value;
}
void account :: set_lname(string value){
	
	lname = value;
}
void account :: set_password(int value){
	
	password = value;
}
void account :: send_money(char reciever[9], int pswd, float amount){
	
	ofstream write;
	ifstream read;
	
	char lmra_accnum[9];
	float lmra_money;
	int pass;
	string location = save_location + "\\" + reciever + "\\money.txt";
	
	system("cls");
	
	if(amount > money){
		
		cout<<"YOU DON NOT HAVE ENOUGH MONEY!\n\n";
		system("pause");
		exit(0);
	}
	
	read.open(location.c_str());
	
	if(!read){
		cout<<"ACCOUNT NUMBER DOES NOT EXIST!\n\n";
		system("pause");
		exit(0);
	}
	

	if(pswd != password){
		cout<<"PASSWORD IS WRONG!\n\n";
		system("pause");
		exit(0);
	}
	
	read>>lmra_money;
	read.close();
	
	lmra_money += amount;
	money -= amount;
	
	write.open(location.c_str());
	write<<lmra_money;
	write.close();
	
	location = save_location + "\\" + account_number + "\\money.txt";
	
	write.open(location.c_str());
	write<<money;
	write.close();
}
void account :: load_account(char accnum[9], int pswd){
	
	ifstream read;
	
	int pass;
	
	string location = save_location + "\\" + accnum + "\\password.txt";
	read.open(location.c_str());
	
	if(!read){
		
		cout<<"ERROR: ACCOUNT NUMBER DOES NOT EXIST.\n\n";
		system("pause");
		exit(0);
	}

	read>>pass;
	read.close();

	if(pswd != pass){
		
		cout<<"ERROR: PASSWORD IS WRONG.\n\n";
		system("pause");
		exit(0);
	}
	
	for(int i = 0; i < 9; i++){
		account_number[i] = accnum[i];
	}
	
	location = save_location + "\\" + account_number + "\\fname.txt";
	read.open(location.c_str());
	read>>fname;
	read.close();
	
	location = save_location + "\\" + account_number + "\\lname.txt";
	read.open(location.c_str());
	read>>lname;
	read.close();
	
	location = save_location + "\\" + account_number + "\\money.txt";
	read.open(location.c_str());
	read>>money;
	read.close();
	
	location = save_location + "\\" + account_number + "\\password.txt";
	read.open(location.c_str());
	read>>password;
	read.close();
	
	location = save_location + "\\" + account_number + "\\id.txt";
	read.open(location.c_str());
	read>>id;
	read.close();
}
void account :: save_account(){
	
	ofstream write;
	string location;
	
	location = save_location + "\\" + account_number;
	mkdir(location.c_str());
	
	location = save_location + "\\" + account_number + "\\fname.txt";
	write.open(location.c_str());
	write<<fname;
	write.close();
	
	location = save_location + "\\" + account_number + "\\lname.txt";
	write.open(location.c_str());
	write<<lname;
	write.close();
	
	location = save_location + "\\" + account_number + "\\password.txt";
	write.open(location.c_str());
	write<<password;
	write.close();
	
	location = save_location + "\\" + account_number + "\\id.txt";
	write.open(location.c_str());
	write<<id;
	write.close();
	
	location = save_location + "\\" + account_number + "\\money.txt";
	write.open(location.c_str());
	write<<money;
	write.close();
}
void account :: change_password(int old_pass, int new_pass){
	
	ofstream write;
	
	system("cls");
	if(old_pass != password){
	
		cout<<"PASSWORD IS WRONG!\n\n";
		system("pause");
		exit(0);
	}
	
	string location = save_location + "\\" + account_number + "\\password.txt";
	write.open(location.c_str());
	write<<new_pass;
	write.close();
	
	cout<<"Password has been changed successfully.\n\n";
	system("pause");
	system("cls");
	
}
string account :: show_fname(){
	return fname;
}
string account :: show_lname(){
	return lname;
}
string account :: show_fullname(){
	return fname + " " + lname;
}
string account :: show_id(){
	return id;
}
float account :: show_money(){
	return money;
}
char* account :: show_account_number(){
	return account_number;
}
