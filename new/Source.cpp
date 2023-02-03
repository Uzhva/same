#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> mv = { 1, 2, 3, 4, 5, 6 };
	vector<int> mv2 = { 4, 5, 6, 7, 8, 9 };
	for (vector<int>::iterator it = mv.begin(); it != mv.end(); it++)
	{
		for (vector<int>::iterator it2 = mv2.begin(); it2 != mv2.end(); it2++)
			if (*it == *it2)
				cout << *it << "	";
	}
}