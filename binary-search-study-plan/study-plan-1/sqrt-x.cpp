#include<bits/stdc++.h>
using namespace std;
const long long int MOD=10e9+7;
#define deb(x) cout<<#x<<"="<<x<<endl;
/**
 * @brief Given a non-negative integer x, return the square root of x rounded down to the nearest integer.
 * The returned integer should be non-negative as well.
 * 
 * @param x 
 * @return int 
 */
int mySqrt(int x){
    long long int low=0, high=x, mid;
    int ans;
    long long int sqr;
    while(low<=high){
        mid=low+(high-low)/2;
        sqr=mid*mid;
        if(x==sqr){
            ans=mid;
            break;
        }
        else if(sqr<x){
            low=mid+1;
            ans=mid;
        }else  high=mid-1;

    }
    return ans;

}

/**
 * @brief If start at x, the root candidate will decrease monotonically and never get too small.
 * 
 * @param x 
 * @return int 
 */
int newtonSolution(int x){
    long long r = x;
    while (r*r > x)
        r = (r + x/r) / 2;
    return r;
}
void solution(){
    int x;
    cin>>x;
    int toReturn=newtonSolution(x);
    cout<<"Output: "<<toReturn<<"\n";
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
8
2147395599
*/