#include "std_lib_facilities.h"

unique_ptr<vector<int>> suspicious()
{
	auto p = make_unique<vector<int>>();

	for(int i; cin >> i; )
	{
		if(i) p->push_back(i);
		else throw std::exception();
	}

	return p;
}

int main()
try {

	auto p = suspicious();

	for(int i = 0; i < p->size(); ++i)
		cout << p->at(i) << ' ';
	cout << '\n';

	return 0;

} catch (exception& e){
	cerr << "Error!\n";
	return 1;
}
