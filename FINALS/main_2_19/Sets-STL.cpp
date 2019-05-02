// https://www.hackerrank.com/challenges/cpp-sets/problem


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {

	set<int>s;
	int size = 0;
	cin >> size;

	int x;
	int y;
	for (int i = 0; i < size; i++)
	{
		cin >> y;
		cin >> x;
		
		if (y == 1) s.insert(x);
		else if (y == 2) s.erase(x);
		if (y == 3)
		{
			set<int>::iterator itr = s.find(x);
			if (itr != s.end()) cout << "Yes" << endl;
			else cout << "No" << endl;
		
		}

	}

	getchar();
	getchar();
	return 0;
}