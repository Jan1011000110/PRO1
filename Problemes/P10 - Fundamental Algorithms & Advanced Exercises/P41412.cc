#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<double>& a) {
  int n = (int) a.size();
  for (int i = 1; i < n; ++i) {
    double to_move = a[i];
    int j = i - 1;
    while (j >= 0 and a[j] > to_move){ 
      a[j + 1] = a[j];
      j -= 1;
    }
    a[j + 1] = to_move;
  }
}
