#include <iostream>

using namespace std;

void BubbleSort(int arr[], int n) {
	bool swapped = false;
	for(int i = 0; i < n - 1; ++i) {
		swapped = false;
		for(int j = 0; j < n - i - 1; ++j) {
			if(arr[j+1] < arr[j]) {
				swap(arr[j], arr[j+1]);	
				swapped = true;
			}
		}
		if(swapped == false) break;
	}	
}

int main() {
	int arr[] = {33, -2, 44, 0, 2, 8, 1000, 44, -20, 55, 21, 100};	
	int n = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, n);
	for(int m = 0; m < n; ++m) {
		cout << arr[m] << " ";	
	}
	cout << endl;
	return 0;
}
