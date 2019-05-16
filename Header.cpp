#include "Header.h" 
void dijkstra(l_adiac a[DIM_MAX], int start, int n, unsigned int dist[DIM_MAX])
{
	unsigned int uimax = std::numeric_limits<unsigned int>::max();
	dist[DIM_MAX] = { uimax };
	bool vis[DIM_MAX] = { 0 };
	c_prio pq; 
	pq.push(make_pair(start, dist[start] = 0));
		while (!pq.empty())
		{
			pair<int, int> u = pq.top();
			pq.pop();
			int cv = u.first, cw = u.second;
			if (vis[cv]) 
				continue;
			vis[cv] = true;
			for (int i = 0; i < a[cv].size(); i++)
				if (!vis[a[cv][i].first] && a[cv][i].second + cw < dist[a[cv][i].first])
					pq.push(make_pair(a[cv][i].first, (dist[a[cv][i].first] = a[cv][i].second + cw)));
		}
}
