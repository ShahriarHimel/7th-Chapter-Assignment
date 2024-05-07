//i hate _____
#include<iostream>
#include<queue>
#include<vector>

using namespace std;

#define ii pair<int,int>
#define endl "\n"


void promod(){
    int n, m;
    cin >> n >> m;
    vector<int>cnt(10, 0);
    queue<ii>q;
    for (int i = 0; i < n; i++) {
        int in; cin >> in;
        cnt[in]++;
        q.push({in, i});
    }
    int cur = 9;
    int ans = 0;
    while (true) {
        while (cnt[cur] == 0) cur--;
        while (q.front().first != cur) {
            ii tmp = q.front();
            q.pop();
            q.push(tmp);
        }
        ans++;
        cnt[cur]--;
        if (q.front().second == m) break;
        q.pop();
    }
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
    cin >> test_cases;

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

