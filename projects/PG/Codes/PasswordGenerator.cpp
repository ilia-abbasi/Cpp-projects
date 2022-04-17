#include <iostream>
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <string>
using namespace std;

main(){
	
	int num,x,h;
	unsigned int b;
	string name;
	
	cout<<"How many characters do you want for your password? ";
	cin >> b;
	
	
	system("cls");
	
	if(b==0){
		cout<<"?????\n\n";
		system("pause");
		exit(0);
	}
	
	char password[b];
	
	srand(time(0));
	
	ofstream save;
	
	start:
	
	for(int i = 0; i <= b - 1; i = i + 1){
		num = ((rand()*rand()) + (rand() / 4)) % 87;
		switch(num){
			case 0: password[i] = 'a'; break;
			case 1: password[i] = 'b'; break;
			case 2: password[i] = 'c'; break;
			case 3: password[i] = 'd'; break;
			case 4: password[i] = 'e'; break;
			case 5: password[i] = 'f'; break;
			case 6: password[i] = 'g'; break;
			case 7: password[i] = 'h'; break;
			case 8: password[i] = 'i'; break;
			case 9: password[i] = 'j'; break;
			case 10:password[i] = 'k'; break;
			case 11:password[i] = 'l'; break;
			case 12:password[i] = 'm'; break;
			case 13:password[i] = 'n'; break;
			case 14:password[i] = 'o'; break;
			case 15:password[i] = 'p'; break;
			case 16:password[i] = 'q'; break;
			case 17:password[i] = 'r'; break;
			case 18:password[i] = 's'; break;
			case 19:password[i] = 't'; break;
			case 20:password[i] = 'u'; break;
			case 21:password[i] = 'v'; break;
			case 22:password[i] = 'w'; break;
			case 23:password[i] = 'x'; break;
			case 24:password[i] = 'y'; break;
			case 25:password[i] = 'z'; break;
			case 26:password[i] = '0'; break;
			case 27:password[i] = '1'; break;
			case 28:password[i] = '2'; break;
			case 29:password[i] = '3'; break;
			case 30:password[i] = '4'; break;
			case 31:password[i] = '5'; break;
			case 32:password[i] = '6'; break;
			case 33:password[i] = '7'; break;
			case 34:password[i] = '8'; break;
			case 35:password[i] = '9'; break;
			case 36:password[i] = 'A'; break;
			case 37:password[i] = 'B'; break;
			case 38:password[i] = 'C'; break;
			case 39:password[i] = 'D'; break;
			case 40:password[i] = 'E'; break;
			case 41:password[i] = 'F'; break;
			case 42:password[i] = 'G'; break;
			case 43:password[i] = 'H'; break;
			case 44:password[i] = 'I'; break;
			case 45:password[i] = 'J'; break;
			case 46:password[i] = 'K'; break;
			case 47:password[i] = 'L'; break;
			case 48:password[i] = 'M'; break;
			case 49:password[i] = 'N'; break;
			case 50:password[i] = 'O'; break;
			case 51:password[i] = 'P'; break;
			case 52:password[i] = 'Q'; break;
			case 53:password[i] = 'R'; break;
			case 54:password[i] = 'S'; break;
			case 55:password[i] = 'T'; break;
			case 56:password[i] = 'U'; break;
			case 57:password[i] = 'V'; break;
			case 58:password[i] = 'W'; break;
			case 59:password[i] = 'X'; break;
			case 60:password[i] = 'Y'; break;
			case 61:password[i] = 'Z'; break;
			case 62:password[i] = '`'; break;
			case 63:password[i] = '~'; break;
			case 64:password[i] = '!'; break;
			case 65:password[i] = '@'; break;
			case 66:password[i] = '#'; break;
			case 67:password[i] = '$'; break;
			case 68:password[i] = '%'; break;
			case 69:password[i] = '^'; break;
			case 70:password[i] = '&'; break;
			case 71:password[i] = '*'; break;
			case 72:password[i] = '('; break;
			case 73:password[i] = ')'; break;
			case 74:password[i] = '-'; break;
			case 75:password[i] = '_'; break;
			case 76:password[i] = '='; break;
			case 77:password[i] = '+'; break;
			case 78:password[i] = '['; break;
			case 79:password[i] = '{'; break;
			case 80:password[i] = ']'; break;
			case 81:password[i] = '}'; break;
			case 82:password[i] = ','; break;
			case 83:password[i] = '<'; break;
			case 84:password[i] = '>'; break;
			case 85:password[i] = '/'; break;
			case 86:password[i] = '?'; break;
		}
	}
	
	cout<<password<<"\n\n\nSave?\n\n1) Save & exit\n2) Try again\n\nYour choice: ";
	cin >> x;
	
	system("cls");
	
	if(x==2){
		goto start;
	}
	
	if(x==1){
		system("cls");
		cout<<"Enter the name of your file: ";
		cin>>name;
		name += ".txt";
		save.open(name.c_str());
		save << password;
		save.close();
		system("cls");
		cout<<"Saved as \""<<name<<"\" !\n\n\n";
		system("pause");
		exit(0);
	}

	
}
