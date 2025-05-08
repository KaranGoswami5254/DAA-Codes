//Two pointer approach
#include<iostream>
#include<vector>
using namespace std;
void FindDiffrence(vector<int>&arr,int target){

for(int i=2;i<arr.size()-1;i++){
    int left=0;
    int right=left+1;
    while(left<right){
        int diff=abs(arr[left]-arr[right]);
        if(diff==target){
            
        }
    }
}

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int target;
        cin>>target;
        FindDiffrence(arr,target);
    }
}