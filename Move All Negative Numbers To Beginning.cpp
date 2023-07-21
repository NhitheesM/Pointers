#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    int n=nums.size();
    vector<int> arr;

    for(int i=0;i<n;i++){
        if(nums[i]<0){
            arr.push_back(nums[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(nums[i]>=0){
            arr.push_back(nums[i]);
        }
    }
    return arr;
}