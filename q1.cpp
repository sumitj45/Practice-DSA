#include<bits/stdc++.h>
using namespace std;
// print alll the subsequence of an array

void solve(int idx, vector<int>ans,int arr[],int n){
    //base case
    if(idx==n){
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    //recursive call
    // pick or take 
    ans.push_back(arr[idx]);

    solve(idx+1,ans,arr,n);
    ans.pop_back();
    solve(idx+1,ans,arr,n);



}

int main()
{ 
    int arr []={2,3,6};
    int n=3;
   
    vector<int>ans;
     solve(0,ans,arr,n);
    return 0;
}

