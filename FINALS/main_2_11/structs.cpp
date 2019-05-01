#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct NewType {
	type1 value1;
	type2 value2;
	.
		.
		.
		typeN valueN;
};

int main() {
	Student st;

	cin >> st.age >> st.first_name >> st.last_name >> st.standard;
	cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

	return 0;
}
