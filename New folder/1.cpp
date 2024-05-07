#include <bits/stdc++.h>
using namespace std;

bool isFloatVariable(string str) {
  if (tolower(str[0]) < 'a' ||
      (tolower(str[0]) > 'h' && tolower(str[0]) < 'o') ||
      tolower(str[0]) > 'z') {
    return false;
  }

  for (int i = 1; i < str.size(); i++) {
    if (str[i] != '_' && !isalpha(str[i]) && !isdigit(str[i])) {
      return false;
    }
  }
  return true;
}

vector<string> keyword = {"com",  "piler",       "design", "Theory",
                          "of",   "Computation", "Finite", "auto",
                          "mata", "NFA",         "DFA"};

bool isKeyword(string str) {
  for (int i = 0; i < keyword.size(); i++) {
    if (str == keyword[i]) {
      return true;
    }
  }
  return false;
}

bool isFloatNumber(string str) {
  if (str[0] == '0' && str[1] == '0') {
    return false;
  }
  if (str.size() < 4) {
    return false;
  }
  int digit = 0;
  bool radix = false;
  for (int i = 1; i < str.size(); i++) {
    if (str[i] == '.') {
      radix = true;
      continue;
    }
    if (radix) digit++;
  }
  if (digit != 2) return false;

  return true;
}

bool isDoubleNumber(string str) {
  if (str[0] == '0' && str[1] == '0') {
    return false;
  }
  if (str.size() <= 4) {
    return false;
  }
  int digit = 0;
  bool radix = false;
  for (int i = 1; i < str.size(); i++) {
    if (str[i] == '.') {
      radix = true;
      continue;
    }
    if (radix) digit++;
  }
  if (digit <= 2) return false;

  return true;
}

vector<string> constants = {"1", "2", "4", "8", "0.1", "0.2", "0.4", "0.8"};
bool isConstant(string str) {
  for (int i = 0; i < constants.size(); i++) {
    if (str == constants[i]) return true;
  }
  return false;
}

int main() {
  vector<string> floatVariable, keyword, floatNumber, doubleNumber,
      constantNumber, invalid;
  string str;
  fstream myfile;
  myfile.open("input.txt");
  while (myfile >> str) {
    // cout << str << " is ";
    // if (isKeyword(str)) {
    //   cout << "Keyword" << endl;
    // } else if (isFloatVariable(str)) {
    //   cout << "Float Variable." << endl;
    // } else if (isFloatNumber(str)) {
    //   cout << "Float Number." << endl;
    // } else if (isDoubleNumber(str)) {
    //   cout << "Double Variable." << endl;
    // } else if (isConstant(str)) {
    //   cout << "Constant" << endl;
    // } else {
    //   cout << "Invalid Input or Undefined" << endl;
    // }

    if (isKeyword(str)) {
      keyword.push_back(str);
    } else if (isFloatVariable(str)) {
      floatVariable.push_back(str);
    } else if (isFloatNumber(str)) {
      floatNumber.push_back(str);
    } else if (isDoubleNumber(str)) {
      doubleNumber.push_back(str);
    } else if (isConstant(str)) {
      constantNumber.push_back(str);
    } else {
      invalid.push_back(str);
    }
  }

  cout << "Keyword: ";
  for (int i = 0; i < keyword.size(); i++) {
    cout << keyword[i] << " ";
  }
  cout << endl;

  cout << "Float Variable: ";
  for (int i = 0; i < floatVariable.size(); i++) {
    cout << floatVariable[i] << " ";
  }
  cout << endl;

  cout << "Float Number: ";
  for (int i = 0; i < floatNumber.size(); i++) {
    cout << floatNumber[i] << " ";
  }
  cout << endl;

  cout << "Double Number: ";
  for (int i = 0; i < doubleNumber.size(); i++) {
    cout << doubleNumber[i] << " ";
  }
  cout << endl;

  cout << "Constant Number: ";
  for (int i = 0; i < constantNumber.size(); i++) {
    cout << constantNumber[i] << " ";
  }
  cout << endl;

  cout << "Invalid Input or Undefined: ";
  for (int i = 0; i < invalid.size(); i++) {
    cout << invalid[i] << " ";
  }
  cout << endl;
}