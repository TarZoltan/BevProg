#include "std_lib_facilities.h"

int main()


	try {
	
	
	// 1. feladat
	
	// cout << "Success!\n";
	
	
	// 2. feladat
	
	//cout << "Success!\n";
	
	
	// 3. feladat
	
	//cout << "Success" << "!\n";
	
	
	// 4. feladat
	
	//cout << "success" << '\n';
	
	
	// 5. feladat
	
	/*
	int res = 7;
	vector<int> v(10);
	v[5] = res;
	cout << "Success!\n";
	*/
	
	
	// 6. feladat
	
	/*
	vector<int> v(10);
	v[5] = 7;
	if (v[5]==7)
	cout << "Success!\n";
	*/
	
	
	// 7. feladat
	
	/*
	bool cond = true;
	
	if (cond)
	cout << "Success!\n";
	else
	cout << "Fail!\n";
	*/
	
	
	// 8. feladat
	
	/*
	bool c = false;
	if (!c)
	cout << "Success!\n";
	else cout << "Fail!\n";
	*/
	
	
	// 9. feladat
	
	/*
	string s = "ape";
	bool c = "fool"<s;
	if (!c)
	cout << "Success!\n";
	*/
	 
	
	// 10. feladat
	
	/*
	string s = "ape";
	if (s!="fool")
	cout << "Success!\n";
	*/
	
	// 11. feladat
	
	/*
	string s = "ape";
	if (s=="ape")
	cout << "Success!\n"; 
	*/
	
	
	// 12. feladat
	
	/*
	string s = "ape";
	if ((s+"fool") == "apefool" )
	cout << "Success!\n";
	*/
	
	// 13. feladat
	
	/*
	vector<char> v(1);
	for (int i=0; i<v.size(); ++i)
	cout << "Success!\n";
	*/
	
	
	// 14. feladat
	
	/*
	vector<char> v(5);
	for (int i=5; i<=v.size(); ++i)
	cout << "Success!\n";
	*/
	
	// 15. feladat
	
	/*
	string s = "Success!\n";
	for (int i=0; i<9; ++i)
	cout << s[i];
	*/
	
	
	// 16. feladat
	
	/*
	if (true)
	cout << "Success!\n";
	else cout << "Fail!\n";
	*/
	
	// 17. feladat
	
	/*
	int x = 2000;
	int c = x;
	if (c==2000)
	cout << "Success!\n";
	*/
	
	
	// 18. feladat
	
	/*
	string s = "Success!\n";
	for (int i=0; i<9; ++i)
	cout << s[i];
	*/
	
	
	// 19. feladat
	
	/*
	vector <int> v(5);
	for (int i=5; i<=v.size(); ++i)
	cout << "Success!\n";
	*/
	
	
	// 20. feladat
	
	/*
	int i=0;
	int j = 9;
	while (i<10){
	++i;
	if (j<i)
	cout << "Success!\n";
	}
	*/
	
	
	// 21. feladat
	
	/*
	int x = 3;
	double d = 5.0/(x - 2.0);
	if (d== 2 * x - 1)
	cout << "Success!\n";
	*/
	
	
	// 22. feladat
	
	/*
	string s = "Success!\n";
	for (int i=0; i<=8; ++i)
	cout << s[i];
	*/
	
	
	// 23. feladat
	
	/*
	int i=9;
	int j = 9;
	while (i<10){
	++i;
	if (j<i)
	cout << "Success!\n";
	}
	*/
	
	// 24. feladat
	
	/*
	int x = 4;
	double d = 5.0 / ( x - 2.0);
	if (d == x - 2 + 0.5)
	cout << "Success!\n";
	*/
	
	
	// 25. feladat
	
	/*
	cout << "Success!\n";
	*/
	
	
	keep_window_open();
	return 0;
	}
	
	catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
	}
	catch (...) {
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
	}
