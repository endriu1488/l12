#include "Header.h"


int main() {
	
	l_adiac a [DIM_MAX];
	unsigned int dist[DIM_MAX];
	bool prev[DIM_MAX];
	unsigned int uimax = std::numeric_limits<unsigned int>::max();
	int n, m, x, y, w;

	cout << "Numar noduri: ";
	cin >> n;
	cout << "Numar muchii: ";
	cin >> m;
	for (int i = 0; i < m; i++) 
	{
		cout << "x: ";
		cin >> x;
		cout << "y: ";
		cin >> y;
		cout << "cost: ";
		cin >> w;
		a[x].push_back(make_pair(y, w));
		a[y].push_back(make_pair(x, w));
	}
	cout<<"Nod start: ";
	int start;
	cin >> start;

	dijkstra(a,start,n,dist,prev);

	cout << "Nodul de start este " << start << ". Distantele minime sunt: \n";
	for (int i = 1; i <= n; i++)
	{
		cout << "Nod: " << i << "  Distanta: ";
		dist[i] != uimax ? cout << dist[i] << "\n" : cout << " ∞ \n";
	}
	/*  5 5
		1 2 3
		2 5 5
		1 5 4
		1 3 2
		3 4 3*/
	system("pause");
	return 0;
}
