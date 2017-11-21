#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void CountingSort(vector<int>& vec, int base, int n) {
	vector<int> output(n);
	vector<int> count(10);
	for(int i = 0; i < n; ++i) {
		count[(vec[i]/base) % 10]++;	
	}
	for(int j = 1; j < 10; ++j) {
		count[j] += count[j - 1];	
	}
	for(int k = n - 1; k >= 0; --k) {
		output[count[(vec[k]/base) % 10] - 1] = vec[k];
		count[(vec[k]/base) % 10]--;
	}
	vec = output;
	// return vec;
}

void RadixSort(vector<int>& vec, int n) {
	vector<int>::iterator maxv = max_element(vec.begin(), vec.end());
	int maxValue = *maxv;
	for(int base = 1; maxValue/base > 0; ++base) {
		CountingSort(vec, base, n);
	}
}

int main() {
	int n;
	vector<int> vec;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}
	RadixSort(vec, n);
	for(int j = 0; j < n; ++j) {
		cout << vec[j] << " ";	
	}
	cout << endl;
	return 0;
}


