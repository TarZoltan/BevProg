#include "std_lib_facilities.h"


class Date{
private:
	int y, m, d;
public:
	Date(int yt, int mt, int dt){

		if (mt < 1 || mt > 12)
		{
			simple_error("Wrong month!");
		}

		if (dt < 1 || dt > 31)
		{
			simple_error("Wrong day!");
		}

		y = yt;
		m = mt;
		d = dt;
	};


	void add_day(int n)
	{
    d += n;
    
    while(d < 1 || d > 31){

	    if (d > 31){ 
	    	++m;
	    	d -= 31;
	    }

	    if (d < 1){
	    	--m;
	    	d += 31;
	    }
	}


    while(m < 1 || m > 12){
	    if (m > 12){
	    	++y;
	    	m -= 12;
	    }


	    if (m < 1){
	    --y;
	    m += 12;
		}
	}};



	int month(){
		return m;
	}

	int day(){
		return d;
	}

	int year(){
		return y;
	}
};


int main(){


	Date today(2021,10,20);
	cout << "Today: " << today.year() << "." << today.month() << "." << today.day() << "." << endl;

	Date tomorrow = today;
	tomorrow.add_day(-342);
	cout << "Tomorrow: " << tomorrow.year() << "." << tomorrow.month() << "." << tomorrow.day() << "." << endl;	


	return 0;
}
