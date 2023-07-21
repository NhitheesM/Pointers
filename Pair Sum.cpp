#include <bits/stdc++.h> 
//unordered set method
int pairSum(vector<int> &arr, int n, int target){
	int count=0;
	int complement;
	unordered_set<int> comp;
	for(int i=0;i<n;i++){
		complement=target-arr[i];
		if(comp.find(complement)!=comp.end()){
			count++;
			comp.erase(complement);
		}
		else{
			comp.insert(arr[i]);
		}
	}
	if(count==0){
		return -1;
	}
	return count;
}

//2pointer method

int pairSum(vector<int> &arr, int n, int target){
	int count=0;
	int left=0;
	int right=n-1;
	int sum;

	while(left<right){
		sum=arr[left]+arr[right];
		if(sum==target){
			count++;
			left++;
			right--;
			while (left < right && arr[left] == arr[left - 1])
            	left++;
        	while (left < right && arr[right] == arr[right + 1])
            	right--;
		}

		else if (sum<target){
			left++;
        } else 
		{
        	right--;
        }
    }
    if(count==0){
		return -1;
	}
    return count;
}