#include<bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  int a,b;
  cin >> str >> a >> b ;
    char temp;
    temp = str[a-1];
    str[a-1] = str[b-1];
    str[b-1] = temp;
  cout << str << endl;

  return 0;
}