#include <iostream>
using namespace std;

void ascending(int a[], int length) {
	int temp;

	for (int b = 0; b <= length-1; b++) {
		for (int i = 0; i <= 3; i++) {
			if (a[i] > a[i + 1]) {
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
} 

void descending(int a[], int length) {

	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - i - 1; j++) {
			if (a[j] < a[j + 1]) {
				int b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}
}

int main() {
	int arr[5];
	int choose = 0;

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	cout << "원하시는 정렬을 선택해 주세요. 오름차순 : 1, 내림차순 : 2" << endl;
	cin >> choose;

	if (choose == 1) {
		ascending(arr, 5);
		for (int i = 0; i < 5; i++) {
			cout << arr[i];
		}
	}
	else if (choose == 2) {
		descending(arr, 5);
		for (int i = 0; i < 5; i++) {
			cout << arr[i];
		}
	}
	else {
		cout << "잘못 입력하셨습니다." << endl;
	}

	return 0;
}