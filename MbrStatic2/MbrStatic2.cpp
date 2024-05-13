// MbrStatic2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	long long static int nim;
public:
	long long int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim)
	{
		nim = pNim;
	}
	static int getNim() { return nim; }

	mahasiswa(string pnama) {
		nama = pnama;
		setID();
	}
	
};