// #include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <vector>
#include <iterator>
#include <set>
#include <exception>
#include <cstdlib>
#include <ctype.h>
#include <iomanip>
#include <bitset>
#include <cstdio>
#include <chrono>
#include <complex>
#include <algorithm>
#include <numeric>
#include <limits.h>
#include <list>
#include <vector> 
#include <unordered_map>
#include <map>
#define nline "\n"
#define ll long long int
#define ld long double
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001
#define all(c) c.begin(), c.end()
#define mp(x, y) make_pair(x, y)
#define mem(a, val) memset(a, val, sizeof(a))
#define eb emplace_back
#define F first
#define S second
 
using namespace std;


const int N = 105000;

int n;
int x[N];
 
 int main() {
    int n;
    cin >> n;
    cout << "? 1 2" << endl;
    int a;
    cin >> a;
    cout << "? 1 3" << endl;
    int b;
    cin >> b;
    cout << "? 2 3" << endl;
    int c;
    cin >> c;
    x[3] = c - a + b;
    x[3] /= 2;
    x[1] = b - x[3];
    x[2] = a - x[1];
    for (int i = 4; i <= n; i++) {
        cout << "? 1 " << i << endl;
        cin >> x[i];
        x[i] -= x[1];
    }
    cout << "! ";
    for (int i = 1; i <= n; i++) {
        cout << x[i];
        if (i < n) cout << " "; else cout << endl;
    }
    return 0;
 }
