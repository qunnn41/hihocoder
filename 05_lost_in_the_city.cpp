#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    char environment[N][M];
    int k = 0;
    while (k < N) {
        cin >> environment[k];
        ++k;
    }

    char surrounded[3][3];
    k = 0;
    while (k < 3) {
        cin >> surrounded[k];
        ++k;
    }

    //generate pattern surrounded
    char pattern1[9];
    char pattern2[9];
    char pattern3[9];
    char pattern4[9];
    pattern1[0] = surrounded[0][0];
    pattern1[1] = surrounded[0][1];
    pattern1[2] = surrounded[0][2];
    pattern1[3] = surrounded[1][2];
    pattern1[4] = surrounded[2][2];
    pattern1[5] = surrounded[2][1];
    pattern1[6] = surrounded[2][0];
    pattern1[7] = surrounded[1][0];
    pattern1[8] = '\0';

    strncpy(&pattern2[0], &pattern1[2], 6);
    strncpy(&pattern2[6], &pattern1[0], 2);
    pattern2[8] = '\0';

    strncpy(&pattern3[0], &pattern1[4], 4);
    strncpy(&pattern3[4], &pattern1[0], 4);
    pattern3[8] = '\0';

    strncpy(&pattern4[0], &pattern1[6], 2);
    strncpy(&pattern4[2], &pattern1[0], 6);
    pattern4[8] = '\0';

    for (int i = 1; i < N - 1; ++i) {
        for (int j = 1; j < M - 1; ++j) {
            if (environment[i][j] == surrounded[1][1]) {
                char neighbor[9];
                neighbor[0] = environment[i - 1][j - 1];
                neighbor[1] = environment[i - 1][j];
                neighbor[2] = environment[i - 1][j + 1];
                neighbor[3] = environment[i]    [j + 1];
                neighbor[4] = environment[i + 1][j + 1];
                neighbor[5] = environment[i + 1][j];
                neighbor[6] = environment[i + 1][j - 1];
                neighbor[7] = environment[i]    [j - 1];
                neighbor[8] = '\0';

                if (!strcmp(neighbor, pattern1)
                        || !strcmp(neighbor, pattern2)
                        || !strcmp(neighbor, pattern3)
                        || !strcmp(neighbor, pattern4)) {
                    cout << (i + 1) << " " << (j + 1)<< endl;
                }
            }
        }
    }

    return 0;
}
