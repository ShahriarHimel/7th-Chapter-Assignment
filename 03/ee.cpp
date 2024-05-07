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

int arr[50][1<<21];

int x, y;

 bool isIdentical(int r1, int r2){
    // if (r1) cout << r2->val << endl;
    if ((!arr[x][r1]) || (!arr[y][r2])) {
        if ((!arr[x][r1]) && (!arr[y][r2])) return true;
        return false;
    }
    // cout << r1->val << " " << r2->val << endl;
    return (isIdentical((r1<<1)+1, (r2<<1)+1) && isIdentical((r1<<1)+2, (r2<<1)+2));
}

int parrent[50];

int Find(int x){
    if (parrent[x] == x) return x;
    return parrent[x] = Find(parrent[x]);
}

void Union(int u, int v){
    int p = Find(u), q = Find(v);
    if (p != q) 
        parrent[q] = p;
}

void promod(){
    int n, k;
    cin >> n >> k;

    // memset(arr, 0, sizeof arr);

    for (int i = 0; i < n; i++) {
        parrent[i] = i;
        for (int j = 0; j < k; j++) {
            int in; cin >> in;
            int root = 0;
            while (arr[i][root]) {
                if (in < arr[i][root]) root = (root << 1) + 1;
                else root = (root << 1) + 2;
            }
            arr[i][root] = in;
        }
    }

    // x = 0, y = 2;
    // if (isIdentical(0, 0)) {
    //     cout << "ok\n";
    // }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            x = i; y = j;
            if (isIdentical(0, 0)) {
                Union(i, j);
            }
        }
    }

    set<int>up;
    for (int i = 0; i < n; i++) {
        up.insert(Find(i));
    }
    cout << up.size() << endl;

    // int x = (1 << 20);
    // cout << x << endl;
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

