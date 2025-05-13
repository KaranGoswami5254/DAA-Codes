#include<iostream>
#include<vector>
using namespace std;
bool dfs(int start,vector<vector<int>>&adjMatrix,vector<bool>&visited,vector<bool>&recStack){
   visited[start]=true;
   recStack[start]=true;
   for(int i=0;i<adjMatrix.size();i++){
     if(adjMatrix[start][i]){
        if(!visited[i]&&dfs(i,adjMatrix,visited,recStack)){
            return true;
        }
        else if(recStack[i]){
            return true;
        }
     }
   }
   recStack[start]=false;
   return false;
}
bool isCycle(vector<vector<int>>&adjMatrix){
   int n=adjMatrix.size();
   vector<bool>visited(n,false);
   vector<bool>recStack(n,false);
   for(int i=0;i<n;i++){
    if(!visited[i]){
        if(dfs(i,adjMatrix,visited,recStack)){
            return true;
        }
    }
   }
   return false;
}
int main(){
    int V;
    cin>>V;
    vector<vector<int>>adjMatrix(V,vector<int>(V));
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
           cin>>adjMatrix[i][j];
        }
    }
    if(isCycle(adjMatrix)){
        cout<<"Yes Cycle Exists"<<endl;
    }
    else{
        cout<<"No Cycle Exists"<<endl;
    }
}