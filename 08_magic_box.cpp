//#include <iostream>
//#include "string.h"
//using namespace std;
//int main() {
//    int x,y,z;
//    char input[20000];
//    cin >> x >> y >> z;
//    cin >> input;
//
//    int R = 0, Y = 0, B = 0;
//    int maxCount = 0;
//    int curCount = 0;
//    int sum = x + y + z;
//    int num1 = min(min(x, y), z);
//    int num3 = max(max(x, y), z);
//
//    int length = (int)strlen(input);
//    for (int i = 0; i < length; ++i) {
//        if (input[i] == 'R') {
//            R ++;
//        } else if (input[i] == 'Y') {
//            Y ++;
//        } else if (input[i] == 'B') {
//            B ++;
//        }
//        maxCount = max(maxCount, ++curCount);
//        int ry = abs(R - Y);
//        int yb = abs(Y - B);
//        int rb = abs(R - B);
//        int temp_sum = ry + yb + rb;
//        if (temp_sum == sum) {
//            int temp1 = min(min(ry, yb), rb);
//            int temp3 = max(max(ry, yb), rb);
//            if (num1 == temp1 && num3 == temp3) {
//                curCount = R = Y = B = 0;
//            }
//        }
//    }
//    cout << maxCount << endl;
//}