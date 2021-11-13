#include "my.h"
#include "iostream"

int foo =0;

void swap_v(int a, int b){


	int temp;
	temp = a;
	a = b;
	b = temp;

}


void swap_r(int a, int& b){


	int temp;
	temp = a;
	a = b;
	b = temp;

}

void swap_cr(int& a, int& b){


	int temp;
	temp = a;
	a = b;
	b = temp;

}


namespace X{

	int var = 0;

	void print(){
		std::cout << var << std::endl;
	}
}


namespace Y{

	int var = 0;

	void print(){
		std::cout << var << std::endl;
	}
}

namespace Z{

	int var = 0;

	void print(){
		std::cout << var << std::endl;
	}
}


int main(){

	foo = 7;
	int i = 99;


	print_foo();
	print(i);
/*
	int x = 9;
	int y = 7;

	swap_v(x,y);
	std::cout << x << " " << y << std::endl;

	x = 9;
	y = 7;

	swap_r(x,y);
	std::cout << x << " " << y << std::endl;

	x = 9;
	y = 7;

	swap_cr(x,y);
	std::cout << x << " " << y << std::endl;
*/

	X::var = 7;
	X::print(); // print X’s var

	using namespace Y;
	var = 9;
	print(); // print Y’s var
		{
			using Z::var;
			using Z::print;
			var = 11;
			print(); // print Z’s var
		}
	print();	// print Y’s var
	X::print();	// print X’s var

	return 0;
}