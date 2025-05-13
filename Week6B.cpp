#include<iostream>
#include<vector>
#include<queue>
using namespace std;
bool isBipartite(vector<vector<int>>&adjMatrix,int V){
    vector<int>color(V,-1);
    queue<int>q;
    for(int i=0;i<V;i++){
        if(color[i]==-1){
            color[i]=0;
            q.push(i);
            while(!q.empty()){
                int start=q.front();
                q.pop();
                for(int i=0;i<V;i++){
                    if(adjMatrix[start][i]==1){
                        if(color[i]==-1){
                            color[i]=1-color[start];
                            q.push(i);
                        }
                    }
                    else if(color[i]==color[start]){
                        return false;
                    }
                }
            }
        }
    }
    return true;
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
    if(isBipartite(adjMatrix,V)){
        cout<<"Yes Bipartite"<<endl;
    }
    else{
        cout<<"Not Bipartite"<<endl;
    }
}