#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int lastVisit[2001][2001];
    for (int i = 0; i <= 2000; ++i) {
        for (int j = 0; j <= 2000; ++j) {
            lastVisit[i][j] = -1;
        }
    }

    lastVisit[1000][1000] = 0;
    int currTime = 0;
    int currX = 1000;
    int currY = 1000;
    int x = -1;

    for (int instruction = 1; instruction <= N; ++instruction) {
        char D;
        int S;
        cin >> D >> S;
        int moveX = 0, moveY = 0;

        if (D == 'N') moveY = 1;
        else if (D == 'S') moveY = -1;
        else if (D == 'E') moveX = 1;
        else if (D == 'W') moveX = -1;

        for (int step = 1; step <= S; ++step) {
            currTime++;
            currX += moveX;
            currY += moveY;

            if (lastVisit[currX][currY] != -1) {
                int potentialX = currTime - lastVisit[currX][currY];
                if (x == -1) x = potentialX;
                else x = min(x, potentialX);
            }
            lastVisit[currX][currY] = currTime;
        }
    }

    cout << x << endl;

    return 0;
}