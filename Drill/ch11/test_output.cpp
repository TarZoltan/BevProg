#include "std_lib_facilities.h"

int main(){

	int birth_year = 1999;

	cout  << birth_year << " (decimal)\t" << hex << birth_year << " (hexadecimal)\t" << oct << birth_year << " (octal)"  << endl;
	cout << dec << 21 << endl;

/*
	int a, b, c, d;

	cin >> a >>oct >> b >> hex >> c >> d;
	cout << a << '\t'<< b << '\t'<< c << '\t'<< d << '\n' ;
*/
	cout << defaultfloat << 1234567.89 << '\t' << fixed << 1234567.89 << '\t' << scientific << 1234567.89  << endl;

	cout <<'|'<< setw(10) << "Kiss" << setw(20) << '|' << "Kálmán" <<'|'<< setw(30) <<'|' << 06375731 << '|' << setw(40) << "Kálmán@mailcom" << "|\n";
	cout <<'|'<< setw(10) << "Nagy" << setw(20) << '|'  << "Rozi" <<'|'<< setw(30) <<'|' << 063754444 << '|' << setw(40) << "b@mailcom" << "|\n";
	cout <<'|'<< setw(10) << "Kovács" << setw(20) << '|' << "István" <<'|'<< setw(30) <<'|' << 06575731 << '|' << setw(40) << "c@mailcom" << "|\n";
	cout <<'|'<< setw(10) << "Ács" << setw(20) <<  '|' << "Luca" <<'|'<< setw(30) <<'|' << 063752231 << '|' << setw(40) << "d@mailcom" << "|\n";
	cout <<'|'<< setw(10) << "Orosz" << setw(20) << '|' << "Kristóf" <<'|'<< setw(30) <<'|' << 06242731 << '|' << setw(40) << "e@mailcom" << "|\n";
	cout <<'|'<< setw(10) << "Horváth" << setw(20)  << '|' << "Kincső" <<'|'<< setw(30) <<'|' << 06355731 << '|' << setw(40) << "f@mailcom" << "|\n";

	return 0;
}
