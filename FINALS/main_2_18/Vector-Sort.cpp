// https://www.hackerrank.com/challenges/vector-sort/problem

//#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#pragma warning(disable : 4996)
using namespace std;


int main() {
	vector<int>v; // (creates an empty vector of integers)
	int size=0;
	cin >> size;
	int x=0;

	for (int i = 0; i < size; i++)
	{
		cin >> x;
		v.push_back(x);

	}

	//v.pop_back(); //(After this the size decreases by 1)
	sort(v.begin(), v.end()); // (Will sort all the elements in the vector)

	for (int i = 0; i < size; i++)
	{
		cout << v[i] << " ";
	}
	
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	getchar();
	getchar();
	return 0;
}
