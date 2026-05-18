// The Grades

#include <bits/stdc++.h>
using namespace std;
 
struct Friend {
    string name;
    int A, M, S, E;
    int total;
};
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int N;
    cin >> N;
 
    vector<Friend> v(N);
 
    for (int i = 0; i < N; i++) {
        cin >> v[i].name >> v[i].A >> v[i].M >> v[i].S >> v[i].E;
        v[i].total = v[i].A + v[i].M + v[i].S + v[i].E;
    }
 
    sort(v.begin(), v.end(), [](const Friend &a, const Friend &b) {
        int diff = abs(a.total - b.total);
 
        if (diff > 10) {
            return a.total > b.total; // higher total first
        } else {
            return a.name < b.name;   // lexicographically smaller first
        }
    });
 
    for (auto &f : v) {
        cout << f.name << " "
             << f.total << " "
             << f.A << " "
             << f.M << " "
             << f.S << " "
             << f.E << "\n";
    }
 
    return 0;
}