// https://leetcode.com/problems/guess-number-higher-or-lower/description/
#include<bits/stdc++.h>
using namespace std;

int pick;

/*
3
10 6
1 1
2 1
*/

int guess(int num){
    if(num>pick) return -1;
    else if(num<pick) return 1;
    else return 0;
}

int guessNumber(int n){
    int low=1, mid, high=n;
    while(low<=high){
        mid=low+(high-low)/2;
        int p=guess(mid);
        if(p==0) return mid;
        else if(p==1) low=mid+1;
        else high=mid-1;
    }
    return 0;
}

void solution(){
    int n;
    cin>>n>>pick;
    int toReturn=guessNumber(n);
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