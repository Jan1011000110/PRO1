#include <bits/stdc++.h>
using namespace std;


void test_case() {
    vector<vector<int>> a(9, vector<int>(9));
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            cin >> a[i][j];
    bool can = true;

    for (int i = 0; i < 9; i++){
        vector <int> v(9,0);
        for (int j = 0; j < 9; j++){
            v[a[i][j]-1]++; // si hi ha mes dun numero igual, dos times ++
            if (v[a[i][j]-1] > 1)
                can = false;
        }
    }
    for (int i = 0; i < 9; i++){
        vector <int> v(9,0);
        for (int j = 0; j < 9; j++){
            v[a[j][i]-1]++;
            if (v[a[j][i]-1] > 1)
                can = false;
        }
    }
    
    for (int qi = 0; qi < 3; qi++){
        for (int qj = 0; qj < 3; qj++){
            vector<int> v(9, 0);
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    v[a[qi * 3 + i][qj * 3 + j] - 1]++;
                    if (v[a[qi * 3 + i][qj * 3 + j] - 1] > 1)
                        can = false;
                }
            }
        }
    }
                
    if (can) cout << "yes" << endl;
    else cout << "no" << endl;


}
