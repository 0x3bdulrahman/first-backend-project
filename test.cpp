// #include <iostream>
// #include <bits/stdc++.h>
// #include <vector>
//
// using namespace std;
// int solve(int index, vector<int> &v, int count, vector<vector<int>> &dp) {
//     if (index >= v.size())return 0;
//     if (dp[index][count] != -1)return dp[index][count];
//     int ans = count * v[index] + solve(index + 1, v, count + 1, dp);
//     int sum = v[index];
//     for (int i = index + 1; i < v.size(); i++) {
//         sum += v[i];
//         ans = max(ans, count * sum + solve(i + 1, v, count + 1, dp));
//     }
//     return dp[index][count] = ans;
//
// }
// int main() {
//
//
//     int ans = solve(0, v, 1, dp);
//     cout << ans << endl;
//
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define S " " // space
// // #define int unsigned long long
// #define int long long
// #define ll long long
// #define E "\n"
// #define all(v) v.begin(), v.end()
// const int mod = 1000000007, N = 1e4 + 5;
// // free Palestine
// void fast() {
//     ios_base::sync_with_stdio(false);
//     cout.tie(NULL);
//     cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
// }
// void solve() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (auto &i: v)
//         cin >> i;
//     vector<vector<int>> v(n, vector<int>(n + 1, -1));
//
// }
// signed main() {
//     fast();
//     int t = 1;
//     cin >> t;
//     while (t--)
//         solve();
//     return (0 - 0); // ♡ ♡ ♡
// }