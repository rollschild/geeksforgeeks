// Complexity: 
// worst case O(n^2)
// best case o(nlogn)

#include <iostream>
#include <vector>

using namespace std;

int Partition(vector<int>& vec, int low, int high) {
	int index = low - 1;
	int pivot = vec[high];
	for(int k = low; k <= high - 1; ++k) {
		if(vec[k] <= pivot) {
			++index;
			swap(vec[index], vec[k]);
		}	
	}
	swap(vec[high], vec[index+1]);
	return index+1;
}

void QuickSort(vector<int>& vec, int low, int high) {
	if(low < high) {
		int p = Partition(vec, low, high);
		QuickSort(vec, low, p-1);
		QuickSort(vec, p+1, high);
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> vec;
	for(int i = 0; i < n; ++i) {
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}
	QuickSort(vec, 0, n-1);
	for(int j = 0; j < n; ++j) {
		cout << vec[j] << " ";	
	}
	cout << endl;
	return 0;
}
