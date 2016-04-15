//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main() {
//    int T;
//    cin >> T;
//    while (T --) {
//        int N, M;
//        cin >> N >> M;
//        //1 for black, -1 for white
//        int dye[N + 1];
//        for (int i = 0; i < N + 1; ++i)
//            dye[i] = 0;
//        int date[M][2];
//        for (int i = 0; i < M; ++i)
//            cin >> date[i][0] >> date[i][1];
//
//        queue<int> neighbor;
//        neighbor.push(1);
//        bool flag = true;
//        int color = 1;
//        while (!neighbor.empty() && flag) {
//            color *= -1;
//            int current[neighbor.size()];
//            int index = 0;
//            while (!neighbor.empty()) {
//                current[index] = neighbor.front();
//                dye[current[index]] = color;
//                neighbor.pop();
//                index ++;
//            }
//
//            for (int i = 0; i < index; ++i) {
//                for (int j = 0; j < M; ++j) {
//                    if (date[j][0] == current[i]) {
//                        if (dye[date[j][1]] == 0) {
//                            neighbor.push(date[j][1]);
//                        } else if (dye[date[j][1]] == color) {
//                            flag = false;
//                            i = index;
//                            break;
//                        }
//                    } else if (date[j][1] == current[i]) {
//                        if (dye[date[j][0]] == 0) {
//                            neighbor.push(date[j][0]);
//                        } else if (dye[date[j][0]] == color) {
//                            flag = false;
//                            i = index;
//                            break;
//                        }
//                    }
//                }
//            }
//        }
//
//        if (flag) {
//            cout << "Correct" << endl;
//        } else {
//            cout << "Wrong" << endl;
//        }
//    }
//}