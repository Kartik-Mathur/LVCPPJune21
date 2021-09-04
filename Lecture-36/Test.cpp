bool edgeIsPresent(int u, int v) {
	// adjList[u]: neighbours of u
	for (auto neighbour : adjList[u]) {
		if (neighbour == v) {
			return true;
		}
	}
	return false;
}
};

int main() {

	Graph g(5);

	g.addEdge(0, 1);
	g.addEdge(0, 4);
	g.addEdge(1, 4);
	g.addEdge(4, 3);
	g.addEdge(3, 1);
	g.addEdge(2, 1);
	g.addEdge(2, 3);

	g.print();

	if (g.edgeIsPresent(2, 4)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}


	return 0;
}
