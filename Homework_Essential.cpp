#include <iostream>
using namespace std;

int add(int a[], int length) {
	int result = 0;
	for (int i = 0; i < length; i++) {
		result += a[i];
	}
	return result;
}

double average(double a, int length) {
	double result = a / length;
	return result;
}

int main() {
	int length = 1;
	int arr[1];

	cout << "숫자를 몇개 입력하시겠습니까?" << endl;
	cin >> length;

	cout << "숫자를 " << length << "개 입력해주세요." << endl;
	for (int i = 0; i < length; i++) {
		cin >> arr[i];
	}

	int addResult = add(arr, length);
	double avrResult = average(addResult, length);
	cout << "합 : " << addResult << endl;
	cout << "평균 : " << avrResult << endl;

	return 0;
}