#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key,int&comp){
    int low=0;
    int high=n-1;
    while(low<=high){
        comp++;
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int comp=0;
        int key;
        cin>>key;
        int res=binarySearch(arr,n,key,comp);
        if(res!=-1){
            cout<<"Present "<<comp<<endl;
        }
        else{
            cout<<"Not Present "<<comp<<endl;
        }
    }
    return 0;
}