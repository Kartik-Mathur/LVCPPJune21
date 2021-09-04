// GenericGraph.cpp
#include <iostream>
#include <unordered_map>
#include <map>
#include <queue>
#include <list>
using namespace std;

template<typename T>
class Graph {
public:
	unordered_map<T, list<T> > l;

	void addEdge(T u, T v, bool bidir = true) {
		l[u].push_back(v);
		if (bidir) {
			l[v].push_back(u);
		}
	}

	void print() {
		for (auto node : l) {
			cout << node.first << "--> ";
			for (auto neighbour : node.second) {
				cout << neighbour << " ";
			}
			cout << endl;
		}
	}

	void bfs(T src) {
		unordered_map<T, bool> visited;
		queue<T> q;
		q.push(src);
		visited[src] = true;

		while (!q.empty()) {
			auto node = q.front();
			q.pop();
			cout << node << " ";
			for (auto neighbour : l[node]) {
				if (!visited[neighbour]) {
					q.push(neighbour);
					visited[neighbour] = true;
				}
			}
		}
		cout << endl;
	}

	int SSSP(T src, T des) {
		unordered_map<T, bool> visited;
		unordered_map<T, T> parent;
		unordered_map<T, int> dist;
		queue<T> q;
		q.push(src);
		visited[src] = true;
		dist[src] = 0;
		parent[src] = src;

		while (!q.empty()) {
			auto node = q.front();
			q.pop();
			for (auto neighbour : l[node]) {
				if (!visited[neighbour]) {
					q.push(neighbour);
					visited[neighbour] = true;
					parent[neighbour] = node;
					dist[neighbour] = dist[node] + 1;
				}
			}
		}

		// for (auto node : dist) {
		// 	cout << "Distance of " << node.first << " from " << src << ": " << node.second << endl;
		// }
		T des_1 = des;
		while (des != src) {
			cout << des << "<--";
			des = parent[des];
		}
		cout << src << endl;
		return dist[des_1];
	}
};

int main() {
	Graph<int> g;

	g.addEdge(1, 0);
	g.addEdge(1, 2);
	g.addEdge(4, 2);
	g.addEdge(4, 5);
	g.addEdge(3, 0);
	g.addEdge(3, 2);
	g.addEdge(3, 4);

	// g.addEdge("Modi", "Trump", true);
	// g.addEdge("Modi", "Yogi", true);
	// g.addEdge("Yogi", "Prabhu", false);
	// g.addEdge("Prabhu", "Modi", false);
	// g.addEdge("Putin", "Modi", false);
	// g.addEdge("Putin", "Trump", false);
	// g.addEdge("Putin", "Pope", false);

	// g.print();
	g.bfs(0);
	cout << g.SSSP(0, 5) << endl;
	// g.SSSP(0, 5);
	return 0;
}
















