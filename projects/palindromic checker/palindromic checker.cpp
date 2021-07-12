//A palindromic number is a number (such as 626) that remains the same when its digits are reversed.
//Write a function that returns true if a given number is a palindrome, and false, if it is not.
#include <iostream>
#include <conio.h> // added
using namespace std;

bool isPalindrome(int x) {
    //complete the function
    int s,y,z,n = 0;
    
    while(x > 9){
        s = x;
        z = x - ((x / 10) * 10);

        while(s != 0){
            y = s;
            s = s/10;
            n++;
        }

        if(y != z)
            return false;
        
        while(n > 0){
            y *= 10;
            n--;
        }
        x = x/10;
        x = x - y;
    
    }

    return true;
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout <<n<<" is NOT a palindrome";
    }
    //return 0; // removed
    getch(); 	// added
}
