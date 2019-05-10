// https://www.hackerrank.com/challenges/c-class-templates/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
#include <string.h>
#include <string>
using namespace std;

//Generalization
template<class T>
class AddElements
{
	T _data;
public:
	AddElements(T data) : _data(data) {}
	T add(T data2) {
		return _data + data2;
	}
};

//Specialization
template<>
class AddElements <string>
{
	string _data;
public:
	AddElements(string data) : _data(data) {}
	string concatenate(string data2) {
		return _data + data2;
	}
};

int main() {
	int n, i;
	cin >> n;
	for (i = 0; i < n; i++) {
		string type;
		cin >> type;
		if (type == "float") {
			double element1, element2;
			cin >> element1 >> element2;
			AddElements<double> myfloat(element1);
			cout << myfloat.add(element2) << endl;
		}
		else if (type == "int") {
			int element1, element2;
			cin >> element1 >> element2;
			AddElements<int> myint(element1);
			cout << myint.add(element2) << endl;
		}
		else if (type == "string") {
			string element1, element2;
			cin >> element1 >> element2;
			AddElements<string> mystring(element1);
			cout << mystring.concatenate(element2) << endl;
		}
	}
	return 0;
}
