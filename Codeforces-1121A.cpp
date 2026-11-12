#include <iostream>
#include <vector>

using namespace std;

int main() {

    

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int lastWrongGuy = 1000000; 
        bool possible = true;
        
        for (int i = 0; i < n; i++) {
            if (a[i] != i + 1) {
                if (a[i] > lastWrongGuy) {
                    possible = false;
                    break;
                }
                lastWrongGuy = a[i];
            }
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
