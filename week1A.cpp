#include<iostream>
using namespace std;
void linearSearch(int arr[],int n,int key){
    int comp=0;
    for(int i=0;i<n;i++){
        comp++;
      if(arr[i]==key){
        cout<<"Present "<<comp<<endl;
        return;
      }
    }
    cout<<"Not Present "<<comp<<endl;
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
        linearSearch(arr,n,key);
    }
    return 0;
}