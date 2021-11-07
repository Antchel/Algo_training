#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <bitset>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
	string multiply(string num1, string num2) {
		if (num1 == "0" || num2 == "0") return 0;
		int sz1(num1.length()), sz2(num2.length()), sz(sz1 + sz2);
		vector<int> val(sz, 0);
		string res(sz, '0');
		for (int i = 0; i < sz1; i++) {
			for (int j = 0; j < sz2; j++) {
				val[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
			}
		}
		for (int i = sz - 1; i >= 0; i--) {
			if (val[i] > 9) {
				val[i - 1] += val[i] / 10;
				val[i] %= 10;
			}
			res[i] = val[i] + '0';
		}
		if (res[0] == '0') res.erase(res.begin());
		return res;
	}
};



int main() {
	
	string str1("101");
	string str2("657");
	Solution sol;
	sol.multiply(str1, str2);
	return 0;
}