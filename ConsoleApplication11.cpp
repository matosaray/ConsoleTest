// ConsoleApplication11.cpp
// -------------------------------------------------


#include <cmath>
#include <ctime>
#include <vector>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

bool hasSevenOrFive(int num);

int main()
{
    vector<int> v;
    srand(time(NULL));

	for (int i = 0; i < 100; i++)
	{
		int num = rand() % 101;
		if (hasSevenOrFive(num))
			v.push_back(num);
	}

	int counter = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (counter++ % 10 == 0) cout << endl;
		cout << setw(6) << right << v[i];
	}

	int myMax, myMin, accum = 0;
	myMax = v[0];
	myMin = v[0];

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > myMax) myMax = v[i];
		if (v[i] < myMin)myMin = v[i];
		accum += v[i];
	}

	cout << "\n Max:   " << myMax;
	cout << "\n Min:   " << myMin;
	cout << "\n Accum: " << accum;
	cout << "\n size:  " << v.size();
	cout << "\n Avg:   " << accum / v.size();
	cout << endl;

}
//------------------------------------------------------------
bool hasSevenOrFive(int num)
{
	string str = to_string(num);
	int pos1 = str.find('7');
	int pos2 = str.find('5');

	if (pos1 == pos2 && pos1 == -1)
		return false;
	else
		return true;
}
