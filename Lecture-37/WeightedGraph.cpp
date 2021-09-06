// WeightedGraph.cpp
#include <iostream>
#include <unordered_map>
#include <list>
#include <set>
using namespace std;

class Graph {
public:
	unordered_map<string, list<pair<string, int> > > h;
	void addEdge(string u, string v, int d, bool bidir = true) {
		h[u].push_back({v, d});
		if (bidir) {
			h[v].push_back({u, d});
		}
	}

	void print() {
		for (auto node : h) {
			cout << node.first << "--> ";
			for (auto neighbour : node.second) {
				cout << "(" << neighbour.first << ", " << neighbour.second << ") ";
			}
			cout << endl;
		}
	}

	void SSSP(string src) {
		unordered_map<string, int> dist;
		for (auto node : h) {
			dist[node.first] = INT_MAX;
		}
		set<pair<int, string> > s;
		dist[src] = 0;
		s.insert({0, src});

		while (!s.empty()) {
			auto p = *(s.begin());
			int parent_dist = p.first;
			string parent = p.second;

			s.erase(s.begin()); // Delete the node at front

			// Iterate over the kids of the parent
			for (auto node : h[parent]) {
				string bacha = node.first;
				int bp_dist = node.second; // bache aur parent ke beech mei dist

				auto address = s.find({dist[bacha], bacha});
				if (address != s.end()) {
					int bacheKaCurrentDist = dist[bacha];
					if (bacheKaCurrentDist > parent_dist + bp_dist) {
						auto f = s.find({bacheKaCurrentDist, bacha});
						if (f != s.end()) {
							s.erase(f);
						}
						dist[bacha] = parent_dist + bp_dist;
						s.insert({parent_dist + bp_dist, bacha});
					}
				}
				else if (dist[bacha] == INT_MAX) {
					dist[bacha] = parent_dist + bp_dist;
					s.insert({parent_dist + bp_dist, bacha});
				}
			}
		}

		for (auto node : dist) {
			cout << "Distance of " << node.first << " from " << src << ": " << node.second << endl;
		}
	}

};

int main() {

	Graph g;

	g.addEdge("Amritsar", "Agra", 1);
	g.addEdge("Amritsar", "Jaipur", 4);
	g.addEdge("Jaipur", "Delhi", 2);
	g.addEdge("Agra", "Delhi", 1);
	g.addEdge("Agra", "Bhopal", 2);
	g.addEdge("Mumbai", "Bhopal", 3);
	g.addEdge("Mumbai", "Jaipur", 8);

	g.print();
	g.SSSP("Amritsar");




	return 0;
}
















