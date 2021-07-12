#include <iostream>
#include <string>
using namespace std;

enum myenum {
	dog = 4,
	cat = 1,
	bbb = 100
};

namespace fnmspc {
	void function(){
		
		cout<<"The fnmspc"<<endl;
	}
}

namespace snmspc {
	void function(){
		
		cout<<"The snmspc"<<endl;
	}
}

struct syste {
	string name;
	string id;
	int id_number;
	bool is_accepted;
};

int main(){
	
	//myenum san;
	//san = dog; //it also works here
	int san = dog;
	
	cout<<san<<endl;
	
	snmspc::function();
	fnmspc::function();
	
	syste user1;
	syste user2;
	
	user1.name = "John";
	user2.id_number = 2355;
	
	cout<<user1.name<<endl<<user2.id_number<<endl<<user1.is_accepted<<endl<<user1.id_number<<endl;
	return 0;
}
