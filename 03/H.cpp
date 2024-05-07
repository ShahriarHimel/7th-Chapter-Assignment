//i hate _____
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/detail/standard_policies.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long int
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

int dp[101][101][101];
const int mod = 1e9 + 7;

int solve(int a, int w, int r){
    if (a+w+r == 0) return 1;
    if (dp[a][w][r] != -1) return dp[a][w][r];
    int res = 0;
    if (a) res = (res + solve(a-1, w, r)) % mod;
    if (w) res = (res + solve(a, w-1, r)) % mod;
    if (r) res = (res + solve(a, w, r-1)) % mod;
    return dp[a][w][r] = res;
}

void promod(){
    int n, a, w, r;
    cin >> n >> a >> w >> r;
    memset(dp, -1, sizeof dp);
    int ans = solve(a, w, r);
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int test_cases = 1;
    // cin >> test_cases;

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

