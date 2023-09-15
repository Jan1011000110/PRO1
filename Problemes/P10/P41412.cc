#include <bits/stdc++.h>
using namespace std;

void insert(vector<double>& a) {
  int n = (int) a.size();
  for (int i = 1; i < n; ++i) {
    if (a[i] < a[i - 1]) {
      int j = i - 1;
      while (j >= 0 and a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
        j -= 1;
      }
    }
  }
}
