// https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#pragma warning(disable : 4996)


int main() {
	int n, q;
	cin >> n >> q;

	vector<vector<int>> a(n);

	for (int i = 0; i < n; i++) {
		int size;
		cin >> size;
		a[i].resize(size);
		for (int j = 0; j < size; j++) {
			cin >> a[i][j];
		}
	}

	for (int l = 0; l < q; l++) {
		int i, j;
		cin >> i >> j;
		cout << a[i][j] << endl;
	}

	getchar();
	return 0;
}
	
	

