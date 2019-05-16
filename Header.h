#pragma once
#include <limits>
#include <iostream>
#include <iostream>
#include <queue>
#include <vector>
#include <limits>
#define DIM_MAX 20
using namespace std;
typedef vector<pair<int, int> > l_adiac;

struct prioritize {
	int operator()(pair<int, int>&p1, pair<int, int>&p2) {
		return p1.second > p2.second; }
};

typedef priority_queue<pair<int, int>, vector<pair<int, int> >, prioritize> c_prio;
void dijkstra(l_adiac a[DIM_MAX], int start, int n, unsigned int dist[DIM_MAX]);
