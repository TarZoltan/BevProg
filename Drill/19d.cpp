#include "std_lib_facilities.h"

vector<int> suspicious()
{
	vector<int> p;

	for(int i; cin >> i; )
	{
		if(i) p.push_back(i);
		else throw exception();
	}

	return p;
}

int main()
try {

	auto p = suspicious();

	for(int i = 0; i < p.size(); ++i)
		cout << p.at(i) << ' ';
	cout << '\n';

	return 0;

} catch (exception& e){
	std::cerr << "Error!\n";
	return 1;
}