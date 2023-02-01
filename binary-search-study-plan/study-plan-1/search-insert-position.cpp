#include<bits/stdc++.h>
using namespace std;

/**
 * @brief Given a sorted array of distict integers and a target value, return the index if the target is found.
 * If not, return the index where it would be if it were inserted in order.
 * Question link: https://leetcode.com/problems/search-insert-position/?envType=study-plan&id=binary-search-i
 * @param nums 
 * @param target 
 * @return int 
 */
int searchInsert(vector<int>& nums, int target){
    // Returns an iterator pointing to the first element in the range [first,last) which has a value < target
    int lower=lower_bound(nums.begin(), nums.end(), target)-nums.begin();
    return lower;
}

void solution(){
    int i,n,target;
    cin>>n>>target;
    vector<int> nums(n);
    for(i=0;i<n;i++)cin>>nums[i];

    int toReturn=searchInsert(nums, target);
    cout<<toReturn<<"\n";

}
int main(){
    int t;
    cin>>t;
    while(t>0){
        solution();
        t--;
    }
    return 0;
}

/*
3
4 5
1 3 5 6
4 2
1 3 5 6
4 7
1 3 5 6
*/