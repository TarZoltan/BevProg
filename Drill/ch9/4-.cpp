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


class Date{
private:
	int y, d;
	Month m;
public:
	Date(int yt, Month mt, int dt){

		if (mt < Month::jan || mt > Month::dec)
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
	    	int(m) = int(m)+1;
	    	d -= 31;
	    }

	    if (d < 1){
	    	int(m) = int (m)-1;
	    	d += 31;
	    }
	}


    while(int(m) < 1 || int(m) > 12){
	    if (int(m) > 12){
	    	++y;
	    	int(m) = int(m) - 12;
	    }


	    if (int(m) < 1){
	    --y;
	    int(m) = int(m) + 12;
		}
	}};



	int month(){
		return int(m);
	}

	int day(){
		return d;
	}

	int year(){
		return y;
	}
};


int main(){

	Date today(2021,Month::jan,20);
	cout << "Today: " << today.year() << "." << today.month() << "." << today.day() << "." << endl;

	return 0;
}
