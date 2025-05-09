#include<iostream>
using namespace std;
void insertionSort(int arr[],int n,int&count,int&shift){
    for(int i=1;i<n;i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0&&arr[j]>key){
        count++;
        arr[j+1]=arr[j];
        j=j-1;//for more comparisons in the left
        shift++;
    }
    arr[j+1]=key;
    shift++;
    }
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
        int count=0;
        int shift=0;
        insertionSort(arr,n,count,shift);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Comparisons="<<count<<endl;
        cout<<"Shifts="<<shift<<endl;
    }
}