#include <bits/stdc++.h> 
using namespace std;
int main(){
	int n; scanf("%d", &n); 
	for (int i = 0; i < n; ++i){
		int len; scanf("%d", &len); 
		vector<int> v;
		for (int i = 0; i < len; ++i){
			int x; scanf("%d", &x); 
			v.push_back(x); 
		}
		sort(v.begin(), v.end()); 
		int median = v[len/2]; 
		int devaition = 0 ; 
		for (int i = 0; i < len; ++i){
			devaition += abs(median-v[i]);
		}
		printf("%d\n", devaition);
	}return 0;
}