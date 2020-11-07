#include <bits/stdc++.h>
using namespace std;
#define ord_desc(a) sort(a,a+n,greater<int>())
#define ord_asc(a) sort(a,a+n)
#define setCero(arr) memset(arr,0,sizeof(arr));
#define f_plus(i,n) for(i=0;i<n;++i)
#define gcd(i,j) __gcd(i,j)
#define sw(a,b) {a^=b; b^=a; a^=b;}
#define sum_of_elems(vector) accumulate(vector.begin(), vector.end(), 0)
#define fastio cin.sync_with_stdio(false); cin.tie(0)
#define oo (1L<<60)
#define INF 1000000000
#define get_unique(res) res.erase(std::unique(res.begin(), res.end()), res.end())
#define add(a, b, w) G[a].pb(make_pair(w, b))
#define MAX_V 250001
#define ll long long int
const double PI = 3.141592653589793238463;
//typedef pair<int,int> ii;
//typedef vector<ii> vii;
//typedef vector<int> vi;
// index = (index + 1) % n; // index++; if (index >= n) index = 0;
// index = (index + n - 1) % n; // index--; if (index < 0) index = n - 1;
// int ans = (int)((double)d + 0.5); // for rounding to nearest integer
// ans = min(ans, new_computation); // min/max shortcut
// alternative form but not used in this book: ans <?= new_computation;
// some code use short circuit && (AND) and || (OR)
/*-------------------MACROS-------------------*/
