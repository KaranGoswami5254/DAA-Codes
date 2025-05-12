#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void findTriplets(vector<int>&arr,int target){
    sort(arr.begin(),arr.end());
    int left=0;
    int right=arr.size()-1;
    while(left<right){
       int sum=arr[left]+arr[right];
       if(sum==target){
        cout<<arr[left]<<" "<<arr[right]<<endl;
        return;
       }
       else if(sum<target){
        left++;
       }
       else{
        right--;
       }
    }
    cout<<"No Such Element Exist"<<endl;
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
        findTriplets(arr,target);
    }
}