#include<bits/stdc++.h>
using namespace std;

/**
 * @brief 
 * 
 * @param num 
 * @return true 
 * @return false 
 */
bool isPerfectSquare(int num) {
    int low=0, high=num;
    long long int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        long long int square=mid*mid;
        if(square==num) return true;
        else if(square>num) high=mid-1;
        else low=mid+1;
    }
    return false;
}

void solution(){
    int n;
    cin>>n;
    bool toReturn=isPerfectSquare(n);
    cout<<toReturn<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t-->0){
        solution();
    }
}

/*
3
4
16
8
*/