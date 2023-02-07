#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<"="<<x<<endl

void printVector(vector<int> nums){
    int i, n=nums.size();
    for(i=0;i<n;i++)cout<<nums[i]<<" \n"[i==n-1];
}

vector<int> searchRange(vector<int>& nums, int target){
    int low=lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    int high=upper_bound(nums.begin(), nums.end(), target) - nums.begin()-1;

    if(low<=high)
        return {low, high};
    else
        return {-1, -1};
}

void solution(){
    int n, i, target;
    cin>>n>>target;
    vector<int> nums(n);
    for(i=0;i<n;i++)cin>>nums[i];
    vector<int> toReturn=searchRange(nums, target);
    cout<<"Output:: ";
    printVector(toReturn);
}
int main(){
    int t;
    cin>>t;
    while(t-->0){
        solution();
    }
    return 0;
}
/*
4
6 8
5 7 7 8 8 10
6 6
5 7 7 8 8 10
0 0
1 1
1
*/