#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matrix;

int sum_line(const Matrix& mat, int of, int oc, int df, int dc) {
  int suma = 0;
  if (of == df) {
    while (oc != dc) {
      suma += mat[of][oc];
      if (oc < dc) oc += 1;
      else oc -= 1;
    }
  }
  else {
    while (of != df) {
      suma += mat[of][oc];
      if (of < df) of += 1;
      else of -= 1;
    }
  }
  return suma;
}

void test_case() {
  int n, m;
  cin >> n >> m;
  Matrix a(n, vector<int>(m));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> a[i][j];
    }
  }
  int lf = -1, lc = -1;
  int cf, cc;
  int suma = 0;
  while (cin >> cf >> cc) {
    if (lf != -1 and lc != -1) {
      suma += sum_line(a, lf, lc, cf, cc);
    }
    lf = cf;
    lc = cc;
  }
  suma += a[lf][lc];
  cout << "suma = " << suma << endl;
} 
 
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    test_case();
  }
  return 0;
}