#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	ifstream plik;
	ofstream plik1;
	string liczba1;
	string liczba2;
	string liczba3;
	string liczba4;
	plik.open("liczby.txt");
	plik1.open("wyjscie.txt");
	if( plik.good() == true )
    {
    	
    	plik>>liczba1;
    	plik>>liczba1;
    	cout <<liczba1<<endl;
    	
    	plik>>liczba2;
    	plik>>liczba2;
    	cout <<liczba2<<endl;
    	
    	plik>>liczba3;
    	plik>>liczba3;
    	cout <<liczba3<<endl;
    	
    	plik>>liczba4;
    	plik>>liczba4;
    	cout <<liczba4<<endl<<endl;
    	
    string str1 = liczba1;
    string str2 = liczba2;
    string str3 = liczba3;
    string str4 = liczba4;
    int a = strtol(str1.c_str(), NULL, 2);
    int b = strtol(str2.c_str(), NULL, 10);
    int c = strtol(str3.c_str(), NULL, 16);
    int d = strtol(str4.c_str(), NULL, 2);
    cout <<a<<endl;
    cout <<b<<endl;
    cout <<c<<endl;
    cout <<d;

plik1<<a<<endl;
plik1<<b<<endl;
plik1<<c<<endl;
plik1<<d<<endl;
	
	plik.close();
	plik1.close();

}
	
	return 0;
}
