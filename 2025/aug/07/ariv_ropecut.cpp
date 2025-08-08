#include <bits/stdc++.h>
using namespace std;

int rope_cut(int len, int o_a, int o_b, int o_c) {
    if (len == 0) return 0;
    if (len < 0) return -1;
    int res1 = rope_cut(len-o_a, o_a, o_b, o_c);
    int res2 = rope_cut(len-o_b, o_a, o_b, o_c);
    int res3 = rope_cut(len-o_c, o_a, o_b, o_c);
    
    if (max(res1, max(res2, res3)) <= -1) return -1;

    return max(res1, max(res2, res3)) + 1;


}

int main() {
    cout << "enter the 4 elements line by line" << endl;
  int len, a, b, c;
    cin >> len >> a >> b >> c;
    cout << rope_cut(len, a, b, c);
}
