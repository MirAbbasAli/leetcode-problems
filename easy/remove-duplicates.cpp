// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
#include<bits/stdc++.h>
using namespace std;
/*
2
3
1 1 2
10
0 0 1 1 1 2 2 3 3 4
*/

int removeDuplicates(vector<int>& nums) {
    int previous=nums[0], arraySize=nums.size(), count=0;
    for(int index=1;index<arraySize;index++){
        if(nums[index]!=previous){
            count++;
            previous=nums[index];
            nums[count]=nums[index];
        }
    }
    return count+1;
}
void printArray(vector<int>& nums){
    int n=nums.size();
    for(int i=0;i<nums.size();i++)
        cout<<nums[i]<<" \n"[i==n-1];
}
void solution(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int k=removeDuplicates(nums);
    printArray(nums);
    cout<<k<<"\n";

}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        solution();
        cout<<"Test Case "<<(i+1)<<": \n";
    }
    return 0;
}