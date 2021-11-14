#include "std_lib_facilities.h"

class Point1{

private:
	double x, y;

public:

	void set_x(double n){
		x = n;
	}

	void set_y(double n){
		y = n;
	}

	double get_x(){
		return x;
	}

	double get_y(){
		return y;
	}


};

struct Point{
	double x, y;
};


int main(){
/*
	cout << "Addja meg a pont kordinátáit (x y)" << endl;
	double a, b;
	cin >> a >> b;

	Point1 pont;

	pont.set_x(a);
	pont.set_y(b);

	cout << "A( " << pont.get_x() << "," << pont.get_y() << ")" << endl;
*/
	cout << "File: ";
	string iname;
	cin >> iname;

	ifstream ist {iname};
	if(!ist) error("nincs ilyen file");

	vector<Point> original_points;
	double x, y;

	int nop = 7;
	int i = 0;

	while((ist >> x >> y) && (i != nop)){
		original_points.push_back(Point{x,y});
		++i;
	}

	cout << "Első vektor:" << endl;
	for (const auto& r : original_points)
		cout << "(" << r.x << " " << r.y << ")" << endl;

	string oname = "mydata.txt";

	ofstream ost {oname};

	if (! ost) error("Nem lehet megnyitni a ", oname);
	
	for (const auto& r : original_points)
		ost << r.x << " " << r.y << endl;

	ost.close();
	ist.close();

	ifstream ist2 {oname};
	if(!ist2) error("nincs ilyen file");

	vector<Point> processed_points;

	i = 0;

	while((ist2 >> x >> y) && (i != nop)){
		processed_points.push_back(Point{x,y});
		++i;
	}

	cout << "Második vektor:" << endl;
	for (const auto& r2 : processed_points)
		cout << "(" << r2.x << " " << r2.y << ")" << endl;


	if (original_points.size() == processed_points.size())
	{
		
		for (int i = 0; i < original_points.size(); ++i)
		{
			if (original_points[i].x != processed_points[i].x || original_points[i].y != processed_points[i].y)
			{
				cout << "A vektorok " << i+1 << ". eleme külömbözik" << endl;
			}
		}


	}else{
		cout << "A vektorok mérete külömbözik" << endl;
	}

	return 0;
}

