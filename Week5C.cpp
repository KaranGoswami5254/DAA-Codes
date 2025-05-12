    #include<iostream>
    #include<vector>
    using namespace std;
    void findCommonElements(vector<int>&arr1,int m,vector<int>&arr2,int n,vector<int>&common){
         m=arr1.size(),n=arr2.size();
        int i=0,j=0;
        while(i<m&&j<n){
            if(arr1[i]==arr2[j]){
            common.push_back(arr1[i]);
            i++;
            j++;
            }
            else if(arr1[i]<arr2[i]){
                i++;
            }
            else{
                j++;
            }
        }
        if(common.empty()){
            cout<<"No Common Elements";
        }
        else{
            for(int num:common){
                cout<<num<<" ";
            }
            cout<<endl;
        }
    }
    int main(){
    int m,n;
    cin>>m;
    vector<int>arr1(m);
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    cin>>n;
    vector<int>arr2(n);
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    vector<int>common;
    findCommonElements(arr1,m,arr2,n,common);
    }