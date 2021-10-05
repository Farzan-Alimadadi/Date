#include <iostream>
using namespace std;

class Date
{
public:
	Date(int D_year, int D_month, int D_day);
	Date();
	~Date();
	static void printObjCount(void);
	void show();
private:
	int year, month, day, ObjNo;
	static int ObjCnt;
};

int Date::ObjCnt = 0;

Date::Date(int D_year, int D_month, int D_day)
{
	year = D_year; month = D_month; day = D_day;
	ObjNo = ++ObjCnt;
}

Date::Date()
{
	ObjNo = ++ObjCnt;
}

Date::~Date()
{
	--ObjCnt;
}

void Date::printObjCount(void)
{
	cout << "count:" << ObjCnt << "\n";
}

void Date::show()
{
	cout << year << "/" << month << "/" << day;
}

int main()
{
	Date d1(1999, 9, 1);
	Date d2(10, 5, 2021);
	Date d3;
	d3 = d1;
	Date::printObjCount();
	d2.show();
	return 0;
}