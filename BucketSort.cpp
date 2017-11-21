#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void BucketSort(vector<float>& vec, int n) {
	vector<vector<float>> result(n);
	for(int i = 0; i < n; ++i) {
		int index = n * vec[i];
		result[index].push_back(vec[i]);
	}
	for(int j = 0; j < n; ++j) {
		sort(result[j].begin(), result[j].end());	
	}
	int newIndex = 0;
	for(int k = 0; k < n; ++k) {
		for(int l = 0; l < result[k].size(); ++l) {
			vec[newIndex++] = result[k][l];	
		}	
	}
}

int main() {
	int n;
	vector<float> vec;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		float f;
		cin >> f;
		vec.push_back(f);
	}
	BucketSort(vec, n);
	for(int j = 0; j < n; ++j) {
		cout << vec[j] << " ";	
	}
	cout << endl;
	return 0;
		
}
