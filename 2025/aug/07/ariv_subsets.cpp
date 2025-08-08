#include <bits/stdc++.h>
using namespace std;

void subset(int index, string &str, string cur_str, vector<string>& result) {
  if (index >= str.size()) {
    result.push_back(cur_str);
    return;
  }

  subset(index+1, str, cur_str, result);
  cur_str += str[index];
  subset(index + 1, str, cur_str, result);
}

int main () {
  string str, cur_str;
  vector<string> result;
  cin >> str;
  subset(0,str,cur_str,result);

  for (auto i : result) cout << i << endl;
}
