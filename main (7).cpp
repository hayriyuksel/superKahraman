/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
class SuperKahraman {
public:
	string ad;
	int can;
	int hasar;
	void ozelGuc() {
		hasar=10;
	}
	SuperKahraman() {
		hasar=50;
		can=100;
	}
};
int main()
{
	SuperKahraman spiderMan;
	spiderMan.ad="SpiderMan";

	SuperKahraman batMan;
	spiderMan.ad="Batman";

	cout<<"Super Kahramanlar KapD1ED1yor."<<endl;
	bool savasBittimi=true;
	while(savasBittimi) {
		char karakterSecimi;
		cout<<"Hangi sC<per kahraman saldD1rsD1n. s/b"<<endl;
		cin >>karakterSecimi;
		if (karakterSecimi == 's') {
			batMan.can==spiderMan.hasar;
		}
		else if(karakterSecimi == 'b') {
			spiderMan.can==batMan.hasar;
		}
		else {
			cout<< "Hatali secim"<<endl;
		}
		cout<<"SpiderMan kalan canD1:"<<spiderMan.can<<"Batman kalan can:"<<batMan.can<<endl;
		if(spiderMan.can<=0 ||batMan.can<=0) {
			savasBittimi=false;
			if(spiderMan.can<0) {
				cout<<"Kazanan batMan"<<endl;
			}
			else {
				cout<<"Kazanan SpiderMan"<<endl;
			}
		}
	}
	return 0;
}
