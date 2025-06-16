#include <iostream>
#include "SimpleVector.h"

using namespace std;

int main() 
{
	SimpleVector<int> sm;
	sm.push_back(12);
	sm.push_back(13);
	sm.push_back(14);
	sm.push_back(15);

	cout << sm.size() << endl;
	cout << sm.capacity() << endl;
	
	sm.pop_back();

	cout << sm.size() << endl;

	sm.cleanAll();


	SimpleVector<char> sm2(3);
	sm2.push_back('a');
	sm2.push_back('b');
	sm2.push_back('c');

	cout << sm2.size() << endl;
	cout << sm2.capacity() << endl;

	sm2.pop_back();

	cout << sm2.size() << endl;

	sm2.cleanAll();

	return 0;
}
