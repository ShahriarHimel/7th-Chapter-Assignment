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

const int M = 1 << 17;
int dp[M];
const int inf = 105;

void promod(int n, int m){
    vector<int>basis;
    for (int i = 0; i < m; i++) {
        int k, b = 0;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int in; cin >> in;
            b |= (1 << in);
        }
        basis.pb(b);
    }
    for (int i = 0; i < M; i++)
        dp[i] = inf;
    dp[0] = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < M; j++) {
            int nxt = j | basis[i];
            if (dp[j] + 1 < dp[nxt]) 
                dp[nxt] = dp[j] + 1;
        }
    }
    for (int i = 0; i < n; i++) {
        int k , b = 0;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int in; cin >> in;
            b |= (1 << in);
        }
        int ans = dp[b];
        if (ans == 105) ans = 0;
        if (i) cout << " ";
        cout << ans;
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int test_cases = 1;
    // cin >> test_cases;

    for (int tc = 1 ; ; tc++){
        int m, n;
        cin >> m >> n;
        if (n+m == 0) return 0;
        //cout << "Case " << tc << ": ";
        promod(n, m);
        //printf("Case %d: %.10lf\n",tc,ans);

    }

    return 0;
}
/*
    problems are the sign of life
*/

