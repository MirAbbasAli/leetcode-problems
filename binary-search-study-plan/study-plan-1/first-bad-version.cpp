#include<bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<"="<<x<<endl
int bad;
/**
 * @brief find out the first bad one, which causes all the following ones to be bad.
 * 
 * @param n 
 * @return true 
 * @return false 
 */
bool isBadVersion(int n){
    if(n>=bad)return true;
    else return false;
}

int firstBadVersion(int n){
    int low=1, high=n, mid;
    int ans;
    while(low<=high){
        mid=low+(high-low)/2;
        if(isBadVersion(mid)){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}

void solution(){
    int n;
    cin>>n>>bad;
    int toReturn=firstBadVersion(n);
    cout<<"Output: "<<toReturn<<"\n";
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
3
5 4
1 1
3 2
*/