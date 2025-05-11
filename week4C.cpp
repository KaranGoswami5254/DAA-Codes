#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int partition(vector<int>&arr,int low,int high){
    int pi=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pi){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
int QuickSelect(vector<int>&arr,int low,int high,int k){
    if(low<=high){
        int pi=partition(arr,low,high);
        if(pi==k){
            return arr[pi];
        }
        else if(pi<k){
            QuickSelect(arr,pi+1,high,k);
        }
        else{
            QuickSelect(arr,low,pi-1,k);
        }
    }
    return -1;
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
        int k;
        cin>>k;
        if(k<1||k>n){
            cout<<"Not Present"<<endl;
        }
        else{
            cout<<QuickSelect(arr,0,n-1,k)<<endl;
        }
    } 
}