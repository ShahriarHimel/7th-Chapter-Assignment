//i hate _____
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/detail/standard_policies.hpp>

using namespace __gnu_pbds;
using namespace std;

#define int long long int
#define lll __int128_t
#define ld long double
#define pb push_back
#define ii pair<int,int>
#define endl "\n"
double pi = 2 * acos(0.0) ;

template<typename T>
ostream& operator<<(ostream &os, const vector<T> &v) {
    os << '{';
    for (const auto &x : v) os << " " << x;
        return os << '}';
}

typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;

int dp[25][25][25][25][4];

int solve(int l, int r, int u, int d, int f){
    if (l == r || u == d) return 1;
    int &res = dp[l][r][u][d][f];
    if (res != -1) return res;
    res = 0;
    if (d == 0) {
        for (int i = d; i <= u; i++) {
            res += solve(l+1, r, i, d,1);
        }
    } else if (d == 1) {
        for (int i = l; i <= r; i++) {
            res += solve(l, i, u-1, d, 2);
        }
    } else if (d == 2) {
        for (int i = u; i >= d; i--) {
            res += solve(l, r-1, u, i, 3);
        }
    } else {
        for (int i = r; i >= l; i--) {
            res += solve(i, r, u, d+1, 0);
        }
    }
    return res;
}

void promod(){
    int n, m;
    cin >> n >> m;
    // memset(dp, -1, sizeof dp);
    // for (int l = 0; l < n; l++) {}
    int ans = solve(0, m-1, n-1, 0, 0);
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int test_cases = 1;
    cin >> test_cases;

    memset(dp, -1, sizeof dp);

    for (int tc = 1 ; tc <= test_cases ; tc++){

        //cout << "Case " << tc << ": ";
        promod();
        //printf("Case %d: %.10lf\n",tc,ans);

    }

    return 0;
}
/*
    problems are the sign of life
*/

