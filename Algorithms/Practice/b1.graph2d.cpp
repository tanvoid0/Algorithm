#include <bits/stdc++.h>
using namespace std;

void Print(int **graph, int v){
	int i, j;
      cout<<"\n\n"<<setw(6)<<"*";
    for(i = 0; i < v; i++)
       cout<<setw(3)<<"("<<i+1<<")";
       cout<<"\n\n";
    for(i = 0; i < v; i++) {
      cout<<setw(3)<<"("<<i+1<<")";
      for(j = 0; j < v; j++) {
         cout<<setw(4)<<graph[i][j];
      }
      cout<<"\n\n";
   }	
}

int main(){
	int v, e, e1, e2;
	cout << "Enter number of vertices: ";
	cin >> v;
	int **graph;
	graph = new int*[v];
	for(int i =0; i <v; i++){
		graph[i] = new int[v];
		for(int j=0; j<v; j++){
			graph[i][j] = 0;
		}
		
	}
	
	cout << "Number of Edges: ";
	cin >> e;
	for(int i=0; i<e; i++){
		cout << "Edge 1: ";
		cin >> e1;
		cout << "Edge 2: ";
		cin >> e2;
		
		graph[e1-1][e2-1] = 1;
		graph[e2-1][e1-1] = 1;
			
	}
	Print(graph, v);
	return 0;
}
