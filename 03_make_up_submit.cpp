//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    while (n --) {
//        int not_submit, num_card;
//        cin >> not_submit >> num_card;
//        int day[not_submit + 2];
//        for (int i = 1; i <= not_submit; ++i)
//            cin >> day[i];
//        day[0] = 0;
//        day[not_submit + 1] = 100;
//
//        int max = -1;
//        if (num_card >= not_submit) {
//            cout << 100 << endl;
//        } else {
//            for (int i = 0; i < not_submit - num_card + 1; ++i) {
//                int diff = day[i + num_card + 1] - 1 - day[i];
//                if (max < diff) {
//                    max = diff;
//                }
//            }
//            cout << max << endl;
//        }
//    }
//}