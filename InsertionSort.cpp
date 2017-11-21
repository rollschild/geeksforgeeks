#include <iostream>

using namespace std;

void InsertionSort(int arr[], int n) {
	for(int i = 1; i < n; ++i) {
		int j = i -1;
		int key = arr[i];
		// insert like you playing poker
		while(j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j]; // shift to the right
			--j;
		}
		arr[++j] = key;
	}
}

int main() {
	int arr[] = {100, -100, 44, 99, 4, 6, 20, -4, 99, 5, 61, 24};
	int n = sizeof(arr) / sizeof(arr[0]);
	for(int p = 0; p < n; ++p) {
		cout << arr[p] << " ";	
	}
	cout << endl;
	InsertionSort(arr, n);
	for(int m = 0; m < n; ++m) {
		cout << arr[m] << " ";	
	}
	cout << endl;
	return 0;
}
