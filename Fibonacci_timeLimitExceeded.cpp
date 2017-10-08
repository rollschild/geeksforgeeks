#include <iostream>
#include <vector>
using namespace std;

int plusIndex(vector<int> array, int index) {
    if(index > 1)
        return plusIndex(array, index-1) + plusIndex(array, index - 2);

    else if(index == 1) return 1;
    else return 0;
}

int main() {
	//code
	int n = 0;
	int index = 0;
	cin >> n;
	vector<int> array;
	// vector<int> result;
	array.push_back(0);
	// array.push_back(1);
	for(int i = 0; i < n; ++i) {
	    cin >> index;
	    array.push_back(plusIndex(array, index));
	    cout << plusIndex(array, index) % 1000000007 << endl;
	}
	return 0;
}
