//adjacency matrix

const int N = 1e3+10;
int graph[N][N];

int n,m;
cin >> n >> m;
for (int i = 0; i < m; ++i) {
  int v1, v2; cin >> v1 >> v2;
  graph[v1][v2] = 1; graph[v2][v1] = 1;
}
for (int i = 0; i < n+1; ++i) {
  for (int j = 0; j < n+1; ++j) {
    cout << graph[i][j] << " ";
  }cout << endl;
}

//adjacency list

const int N = 1e3+10;
vector<int> g[N];

int n,m;
cin >> n >> m;
for (int i = 0; i < m; ++i) {
  int v1, v2; cin >> v1 >> v2;
  g[v1].push_back(v2); g[v2].push_back(v1);
}
for (int i = 1; i <= n; ++i) {
  cout << i << "-->";
  for (int x : g[i]) {
    cout << x << " ";
  }
  cout << endl;
}
