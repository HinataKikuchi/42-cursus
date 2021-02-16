#include <iostream>
using namespace std;

int main1() {

	int i = 0;

	while (i < 2) {
		cout << "値=" << i << "\n"; //値=0,値=1が出力される
		i++;
	} test = 1;

	return 0;
}

int main2() {

	int i = 2;

	do {
		cout << "値=" << i << "\n"; //値=2が出力される
		i++;
	} while (i <= 2);

	return 0;
}