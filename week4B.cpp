//Quick sort
#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr,int low,int high,int&comp,int&shift){
    int pi=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        comp++;
        if(arr[j]<pi){
            i++;
            swap(arr[i],arr[j]);
            shift++;
        }
    }
    swap(arr[i+1],arr[high]);
    shift++;
    return i+1;
}
void quickSort(vector<int>&arr,int low,int high,int &comp,int &shift){
    if(low<high){
        int pi=partition(arr,low,high,comp,shift);
        quickSort(arr,low,pi-1,comp,shift);
        quickSort(arr,pi+1,high,comp,shift);
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
        int comp=0;
        int shift=0;
        int low=0,high=n-1;
        quickSort(arr,0,n-1,comp,shift);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Comparisons= "<<comp<<endl;
        cout<<"Swaps= "<<shift<<endl;
    }
}