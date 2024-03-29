/*
Author: Alex Stewart
Date: 3/25/24
Puurpose: to add the highest 4 test scores and average them
*/

#include <iostream>
using namespace std;

void getScore(int& score);
void average(int scores[]);
int findLowest(int scores[]);

int main() {
    int scores[5];

    cout << "Enter five test scores:\n";
    for (int i = 0; i < 5; ++i) {
        getScore(scores[i]);
    }

    average(scores);

    return 0;
}

// ask the user for 5 test score
void getScore(int& score) {

    cout << "Enter a test score (0-100): ";
    cin >> score;
    if (score < 0 || score > 100) {
        cout << "Invalid score. Please enter a score between 0 and 100.\n";
    }

}

// calculate and display the average of the four highest scores
void average(int scores[]) {
    int lowest = findLowest(scores);
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        if (i != lowest) {
            sum += scores[i];
        }
    }
    double avg = static_cast<double>(sum) / 4;
    cout << "Average of the four highest scores: " << avg << "\n";
}

// find and return the lowest of the five scores passed to it
int findLowest(int scores[]) {
    int lowest = 0;
    for (int i = 1; i < 5; ++i) {
        if (scores[i] < scores[lowest]) {
            lowest = i;
        }
    }
    return lowest;
}