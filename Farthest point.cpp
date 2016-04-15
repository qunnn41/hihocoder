//
// Created by wyq on 4/2/16.
//

#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}

double x, y, r;
int ans_x, ans_y;
double max_distance = 0.0;

void calc() {
    int right = (int)floor(r + x);
    int left = (int)ceil(r - x);
    for (int i = right; i >= left; --i) {
        int p = (int)floor((y + sqrt(r * r - (i - x) * (i - x))));
        double dis = distance(x, y, i * 1.0, p * 1.0);
        if (dis > max_distance) {
            max_distance = dis;
            ans_x = i;
            ans_y = p;
        }

        p = (int)ceil((y - sqrt(r * r - (i - x) * (i - x))));
        dis = distance(x, y, i * 1.0, p * 1.0);
        if (dis > max_distance) {
            max_distance = dis;
            ans_x = i;
            ans_y = p;
        }
    }
    cout << ans_x << " " << ans_y << endl;
}
//int main() {
//    cin >> x >> y >> r;
//    calc();
//}
