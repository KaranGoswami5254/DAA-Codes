#include<iostream>
#include<cmath>
using namespace std;
int jumpSearch(int arr[],int n,int key,int&comp){
    int step=sqrt(n);
    int prev=0;
    while(arr[min(step,n)-1]<key){
        comp++;
        prev=step;
        step+=sqrt(n);
        if(prev>=n){
            return -1;
        }
    }

        //linear search part
        for(int i=prev;i<min(step,n);i++){
            comp++;
            if(arr[i]==key){
                return i;
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
        int res=jumpSearch(arr,n,key,comp);
        if(res!=-1){
            cout<<"Present "<<comp<<endl;
        }
        else{
            cout<<"Not Present "<<comp<<endl;
        }
    }
}