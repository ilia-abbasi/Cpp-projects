#include <iostream>
#include <windows.h> // library we need
#include <conio.h>
using namespace std;

int main(){
	
	cout<<"DEFAULT!\n";
	//ShellExecute(NULL, "open", "example.exe", NULL, NULL, SW_SHOWDEFAULT);
	ShellExecute(NULL, "open", "hey.txt", NULL, NULL, SW_SHOWDEFAULT); // opens the hey.txt file in the same dir
	ShellExecute(NULL, "open", "cmd", NULL, NULL, SW_SHOWDEFAULT); // opens cmd
	getch();
}
