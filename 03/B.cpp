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

int ans[181];

void promod(){
    for (int i = 0; i <= 180; i++) {
        ans[i] = 0;
    }
    int h = 0, m = 0;
    ans[0] = 1;
    h = 1, m = 12;
    while (h != 0) {
        int x = abs((h*6) - (m*6));
        if (x > 180) x = (360 - x);
        ans[x] = 1;
        h = (h + 1) % 60;
        m = (m + 12) % 60;
    }
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

    promod();

    int in;
    while (cin >> in) {
        if (ans[in]) cout << "Y\n";
        else cout << "N\n";
    }

    return 0;
}
/*
    problems are the sign of life
*/

