#include<iostream>
#include<vector>
using namespace std;
void FindTriplets(vector<int>&arr){
    bool found=false;
    int n=arr.size();
    for(int k=2;k<n;k++){
        int i=0;
        int j=k-1;    
        while(i<j){
            int sum=arr[i]+arr[j];
            if(sum==arr[k]){
                cout<<i<<" "<<j<<" "<<k<<endl;
                found=true;
                break;
            }
            else if(sum<arr[k]){
                i++;
            }
            else{
                j--;
            }
        }
    }
    if(!found){
       cout<<"No Sequence found"<<endl;
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
        FindTriplets(arr);
    }
    return 0;
}