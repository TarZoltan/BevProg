#include "std_lib_facilities.h"

int main(){


	double a = 0, b = 0, d = 0;
	char c = 'a';
	double small = 0, large = 1;
	
	/* 1 - 5 feladat
	
	while (c != '|'){
	
	cout << "Enter 2 integer!" << endl;
	cin >> a >> b;
	cout << a << '\t' << b << endl;
	
	if( a < b){
		small = a;
		large = b;
		cout << "The smaller value is: " << small << endl;
		cout << "The larger value is: " << large << endl;
	}else if ( a > b ){
		small = b;
		large = a;
		cout << "The smaller value is: " << small << endl;
		cout << "The larger value is: " << large << endl;
	}else{
		cout << "The numbers are equal" << endl;
	};
	
	if ( (large - small) < 0.01 ){
		cout << "The numbers are almost equal" << endl;
	}
	
	
	
	cout << "Do you want to continue? Type any character if yes and type | if not!" <<endl;
	cin >> c;
	
	}
	*/
	
	double min = 0, max = 0;
	int i = 0;
	string unit = "a";
	
	do {
	
	cout << "Enter a number!" << endl;
	cin >> d;
	
	if (i == 0){
		max = d;
		min = d;
		i = 1;
	}
	
	if (d <= min){
		min = d;
		cout << d << " the smallest so far" << endl;
	} else if (d >= max){
		max = d;
		cout << d << " the largest so far" << endl;
	}else{
		cout << d << endl;
	}
	
	
	
	cout << "Do you want to continue? Type any character if yes and type | if not!" <<endl;
	cin >> c;
	}while (c != '|');

	return 0;
}
