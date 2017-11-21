#include <iostream>
#include <vector>
using namespace std;
// 注意 vector 要 pass by REFERENCE not VALUE!!!
void Heapify(vector<int>& arr, int n, int index) {
	int largest = index;
	int left = 2 * index + 1;
	int right = 2 * index + 2;
	if(arr[left] > arr[largest] && left < n) {
		largest = left;	
	}
	if(arr[right] > arr[largest] && right < n) {
		largest = right;
	}
	if(largest != index) {
		swap(arr[index], arr[largest]);
		Heapify(arr, n, largest);
	}

}

void HeapSort(vector<int>& arr, int n) {
	for(int i = n/2 - 1; i >= 0; --i) {
		Heapify(arr, n, i);	
	}
	for(int j = n - 1; j >=0 ; --j) {
		swap(arr[0], arr[j]);
		Heapify(arr, j, 0);
	}
}

int main() {
	int n = 0;
	vector<int> arr;
	cin >> n;
	
	for(int i = 0; i < n; ++i) {
		int temp = 0;
		cin >> temp;
		arr.push_back(temp);
	}
	
	// int arr[] = {100, -20, 33, 0, 9, 88, 61, 4, 1000, 555};
	// int n = sizeof(arr) / sizeof(arr[0]);
	HeapSort(arr, n);
	for(auto element : arr) {
		cout << element << " ";	
	}
	cout << endl;
}

