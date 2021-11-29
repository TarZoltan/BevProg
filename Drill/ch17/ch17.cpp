#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a){

	for (int i=0; i<10; ++i){
		os << "a[" << i << "] = " << a[i] << endl;
	}

}

void print_array(ostream& os, int* a, int n){

	for (int i=0; i<n; ++i){
		os << i +1 << ": " << a[i] << endl;
	}

}

void print_vector(ostream& os, vector<int>& v){

	for (int i = 0; i < v.size(); ++i)
	{
		os << i +1 << ": " << v[i] << endl; 
	}
}

void init_vector(vector<int>& v, int s, int n){

	for (int i = 0; i < n; ++i)
	{

		v[i] = s + i; 
	}
}

int main(){

	int size=10;
	int* p = new int[size];

	for (int i = 0; i < size; ++i)
	{
		cout << i + 1 << ": " << p[i] << endl;
	}

	print_array10(cout, p);

	delete[] p;

	int* ph = new int[size];

	for (int i = 0; i < size; ++i)
	{
		ph[i] = 100 + i;
	}

		for (int i = 0; i < size; ++i)
	{
		cout << i + 1 << ": " << ph[i] << endl;
	}

	

	int* ph2 = new int[size+1];

	for (int i = 0; i < size+1; ++i)
	{
		ph2[i] = 100 + i;
	}

		for (int i = 0; i < size +1 ; ++i)
	{
		cout << i + 1 << ": " << ph2[i] << endl;
	}

	print_array(cout, ph, 4);
	print_array(cout, ph2, 11);

	delete[] ph;
	delete[] ph2;

	int* ph3 = new int[20];

	for (int i = 0; i < 20; ++i)
	{
		ph3[i] = 100 + i;
	}

		for (int i = 0; i < size; ++i)
	{
		cout << i + 1 << ": " << ph3[i] << endl;
	}

	delete[] ph3;

	vector<int> v1 {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};

	cout << "Vektor!" << endl;

	print_vector(cout, v1);

	vector<int> v2 {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};

	print_vector(cout, v2);

	vector<int> v3(20);

	init_vector(v3, 100, 20);

	print_vector(cout, v3);	

	return 0;
}
