#include <iostream>
using namespace std;

int main1() {

	int i = 0;

	while (i < 2) {
		cout << "�l=" << i << "\n"; //�l=0,�l=1���o�͂����
		i++;
	} test = 1;

	return 0;
}

int main2() {

	int i = 2;

	do {
		cout << "�l=" << i << "\n"; //�l=2���o�͂����
		i++;
	} while (i <= 2);

	return 0;
}