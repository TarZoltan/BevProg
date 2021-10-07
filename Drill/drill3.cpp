#include "std_lib_facilities.h"

int main(){


	double a = 0, b = 0, d = 0, e = 0;
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
	
	
	
	cout << "Do you want to continue? Type a character if yes and type | if not!" << endl;
	cin >> c;
	
	}
	*/
	
	double min = 0, max = 0;
	int i = 0;
	
	/* 6. feladat
	
	
	while (c != '|') {
	
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
	
	
	
	cout << "Do you want to continue? Type a character if yes and type | if not!" << endl;
	cin >> c;
	}*/
	
	string unit = "a";
	
	const double m_to_cm = 100;
	const double inch_to_cm = 2.54;
	const double ft_to_inch = 12;
	double t = 0;
	int j = 0;
	double sum = 0;
	
	vector <double> v;
	
	
	while (c != '|') {
	
	cout << "Enter a number!" << endl;
	cin >> e >> unit;
	
	if(e >= 0){
	
		if (unit == "cm"){
			t = e / m_to_cm;	
		}else if(unit == "m"){
			t = e;
		}else if(unit == "in"){
			t = (e * inch_to_cm)/m_to_cm;
		}else if(unit == "ft"){
			t = (e * ft_to_inch * inch_to_cm)/m_to_cm;
		}else{
			cout << "Wrong unit!" << endl;
		}
		
		if (j == 0){
			max = t;
			min = t;
			j = 1;
		}
		
		sum = sum + t;
		
		if (t <= min){
			min = t;
		} else if (t >= max){
			max = t;
		}
		
		v.push_back(t);
	
	
	}else{
		cout << "Negative lenght!" << endl;
	}
	
	
	
	cout << "Do you want to continue? Type a character if yes and type | if not!" << endl;
	cin >> c;
	}

	sort(v.begin(), v.end());
	
	
	for(int l = 0; l < v.size(); l++){
		cout << v[l] << endl;
	}
	
	//cout << "Number of values: " << v.size() << endl;
	
	cout << "Max value: " << max << " m" << endl;
	cout << "Min value: " << min << " m" << endl;
	cout << "Sum of values: " << sum << " m" << endl;
	
	
	return 0;
}
