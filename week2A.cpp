#include<iostream>
using namespace std;
int firstOccur(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int first=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return first;
}
int lastOccur(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int last=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return last;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int key;
        cin>>key;
        int first=firstOccur(arr,n,key);
        if(first==-1){
            cout<<"Key not present"<<endl;
        }
        else{
            int last=lastOccur(arr,n,key);
            int count=last-first+1;
            cout<<key<<"-"<<count<<endl;
        }
    }
    return 0;
}