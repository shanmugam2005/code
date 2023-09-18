#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define v 5
int selectminvertex(vector<int>& dis,vector<bool>& mstset){

    int minimum=INT_MAX;
    int vertex;
    for(int i=0;i<v;i++){
        if(mstset[i]==false && dis[i]<minimum){
            minimum=dis[i];
            vertex=i;
        }
    }
    return vertex;
}



void findmst(int graph[v][v]){

  int parent[v];
  vector<int> dis(v,INT_MAX);
  vector<bool> mstset(v,false);
  dis[0]=0;
  parent[0]=-1;
   for(int i=0;i<v-1;i++){

     int u=selectminvertex(dis,mstset);
     mstset[u]=true;
     //cout<<u<<" ";
     for(int j=0;j<v;j++){

          if(graph[u][j]!=0 && mstset[j]==false && graph[u][j]<dis[j]){
              dis[j]=graph[u][j];
              parent[j]=u;
          }
     }
   }
   for(int i=1;i<v;i++){
    cout<<graph[i][parent[i]];
   }


}



using namespace std;
int main(){

      	int graph[v][v] = { { 0, 2, 0, 6, 0 },
						{ 2, 0, 3, 8, 5 },
						{ 0, 3, 0, 0, 7 },
						{ 6, 8, 0, 0, 9 },
						{ 0, 5, 7, 9, 0 } };
						findmst(graph);


}
