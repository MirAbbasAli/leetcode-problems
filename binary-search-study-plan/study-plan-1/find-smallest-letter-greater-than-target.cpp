#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<"="<<x<<endl

/**
 * @brief Return the smallest character in letters that is lexicographically greater than target.
 * If such a character does not exist, return the first character in letters.
 * 
 * @param letters 
 * @param target 
 * @return char 
 */
char nextGreatestLetter(vector<char>& letters, char target){
    int low=0, high=letters.size()-1, mid;
    char ans=letters[0];
    while(low<=high){
        mid=low+(high-low)/2;
        if(letters[mid]>target){
            ans=letters[mid];
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}

void solution(){
    int i,n;
    char target;
    cin>>n;
    cin>>target;
    vector<char> letters(n);
    for(i=0;i<n;i++)cin>>letters[i];
    char toReturn=nextGreatestLetter(letters, target);
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
3 a
c f j
3 c
c f j
4 z
x x y y
*/