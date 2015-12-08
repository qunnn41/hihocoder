#include <iostream>
using namespace std;

int expandFromCenter(string str, int c1, int c2) {
    int l = c1, r = c2;
    int n = (int) str.length();
    while (l >= 0 && r <= n - 1 && str[l] == str[r]) {
        l --;
        r ++;
    }

    return r - l - 1;
}
int main() {
    int n;
    cin >> n;
    string str;
    while (n --) {
        cin >> str;
        int longest = 0;
        int length = (int) str.length();
        for (int i = 0; i < length; ++i) {
            int p1 = expandFromCenter(str, i, i);
            longest = longest > p1 ? longest : p1;
            int p2 = expandFromCenter(str, i, i + 1);
            longest = longest > p2 ? longest : p2;
        }

        cout << longest << endl;
    }

    return 0;
}