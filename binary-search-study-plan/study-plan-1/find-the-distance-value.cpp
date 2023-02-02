#include<bits/stdc++.h>
using namespace std;

/**
 * @brief Given two integer arrays arr1 and arr2, and the integer d, return the distance value between the two arrays.
 * The distance value is defined as the number of elements arr1[i] such that there is not any element arr2[j] where |arr1[i]-arr2[j]| <= d
 * 
 * @param arr1 
 * @param arr2 
 * @param d 
 * @return int 
 */
int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d){
    int i,j,c=0;
    for(i=0;i<arr1.size();i++){
        for(j=0;j<arr2.size();j++){
            if(abs(arr1[i]-arr2[j])<=d){
                c++;
                break;
            }
        }
    }
    return arr1.size()-c;
}

void solution(){
    int i,n,m,d;
    cin>>n>>m>>d;
    vector<int> arr1(n), arr2(m);
    for(i=0;i<n;i++)cin>>arr1[i];
    for(i=0;i<m;i++)cin>>arr2[i];
    int toReturn=findTheDistanceValue(arr1, arr2, d);

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
3 4 2
4 5 8
10 9 1 8
4 6 3
1 4 2 3
-4 -3 6 10 20 30
4 5 6
2 1 100 3
-5 -2 10 -3 7

*/