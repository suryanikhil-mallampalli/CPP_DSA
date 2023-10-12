// given array, moving all 0's backwards
#include <bits/stdc++.h>
using namespace std;
void push_zeros_to_end(vector<int>& arr)
{
	int n= arr.size();
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			swap(arr[i],arr[count]);
			count++;
		}
	}
}
//TC-O(N) SC-O(1)

int main()
{
	vector<int> arr{1,9,8,4,0,0,2,7,0,6,0,9};

	push_zeros_to_end(arr);

	for(const auto& i : arr)
		cout << i << ' ';

		cout << "\n";

	return 0;
}
