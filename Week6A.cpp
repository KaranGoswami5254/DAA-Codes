#include<iostream>
#include<vector>
using namespace std;
bool dfs(int src,int dest,vector<vector<int>>&adjMatrix,vector<bool>&visited,int V){
    if(src==dest){
        return true;
    }
    visited[src]=true;
    for(int i=0;i<V;i++){
        if(adjMatrix[src][i]==1&&!visited[i]){
            if(dfs(i,dest,adjMatrix,visited,V)){
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
    int src,dest;
    cin>>src>>dest;
    src--;
    dest--;
    vector<bool>visited(V,false);
    if(dfs(src,dest,adjMatrix,visited,V)){
        cout<<"Yes Path Exists"<<endl;
    }
    else{
        cout<<"No such Path Exists"<<endl;
    }
}