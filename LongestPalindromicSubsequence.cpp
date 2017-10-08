#include <iostream>
#include <vector>
using namespace std;

int compare(string s) {
        int count1 = 0;
	    int count2 = 0;
	    int k = s.length() - 1;
	    for(auto j = 0; j <= k; ++j) {
	        // auto k = s.length() - j - 1; 
	        while(j <= k) {
	            if(j == k) {
	                ++count1;
	                ++j;
	                continue;
	            }
	            if(s[j] == s[k]) {
	                count1 += 2;
	                ++j;
	                --k;
	            }
	            else {
	                --k;
	            }
	        }
	    }
	    k = 0;
	    for(auto j = s.length() - 1; j >= k; --j) {
	        // auto k = s.length() - j - 1; 
	        while(j >= k) {
	            if(j == k) {
	                ++count2;
	                --j;
	                continue;
	            }
	            if(s[j] == s[k]) {
	                count2 += 2;
	                --j;
	                ++k;
	            }
	            else {
	                ++k;
	            }
	        }
	    }
	    return count1 > count2 ? count1: count2;
}

int main() {
	//code
	int n = 0;
	vector<string> ss;
	string s;
	cin >> n;
	for(auto i = 0; i < n; ++i) {
	    cin >> s;
	    ss.push_back(s);
	}
	for(auto i = 0; i < n; ++i) {
	    s = ss[i];
	    cout << compare(s) << endl;
	    
	}
	return 0;
}
