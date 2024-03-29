/*
Author: Alex Stewart
Date: 3/25/24
Puurpose: to add the highest 4 test scores and average them
*/

#include <iostream>
using namespace std;

void getScore(int& score);
void calcAverage(int scores[]);
int findLowest(int scores[]);

int main() {
    int scores[5];

    cout << "enter five test scores:\n";
    for (int i = 0; i < 5; ++i) {
        getScore(scores[i]);
    }

    calcAverage(scores);

    return 0;
}

// ask the user for a test score
void getScore(int& score) {

    cout << "Enter a test score 0-100: ";
    cin >> score;
    if (score < 0 || score > 100) {
        cout << "Please enter a score between 0 and 100.\n";
    }

}

// calculate and display the average of the four highest scores
void Calcaverage(int scores[]) {
    int lowest = findLowest(scores);
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        if (i != lowest) {
            sum += scores[i];
        }
    }
    double avg = static_cast<double>(sum) / 4;
    cout << "average score: " << avg << "\n";
}

// return the lowest of the five scores
int findLowest(int scores[]) {
    int lowest = 0;
    for (int i = 1; i < 5; ++i) {
        if (scores[i] < scores[lowest]) {
            lowest = i;
        }
    }
    return lowest;
}
