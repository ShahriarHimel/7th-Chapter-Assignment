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

const int mx = 2e5 + 5;
vector<int>odd(mx, 0);
int st[2][4*mx];

void build(int node, int l, int r){
    if (l == r) {
        st[0][node] = (odd[l] == 0);
        st[1][node] = (odd[l] == 1);
        return;
    }
    int mid = (l + r)/2;
    int n1 = (node<<1) + 1;
    int n2 = (node<<1) + 2;
    build(n1, l, mid);
    build(n2, mid+1, r);
    st[0][node] = st[0][n1] + st[0][n2];
    st[1][node] = st[1][n1] + st[1][n2];
}  

int query(int node, int t, int l, int r, int x, int y){
    if (x <= l && r <= y) return st[t][node];
    if (l > y || r < x) return 0;
    int mid = (l + r)/2;
    int s1 = query((node<<1) + 1, t, l, mid, x, y);
    int s2 = query((node<<1) + 2, t, mid+1, r, x, y);
    return s1 + s2;
}

void promod(){
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int neg = 0;
    for (int i = 0; i < n; i++) {
        neg ^= (a[i] < 0);
        odd[i] = neg;
    }
    build(0, 0, n-1);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int t;
        if (a[i] > 0) {
            t = odd[i] ^ 1;
        } else {
            t = odd[i];
        }
        ans += query(0, t, 0, n-1, i, n-1);
    }
    int t = (n*(n+1))/2;
    int p = t - ans;
    cout << ans << " " << p << endl;
}

int32_t main()
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

