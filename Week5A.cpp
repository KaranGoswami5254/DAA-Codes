#include<iostream>
#include<vector>
using namespace std;
char maxOccurences(vector<char>&arr,int&maxCount){
    int freq[26]={0};
    for(char ch:arr){
        if(isalpha(ch)){
            freq[ch-'a']++;
        }
    }
    maxCount=0;
    char maxChar='a';
    for(int i=0;i<26;i++){
        if(freq[i]>maxCount){
            maxCount=freq[i];
            maxChar='a'+i;
        }
    }
    return maxChar;
}
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<char>arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int maxCount=0;
    char maxOccur=maxOccurences(arr,maxCount);
    if(maxCount<=1){
        cout<<"No Duplicates Present"<<endl;
    }
    else{
        cout<<maxOccur<<" "<<maxCount<<endl;
    }
   }
   return 0;
}