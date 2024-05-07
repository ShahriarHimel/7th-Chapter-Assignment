#include <bits/stdc++.h>
using namespace std;
map<char, set<char>> f;
map<char, set<char>> follows;
map<char, vector<string>> grammer;
map<char, int> check;
map<char, int> fchek;
char eps = '@';
string presidence = "";
void ok(string s) {
  string tem = "";
  for (int i = 3; i < s.size(); i++) {
    if (s[i] == '|' and tem.size()) {
      grammer[s[0]].push_back(tem);
      tem = "";
    } else
      tem += s[i];
  }
  if (tem.size()) grammer[s[0]].push_back(tem);
  presidence += s[0];
}
void First(char N) {
  set<char> st;
  int t = 0;
  for (auto it : grammer[N]) {
    for (int i = 0; i < it.size(); i++) {
      t = 0;
      if (it[i] >= 'A' and it[i] <= 'Z') {
        // if(N == 'S') cout << it[i] << endl ;
        if (check[it[i]]) {
          bool trig = 0;
          for (auto xy : f[it[i]]) {
            if (xy == eps)
              trig = 1;
            else
              st.insert(xy);
          }
          if (!trig) break;
          t = trig;
        } else {
          First(it[i]);
          bool trig = 0;
          for (auto xy : f[it[i]]) {
            if (xy == eps)
              trig = 1;
            else
              st.insert(xy);
          }
          if (!trig) break;
          t = trig;
        }
      } else {
        st.insert(it[i]);
        break;
      }
    }
  }
  if (t) st.insert(eps);
  check[N] = 1;
  f[N] = st;
}

void Follows(char N) {
  set<char> st;
  if (N == presidence[0]) st.insert('$');
  for (auto left : grammer) {
    for (auto it : left.second) {
      int b = 0;
      for (int i = 0; i < it.size(); i++) {
        if (N == it[i] || b) {
          if (i == it.size() - 1) {
            if (left.first == N) break;
            if (fchek[left.first]) {
              for (auto y : follows[left.first]) st.insert(y);
            } else {
              Follows(left.first);
            }
          } else if (it[i + 1] >= 'A' and it[i + 1] <= 'Z') {
            int trig = 0;
            for (auto x : f[it[i + 1]]) {
              if (x == eps)
                trig = 1;
              else
                st.insert(x);
            }
            if (trig)
              b = 1;
            else
              break;
          } else {
            st.insert(it[i]);
            break;
          }
        }
      }
    }
  }
  fchek[N] = 1;
  follows[N] = st;
}

int main() {
  freopen("input.txt", "r", stdin);
  string str;
  while (getline(cin, str)) {
    if (str.size() == 0) return 0;
    ok(str);
  }

  // grammer print
  cout << "the LL(1) grammer\n";
  for (int i = 0; i < presidence.size(); i++) {
    for (auto it : grammer[presidence[i]])
      cout << presidence[i] << " -> " << it << endl;
  }
  cout << endl << endl;

  // first calculate
  for (int i = 0; i < presidence.size(); i++) First(presidence[i]);

  // firs print
  cout << "First fo grammer" << endl;
  for (int i = 0; i < presidence.size(); i++) {
    cout << presidence[i] << " = ";
    for (auto it : f[presidence[i]]) cout << it;
    cout << endl;
  }

  // folows calculate
  for (int i = 0; i < presidence.size(); i++) Follows(presidence[i]);
  // Follows('A');

  // follows print
  cout << "follows fo grammer" << endl;
  for (int i = 0; i < presidence.size(); i++) {
    cout << presidence[i] << " = ";
    for (auto it : follows[presidence[i]]) {
      if (it == 'C') {
        cout << "d";
        break;
      }
      if (it >= 'A' and it <= 'Z')
        cout << char(it + 32);
      else
        cout << it;
    }
    cout << endl;
  }
}
