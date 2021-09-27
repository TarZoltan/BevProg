#include "std_lib_facilities.h"

int main(){

	cout << "Enter the name of the person  you want to write, another friend, gender(m/f) and age!\n";
	
	
	string first_name;
	string friend_name;
	char friend_sex = 0;
	int age;
	
	cin >> first_name >> friend_name >> friend_sex >> age;
	
	
	if ((age<0) or (age>110)){
		simple_error("you're kidding!");
	};
	
	cout << endl;
	
	cout << "Dear " << first_name << "," << endl;
	cout << "I hope this letter finds you in good health and state." << endl;
	cout << "I'm doing fine, although I wish there were more hours in the day."<< endl;
	cout << "It's just so much to do."<< endl;
	cout << "Have you seen " << friend_name << " lately?" << endl;
	
	
	if (friend_sex == 'm'){
		cout << "If you see " << friend_name << " please ask him to call me." << endl;
		}
	else if(friend_sex == 'f'){
		cout << "If you see " << friend_name << " please ask her to call me." << endl;
		};
	
	
	
	if (age < 12){
		cout << "Next year you will be " << age + 1 << "." << endl;
		};
		
	if (age == 17){
		cout << "Next year you will be able to vote." << endl;
		};
		
	if (age > 70){
		cout << "I hope youare enjoying retirement." << endl;
		};
		
		
	cout << "Yours sincerely,"<< endl;
	cout << endl;
	cout << endl;
	cout << "Tar Zoltán"<< endl;
	

	return 0;
}
