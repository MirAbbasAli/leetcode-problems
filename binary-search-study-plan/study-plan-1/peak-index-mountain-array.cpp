#include<bits/stdc++.h>
using namespace std;
/**
 * @brief https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
 * return the index i of the mountain array arr
 * 
 * @param arr 
 * @return int 
 */
int peakIndexInMountainArray(vector<int>& arr){
    int right=arr.size()-1, left=0, mid;
    while(left<=right){
        mid=left+(right-left)/2;
        if(mid-1>=0 && arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]) return mid;
        else if(arr[mid+1]>arr[mid])left=mid+1;
        else right=mid-1;
    }
    return -1;

}

void solution(){
    int n, i;
    cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++)cin>>arr[i];
    int toReturn=peakIndexInMountainArray(arr);
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
3
0 1 0
4
0 2 1 0
4
0 10 5 2
*/