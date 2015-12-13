//#include <iostream>
//using namespace std;
//
//string preProcess(string s) {
//    int n = s.length();
//    if (n == 0)
//        return "^$";
//    string ret = "^";
//    for (int i = 0; i < n; ++i)
//        ret += "#" + s.substr(i, 1);
//    ret += "#$";
//    return ret;
//}
//
//int main() {
//    int num;
//    cin >> num;
//    string str;
//    while (num --) {
//        cin >> str;
//        string T = preProcess(str);
//        int n = (int)T.length();
//        int *P = new int[n];
//        int C = 0, R = 0, longest = 0;
//        for (int i = 1; i < n - 1; ++i) {
//            int i_mirror = C - (i - C);
//            P[i] = (R > i) ? min(R - i, P[i_mirror]) : 0;
//
//            while (T[i + 1 + P[i]] == T[i - 1 - P[i]])
//                P[i]  ++;
//
//            if (P[i] > longest)
//                longest = P[i];
//            if (i + P[i] > R) {
//                C = i;
//                R = i + P[i];
//            }
//        }
//
//        cout << longest << endl;
//    }
//
//    return 0;
//}