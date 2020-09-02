#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pi;
typedef map<int, int> mi;
typedef map<char, int> mc;
typedef set<int> si;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<ll> vll;
#define INF 1e9+5
#define MOD 1e9+7
#define N 100005
#define F first
#define S second
#define endl "\n"
#define comp(x) (x).begin(), (x).end()
#define dbg(x) cout << #x << " " << x << endl
#define mp(x,y) make_pair((x),(y))
#define pb(x) push_back((x))
#define fr(i,s,n) for(int (i) = (int)s; (i) < (int)(n); (i)++)
#define foreach(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define sci(x) scanf("%d",&(x))
#define scii(x,y) scanf("%d %d",&(x),&(y))
#define pri(x) printf("%d\n",(x))
#define prii(x,y) printf("%d %d\n",(x),(y))


void dbga(int a[], int n) {
	for (int i = 0; i < n; i++) {
		dbg(a[i]);
	}
}

void dfs(int s, vector<bool>& visited, vector<vi>& g) {
	if (visited[s]) {
		return;
	}
	visited[s] = true;
	for (auto u : g[s]) {
		dfs(u, visited, g);
	}
}

ll fpow(ll a, ll b) {
	ll res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a;
		a = a * a;
		b >>= 1;
	}
	return res;
}

ll fpowm(ll a, ll b, ll m) {
	a %= m;
	ll res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a % m;
		a = (a * a) % m;
		b >>= 1;
	}
	return res;
}


int a[N];


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		

	}
}
