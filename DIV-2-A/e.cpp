#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> graph[(int)1e5 + 100];
vector<int> visit((int)1e5 + 100, 0);

// void dfs(int position) {
// 	if (visit[position] == 1) {
// 		return;
// 	}
// 	cout << position << " ";
// 	visit[position] = 1;

// 	for (int i = 0; i < g[position].size(); i++) {
// 		dfs(g[position][i]);
// 	}

// }

int main() {

	int v = 0;
	int n, q;

	cin >> n;

	for (int i = 0; i < n; i++) {

		int x, y; cin >> x >> y;
		graph[x].push_back(y);
		graph[y].push_back(x);

	}

	for (int i = 0; i < n; i++) {
		for (auto q : graph[i]) {
			cout << q << " ";
		}
		cout << "\n";
	}

	return 0;

}


// int n;
// vector<vector<int>> adj;
// vector<bool> visited;
// vector<int> ans;

// void dfs(int v) {
// 	visited[v] = true;
// 	for (int u : adj[v]) {
// 		if (!visited[u])
// 			dfs(u);
// 	}
// 	ans.push_back(v);
// }

// void topological_sort() {
// 	visited.resize(n, false);
// 	ans.clear();
// 	for (int i = 0; i < n; ++i) {
// 		if (!visited[i])
// 			dfs(i);
// 	}
// 	reverse(ans.begin(), ans.end());
// }