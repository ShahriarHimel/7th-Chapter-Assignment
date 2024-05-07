#include <bits/stdc++.h>
using namespace std;


bool isPalindromicWord(string str)
{
    string reverseString = str;
    reverse(reverseString.begin(), reverseString.end());
    if(str != reverseString)
    {
        return false;
    }
    if(str.size() % 2 == 0)
    {
        return false;
    }

    if(str[0] < 'a' || str[0] > 'd')
    {
        return false;
    }

    for(int i = 1; i < str.size(); i++)
    {
        if(str[i] < 'a' || (str[i] > 'd' && str[i] != 's'))
        {
            return false;
        }
    }
    
    return true;
}

bool isPalindromicNumber(string str)
{
    string reverseString = str;
    reverse(reverseString.begin(), reverseString.end());
    if(str != reverseString)
    {
        return false;
    }
    if(str.size() % 2 == 0)
    {
        return false;
    }

    if(str[0] < '1' || str[0] > '4')
    {
        return false;
    }

    for(int i = 1; i < str.size(); i++)
    {
        if((str[i] < '0' || str[i] > '4'))
        {
            return false;
        }
    }
    
    return true;
}
bool isAlphanumricPalindromic(string str)
{
    string reverseString = str;
    reverse(reverseString.begin(), reverseString.end());
    if(str != reverseString)
    {
        return false;
    }
    if(str.size() % 2 == 0)
    {
        return false;
    }


    if (str[0] >= 'a' && str[0] <= 'd') 
    {
      for (int i = 1; i < str.size() - 1; i++) 
      {
        if ((str[i] < '0' || str[i] > '4'))
        {
          return false;
        }
      }
    } else if (str[0] >= '1' && str[0] <= '4') 
    {
      for (int i = 1; i < str.size() - 1; i++) 
      {
        if (str[i] < 'a' || (str[i] > 'd' && str[i] != 's'))
        {
          return false;
        }
      }
    }

    return true;
}




int main() {

    vector<string> word, number, alphanumeric, invalid;
  string str;
  fstream myfile;
  myfile.open("input2.txt");
  while (myfile >> str) 
  {
    // cout << str << " is : ";
    // if(isPalindromicWord(str))
    // {
    //     cout << "Palindromic Word." << endl;
    // }
    // else if(isPalindromicNumber(str))
    // {
    //     cout << "Palindromic Number" << endl;
    // }
    // else if(isAlphanumricPalindromic(str))
    // {
    //     cout << "Alphanumeric Palindrom." << endl;
    // }
    // else 
    // {
    //     cout << "Invalid" << endl;
    // }

    if(isPalindromicWord(str))
    {
        word.push_back(str);
    }
    else if(isPalindromicNumber(str))
    {
        number.push_back(str);
    }
    else if(isAlphanumricPalindromic(str))
    {
        alphanumeric.push_back(str);
    }
    else 
    {
        invalid.push_back(str);
    }




  }

  cout << "Palindromic Word: ";
  for (int i = 0; i < word.size(); i++) 
  {
    cout << word[i] << " ";
  }
  cout << endl;

  cout << "Palindromic Number: ";
  for (int i = 0; i < number.size(); i++) 
  {
    cout << number[i] << " ";
  }
  cout << endl;

  cout << "Alphanumeric Number: ";
  for (int i = 0; i < alphanumeric.size(); i++) 
  {
    cout << alphanumeric[i] << " ";
  }
  cout << endl;

  cout << "Invalid Input or Undefined: ";
  for (int i = 0; i < invalid.size(); i++) 
  {
    cout << invalid[i] << " ";
  }
}