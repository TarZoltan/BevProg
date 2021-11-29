#include "std_lib_facilities.h"


void print_array(ostream& os, int* a, int n){

	for (int i=0; i<n; ++i){
		os << i +1 << ": " << a[i] << endl;
	}

}

int main(){


	int a = 7;
	int* p1 = &a;

	int size = 7;

	cout << a << " p:" << p1 << " " << *p1 << endl;

	int* numbers = new int[size];

	numbers[0] = 1;

	for (int i = 1; i < size; ++i)
	{
		numbers[i] = numbers[i-1]*2;
	}

	print_array(cout, numbers, size);

	int* p2 = numbers;

	cout << "p2: " << p2 << endl;
	cout << "*p2: " << *p2 << endl;
	cout << "p2 vektora: "<< endl;
	print_array(cout, p2, size);

	int* p3 = p2;

	cout << "p3: " << p3 << endl;
	cout << "*p3: " << *p3 << endl;
	cout << "p3 vektora: "<< endl;

	print_array(cout, p3, size);

	p2=p1;
	p1=p3;
	cout << "p1=" << p1 << ", *p1=" << *p1 << endl;
	cout << "p2=" << p2 << ", *p2=" << *p2 << endl;

	delete[] numbers;

	size = 10;

	int* numbers2 = new int[size];

	numbers2[0] = 1;

	for (int i = 1; i < size; ++i)
	{
		numbers2[i] = numbers2[i-1]*2;
	}

	p1 = numbers2;

	print_array(cout, p1, size);

	int* numbers3 = new int[size];

	p2 = numbers3;

	for (int i = 0; i < size; ++i)
	{
		p2[i] = p1[i];
	}

	cout << "P2" << endl;
	print_array(cout, p1, size);

	vector<int> v1 {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

	vector<int> v2 = v1;

	cout << v2[4] << endl;

	return 0;
}
