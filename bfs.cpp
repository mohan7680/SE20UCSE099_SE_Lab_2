//MOHAN KUMAR CHENNUPATI
#include "bits/stdc++.h"
using namespace std;

const int N=1e5+2;
bool vis[N];

vector <int> adj[N]; 

int main(){
    
    for (int i=0; i<N; i++){
        vis[i]=0;
    }

    int n,m;
    printf("Enter the number of vertices and Edges:-");
    cin >> n >> m;
    printf("Enter the connections of vertices:-");
    int x, y;
    for (int i=0; i<m; i++){
        cin >> x >> y;

        adj[x].push_back(y);
        adj[x].push_back(x);
    }

    queue<int> q;
    q.push(1);
    vis[1]=true;
    printf("Breadth first search order is:-\n"); 
    while(!q.empty()){
        int node =q.front();

        q.pop();
        cout << node << endl;

        vector<int> :: iterator it;

        for (it=adj[node].begin(); it !=adj[node].end(); it++){
            if (!vis[*it]){
                vis[*it]=1;
                q.push(*it);
            }
        }  
    }

    printf("\n");
    
    return 0;
}
