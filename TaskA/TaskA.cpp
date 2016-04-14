// Template: https://github.com/cseri/codejam-template
#include "stdafx.h"

const string fileName = "A-example";

ifstream fin(fileName + ".in");
ofstream fout(fileName + ".out");
//ofstream fdebug(fileName + ".debug.txt");
//#define cout fdebug

struct Task {

  ll sol = 0;

  void solve(vector<ll> vec) {
    int n = (int)vec.size();
    PRINT(vec);

    for (int i = 0; i < n; ++i) {
      sol += vec[i];
    }
  }

};

int main2() {
  int tn = -1;
  fin >> tn;
  if (tn == -1) {
    cerr << "Error reading number of testcases." << endl;
    return 1;
  }

  for (int ti = 0; ti < tn; ++ti) {
    int n = -1;
    fin >> n;
    vector<ll> vec(n);
    for (int i = 0; i < n; ++i) {
      fin >> vec[i];
    }

    Task t;
    t.solve(vec);

    fout << "Case #" << (ti + 1) << ": " << t.sol << endl;
    cout << "Case #" << (ti + 1) << ": " << t.sol << endl;
  }

  return 0;
}

int main(int argc, char* argv[]) {
  int ret = 0;

  ret = main2();

  cerr << "Press ENTER to continue . . ." << endl;
  string dummy;
  getline(cin, dummy);
  
  return ret;
}
