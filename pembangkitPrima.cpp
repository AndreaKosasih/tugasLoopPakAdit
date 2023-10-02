#include <iostream>
using namespace std;

int main () {
    long long n; cin >> n;
    bool num[n];

    for(int i = 2; i <= n; i++) {
        num[i] = true; 
    }

    for(int i = 2; i*i <= n; i++) {
        if (num[i]) {
            for (int j = i*i; j <= n; j += i) {
                num[j] = false; 
            }
        }
    }
    
    bool first = true; 
    for (int i = 2; i <= n; i++) {
        if (num[i]) {
            if (!first) {
                cout << ", ";
            }
            cout << i;
            first = false;
        }
    }

    cout << endl;
    return 0;
}
