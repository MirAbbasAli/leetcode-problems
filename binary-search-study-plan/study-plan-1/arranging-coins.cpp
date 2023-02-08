#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<"="<<x<<endl


/**
 * @brief Given the integer n, return the number of complete rows of the staircase we will build.
 * The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete
 * 
 * @param n 
 * @return int 
 */
int arrangeCoins(int n){
    long long int low=0,high=n, k, curr=0;
    while(low<=high){
        k=low+(high-low)/2;
        curr=k*(k+1)/2;
        if(curr==n) return (int)k;
        else if(n<curr){
            high=k-1;
        }
        else {
            low=k+1;
        }
    }
    return (int)high;
}

void solution(){
    int n;
    cin>>n;
    int toReturn=arrangeCoins(n);
    cout<<"Output:: "<<toReturn<<"\n";
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
5
5
8
1
2147483647
1000
*/
