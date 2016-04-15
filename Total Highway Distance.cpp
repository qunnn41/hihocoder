//
// Created by wyq on 4/2/16.
//
#include <iostream>
#include <vector>
using namespace std;

int calculate_THD(vector<vector<int>>edge) {
    int n = (int)edge.size();
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                edge[i][j] = min(edge[i][j], edge[i][k] + edge[k][j]);
            }
        }
    }

    int res = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            res += edge[i][j];
        }
    }

    return res;
}

//int main() {
//    int N, M, u, v, k;
//    cin >> N >> M;
//    vector<vector<int>> edge(N, vector<int>(N, 2000));
//    for (int i = 0; i < N - 1; ++i) {
//        cin >> u >> v >> k;
//        edge[u - 1][v - 1] = k;
//        edge[v - 1][u - 1] = k;
//        edge[i][i] = 0;
//    }
//
//    edge[N - 1][N - 1] = 0;
//
//    string s;
//    for (int i = 0; i < M; ++i) {
//        cin >> s;
//        if (s == "QUERY") {
//            cout << calculate_THD(edge) << endl;
//        } else {
//            cin >> u >> v >> k;
//            edge[u - 1][v - 1] = k;
//            edge[v - 1][u - 1] = k;
//        }
//    }
//}

