// https://leetcode.com/problems/binary-search/?envType=study-plan&id=binary-search-i
#include<bits/stdc++.h>
using namespace std;
/*
2
6 9
-1 0 3 5 9 12
6 2
-1 0 3 5 9 12

*/

int search(vector<int>& nums, int target){
    int high=nums.size()-1, low=0, mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(nums[mid]==target) return mid;
        else if(target>nums[mid]) low=mid+1;
        else high=mid-1;
    }
    return -1;
}

void solution(){
    int n, target;
    cin>>n>>target;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    int toReturn=search(nums, target);
    cout<<toReturn<<"\n";
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        solution();
    }
}