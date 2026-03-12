#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSubarrays(vector<int>&nums,int bound){
        int count=0;
        int current=0;
        for(int n:nums){
            if(n<=bound){
                current++;
            }
            else{
                current=0;
            }
            count+=current;
        }
        return count;
    }
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return countSubarrays(nums,right)-countSubarrays(nums,left-1);
    }
};