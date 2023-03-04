#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

class Computer
{
private:
	string processor;
	size_t ram;
	size_t hdd;
public:
	Computer()
	{
		processor = "";
		ram = 0;
		hdd = 0;
	}
	Computer(string fprocessor, size_t fram, size_t fhdd) 
	{
		processor = fprocessor;
		ram = fram;
		hdd = fhdd;
	}
	void print()
	{
		cout << "Processor: " << processor << endl;
		cout << "Ram: " << ram << "Gb" << endl;
		cout << "HDD: " << hdd << "Gd" << endl;
	}
};

int main()
{
	vector<Computer> v1;
	string arr_name[] = { "ghg", "hgh", "pnp", "npn" };
	srand(time(0));
	for (int i = 0; i < 5; i++)
	{
		int a = rand() % 4;
		int b = rand() % 10;
		int c = rand() % 512;
		Computer ci(arr_name[a], b, c);
		v1.push_back(ci);
	}
	for (int i = 0; i < v1.size(); i++)
	{
		v1.at(i).print();
	}
	return 0;
}