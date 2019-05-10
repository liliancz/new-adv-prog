// https://www.hackerrank.com/challenges/cpp-maps/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;


int main() {
	
	map<string, int>m;
	int size = 0;
	cin >> size;
	int q=0, y=0;
	string x;
	for (int i = 0; i < size; i++)
	{
		cin >> q >> x;
		if (q == 1) 
		{
			cin >> y;
			m[x] += y;
		}
		else  if (q == 2) m.erase(x);
		else cout << m[x] << "\n";

	}

	
	
	getchar();
	return 0;
}
