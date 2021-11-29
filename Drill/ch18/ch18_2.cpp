#include "std_lib_facilities.h"


	vector<int> gv = {1,2,4,8,16,32,64,128,256,512};
	

	void f(vector<int> t){

		vector<int> lv(t.size());

		lv = gv;

		for (int i = 0; i < lv.size(); ++i)
		{
			cout << "lv[" << i << "]: "<< lv[i] << endl;
		}

	
		vector<int> lv2(t.size());

		lv2 = t;

		for (int i = 0; i < lv2.size(); ++i)
		{
			cout << "lv2[" << i << "]: "<< lv2[i] << endl;	
		}


	}

	void vector_factorial(vector<int>& v){

		v[0] = 1;

			for (int i = 1; i < v.size(); ++i)
			{
				v[i] = v[i-1] * i;
			}

	}


int main(){

	cout << gv.size() << endl;


	f(gv);

	vector<int> vv(10);

	vector_factorial(vv);

	f(vv);



	return 0;
}
