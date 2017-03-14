#include "stdafx.h"
#include <stdlib.h>
#include <conio.h>
#include <iostream>
using namespace std;

class IOS
{
	int LastVersion;
public:
	IOS(int LastVersion)
	{
		this->LastVersion = LastVersion;
	}
	virtual void print()
	{
		cout << endl << "Last version: IOS "<< LastVersion << endl;
	}
};

class IPhone : public IOS
{
	int Processor;
public:
	IPhone(int LastVersion, int Process):
		IOS(LastVersion)
	{
		Processor = Process;
	}
	void print()
	{
		IOS::print();
		cout << "Processor: A" << Processor << endl;
	}
};

int main()
{
	IOS i1(10);
	IPhone phone1(7,4);
	IOS *Print;
	Print = &i1;
	Print->print();
	Print = &phone1;
	Print->print();
	_getch();
    return 0;
}