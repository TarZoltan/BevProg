#include "std_lib_facilities.h"


int ga[] = {1,2,4,8,16,32,64,128,256,512};

void f(const int t[], int n){


	int la[10];

	for (int i = 0; i < 10; ++i)
	{
		la[i] = ga[i];
		cout << "la[" << i << "]: " << la[i] << endl; 
	}

	int* p = new int[n];

	for (int i = 0; i < n; ++i)
	{
		p[i] = t[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << "p[" << i << "]: " << p[i] << endl;
	}

	delete[] p;

}


void array_factorial(int t[], int n){

	t[0] = 1;
	for (int i=1; i<n; ++i){
		t[i] = t[i-1] * i;
		
	}

}

int main(){

	int a[3] = {4, 6, 7};

	f(a, 3);

	f(ga, 10);

	int aa[10];

	array_factorial(aa, 10);

	for (int i = 0; i < 10; ++i)
	{
		cout << "aa[" << i << "]: " << aa[i] << endl; 
	}


	return 0;
}
