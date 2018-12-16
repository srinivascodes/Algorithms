#include<bits/stdc++.h>
#define mod 1000000007
#define lng long long
#define inf 0x7fffffff
using namespace std;

const double PI = 3.141592;

bool is_directed_graph_cyclic(int numOfNodes, vector<pair<int, int> > &edges){
	vector<vector<int>> graph(numOfNodes);
	vector<int> in_degrees(numOfNodes, 0);

	for(int i=0; i<edges.size(); i++){
		graph[edges[i].first].push_back(edges[i].second);
		in_degrees[edges[i].second] += 1; 
	}
	queue<int> q;

	for(int i=0;i<numOfNodes;i++){
		if(in_degrees[i]==0)
			q.push(i);
	}
	int counter = 0;
	while(!q.empty()){
		int node = q.front();
		q.pop();
		counter++;
		for(int i=0; i<graph[node].size(); i++){
			int curr_node = graph[node][i];
			in_degrees[curr_node]--;
			if(in_degrees[curr_node]==0){
				q.push(curr_node);
			}
		}
	}

	return (counter == numOfNodes);
}

int main()
{
	vector<pair<int, int> > edges;
	edges.push(make_pair(0, 1));
	edges.push(make_pair(1, 0));
	cout << is_directed_graph_cyclic(edges);
	return 0;
}