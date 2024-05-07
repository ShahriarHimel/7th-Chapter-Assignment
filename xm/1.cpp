#include <bits/stdc++.h>
using namespace std;
vector<string> separate_word(string str) {
  string tem = "";
  vector<string> lexim;
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == ' ' and tem.size()) {
      lexim.push_back(tem);
      tem = "";
    } else
      tem += str[i];
  }
  if (tem.size()) lexim.push_back(tem);
  return lexim;
}
string small(string s) {
  for (int i = 0; i < s.size(); i++)
    if (s[i] >= 'A' and s[i] <= 'Z') s[i] += 32;
  return s;
}
bool integer_variable(string s) {
  if (s.size() < 1) return false;
  if (s[0] >= 'i' and s[0] <= 'n') {
    for (int i = 1; i < s.size(); i++) {
      if ((s[i] >= 'a' and s[i] <= 'z') || s[i] == '_' ||
          (s[i] >= '0' and s[i] <= '9'))
        continue;
      return false;
    }
    return true;
  }
  return false;
}

bool shortInt_number(string s) {
  if (s.size() > 4) return false;
  if (s[0] >= '1' and s[0] <= '9') {
    for (int i = 0; i < s.size(); i++) {
      if (s[i] >= '0' and s[i] <= '9') continue;
      return false;
    }
    return true;
  }
  return false;
}

bool longInt_number(string s) {
  if (s.size() < 5) return false;
  if (s[0] >= '1' and s[0] <= '9') {
    for (int i = 0; i < s.size(); i++) {
      if (s[i] >= '0' and s[i] <= '9') continue;
      return false;
    }
    return true;
  }
  return false;
}

bool constant_intger(string s) {
  if (s[0] > '0') {
    for (int i = 1; i < s.size(); i++) {
      if (s[i] >= '1' and s[i] <= '9' and s[i] >= s[i - 1]) continue;
      return false;
    }
    return true;
  }
  return false;
}

bool keyword(string s) {
  if (s[0] > '0') {
    for (int i = 1; i < s.size(); i++) {
      if (s[i] >= '1' and s[i] <= '9' and s[i] > s[i - 1]) continue;
      return false;
    }
    return true;
  }
  return false;
}

bool invalid_check(string s) {
  if (integer_variable(s) || shortInt_number(s) || longInt_number(s) ||
      constant_intger(s) || keyword(s))
    return false;
  return true;
}
int main() {
  string str;
  freopen("input.txt", "r", stdin);
  while (getline(cin, str)) {
    if (str.size() == 0) return 0;
    vector<string> words = separate_word(str);
    for (auto word : words) {
      cout << word << " is ";
      word = small(word);
      if (invalid_check(word))
        cout << "invalid input or Undefined input" << endl;
      else {
        if (keyword(word)) cout << " Keyword ";
         else if (constant_intger(word)) cout << "Constant Integer  ";
        else if (shortInt_number(word)) cout << "ShortInt Number";
        else if (integer_variable(word)) cout << "Integer variable  ";
        else if (longInt_number(word)) cout << "LongInt Number  ";
        cout << endl << endl;
      }
    }
  }
}
