// https://www.hackerrank.com/challenges/c-tutorial-strings/problem
#include <iostream>
#include <string>
#pragma warning(disable : 4996)
using namespace std;

int main() {

	string a;
	string b;
	
	cin >> a;
	cin >> b;

	int len_a = a.size();
	int len_b = b.size();

	cout << len_a << ' ' << len_b << endl;
	cout << a + b << endl;
	swap(a[0], b[0]);
	cout << a << ' ' << b << endl;

	getchar();

	return 0;
}

