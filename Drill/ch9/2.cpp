#include "std_lib_facilities.h"

struct Date{

	int y, m, d;
	Date (int yt, int mt, int dt);
	void add_day(int n);
};

Date::Date (int yt, int mt, int dt){

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
}

void Date::add_day(int n)
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
	}
}



int main(){

Date today{2008, 11, 20};

cout << "Today: " << today.y << "." << today.m << "." << today.d << "." << endl;

Date tomorrow(today);
tomorrow.add_day(60);
cout << "Tomorrow: " << tomorrow.y << "." << tomorrow.m << "." << tomorrow.d << "." << endl;

	return 0;
}
