#include <iostream>
using namespace std;

void getScore(int& score);
void calcAverage(int scores[]);
int findLowest(int scores[]);

int main() {
    int scores[5];

    // user score input 
    cout << "Enter five test scores:\n";
    for (int i = 0; i < 5; ++i) {
        getScore(scores[i]);
    }

    calcAverage(scores);

    return 0;
}

// ask the user for a test score
void getScore(int& score) {

    cout << "Enter a test score (0-100): ";
    cin >> score;
    if (score < 0 || score > 100) {
        cout << "Invalid score. Please enter a score between 0 and 100.\n";
    }

}

// calculate and display the average of the four highest scores
void calcAverage(int scores[]) {
    int lowest = findLowest(scores);
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        if (i != lowest) {
            sum += scores[i];
        }
    }
    double average = static_cast<double>(sum) / 4;
    cout << "Average of the four highest scores: " << average << "\n";
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
