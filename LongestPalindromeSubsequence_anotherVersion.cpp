#include <iostream>
#include <vector>
using namespace std;

int compare(string s) {
        int count1 = 0;
	    int count2 = 0;
	    int letterCount = 0;
	    int k = s.length() - 1;
	    for(int j = 0; j <= k; ++j) {
	        int temp = k;
	        // auto k = s.length() - j - 1; 
	        letterCount = 1;
	        while(j < k) {
	            if(s[j] == s[k]) {
	                ++letterCount;
	                count1 += 2;
	                // ++j;
	                --k;
	                break;
	            }
	            else {
	                --k;
	            }
	        }
	        if(j == k && count1 >= 2 && k == temp ) {
	            ++count1;
	            continue;
	        }
	        else if(j == k && count1 < 2 && k == temp){
	            k = temp;
	            continue;
	        }
	        else if (j == k && letterCount < 2 && k < temp){
	            k = temp;
	            continue;
	        }
	    }
	    
	    k = 0;
	    
	    for(int j = s.length() - 1; j >= k; --j) {
	        // auto k = s.length() - j - 1; 
	        int temp = k;
	        letterCount = 1;
	        while(j > k) {
	            if(s[j] == s[k]) {
	                ++letterCount;
	                count2 += 2;
	                //--j;
	                ++k;
	                break;
	            }
	            else {
	                ++k;
	            }
	        }
	        if(j == k && count2 >= 2 && k == temp) {
	            ++count1;
	            continue;
	        }
	        else if(j == k && count2 < 2 && k == temp){
	            k = temp;
	            continue;
	        }
	        else if (j == k && letterCount < 2 && k > temp){
	            k = temp;
	            continue;
	        }
	    }
	    
	    // return count2;
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
