#include<iostream>
using namespace std;
void selectionsort(int arr[],int n,int &count,int &shift){
for(int i=0;i<n-1;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
        count++;
        if(arr[j]<arr[min]){
            min=j;
        }
    }
    if(min!=i){
        swap(arr[i],arr[min]);
        shift++;
    }
    
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
        selectionsort(arr,n,count,shift);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Comparisons= "<<count<<endl;
        cout<<"Shifts= "<<shift<<endl;
    }
    return 0;
}