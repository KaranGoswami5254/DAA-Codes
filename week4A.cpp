#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&arr,int low,int high,int mid,int &comp,int&inver){
    int i=low;
    int j=mid+1;
    vector<int>temp;
    while(i<=mid&&j<=high){
        comp++;
      if(arr[i]<=arr[j]){
        temp.push_back(arr[i]);
        i++;
      }
      else if(arr[i]>arr[j]){
        temp.push_back(arr[j]);
        j++;
        inver+=(mid-i+1);
      }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=high){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i=0;i<temp.size();i++){
        arr[low+i]=temp[i];
    }
}
void mergeSort(vector<int>&arr,int low,int high,int&comp,int&inver){
    int count=0;
    if(low<high){
        int mid=low+(high-low)/2;
        mergeSort(arr,low,mid,comp,inver);
        mergeSort(arr,mid+1,high,comp,inver);
        merge(arr,low,high,mid,comp,inver);
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
        int inver=0;
        int low=0,high=n-1;
        mergeSort(arr,0,n-1,comp,inver);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Comparisons= "<<comp<<endl;
        cout<<"Inversions= "<<inver<<endl;
    }
    return 0;
}