#include "std_lib_facilities.h"


enum class Month{

	jan = 1,
	feb,
	mar,
	apr,
	may,
	jun,
	jul,
	aug,
	sep,
	oct,
	nov,
	dec
};

Month operator++(Month& m)
{
	m = (m==Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}


class Year {
	static const int min = 1800;
	static const int max = 2200;

public:

	class Invalid { };
	Year(int x)
	:y{x} 
	{
		if (x<min || max<=x) throw Invalid{}; 
	}
	int year() { return y; }
	void increment() { y++; }

private:

	int y;

	};


	Year operator++(Year& year)
{
	year.increment();
}

ostream& operator<< (ostream& os, Year year)
{
	return os << year.year();
}



class Date{
public:

	Date(Year y, Month m, int d): ye(y), mo (m), da(d){

		if (d < 1 || d > 31) throw Invalid{};
	};
	
	class Invalid{};

	int month() const {
		return int(mo);
	}

	int day() const {
		return da;
	}

	int year() {
		return ye.year();
	}


	void add_day(int n)
	{
    da += n;
    
    while(da > 31){

	    if (da > 31){ 
	    	++mo;

	    	if (mo == Month::jan)
	    	{
	    		++ye;
	    	}



	    	da -= 31;
	    }
	}

};

	void add_year(int n)
	{

		for (int i = 0; i < n; ++i)
		{
			++ye;
		}




	}


	void add_month(int n)
	{

		for (int i = 0; i < n; ++i)
		{
			++mo;
			if (mo == Month::jan)
	    	{
	    		++ye;
	    	}

		}




	}

private:
	int da;
	Year ye;
	Month mo;
};


int main()
try{
	Date today(Year{2019},Month::dec,31);
	cout << "Today: " << today.year() << "." << today.month() << "." << today.day() << "." << endl;

	Date tomorrow = today;
	tomorrow.add_day(390);
	cout << "Today: " << tomorrow.year() << "." << tomorrow.month() << "." << tomorrow.day() << "." << endl;

	tomorrow.add_year(3);
	cout << "Today: " << tomorrow.year() << "." << tomorrow.month() << "." << tomorrow.day() << "." << endl;	

	tomorrow.add_month(13);
	cout << "Today: " << tomorrow.year() << "." << tomorrow.month() << "." << tomorrow.day() << "." << endl;	


	return 0;
}
catch(Date::Invalid){
	error("Invalid date!");
}
