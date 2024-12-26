#include <iostream>
using namespace std;

int add(int a[]) {
	int result = 0;
	for (int i = 0; i < 5; i++) {
		result += a[i];
	}
	return result;
}

double average(double a) {
	double result = a / 5;
	return result;
}

int main() {
	int arr[5];

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	int addResult = add(arr);
	double avrResult = average(addResult);
	cout << "합 : " << addResult << endl;
	cout << "평균 : " << avrResult << endl;

	return 0;
}