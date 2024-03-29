/*
Author: Alex Stewart 
Date: 3/26/24
Purpose: to randomly assign a value to a coin flip and try to reach a dollar
*/

#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;

class Coin {
private:
    string sideUp;

public:
    Coin() {
        toss();
    }

    void toss() {
        int number = rand();

        if (number % 2 == 0) {
            sideUp = "heads";
        }
        else {
            sideUp = "tails";
        }
    }

    string getSideUp() {
        return sideUp;
    }
};

int main() {
    double total = 0.0;
    do {
        srand(time(0));

        Coin quarter;
        Coin dime;
        Coin nickel;

        
        int count = 1;

        while (total < 1.0) {

            quarter.toss();
            dime.toss();
            nickel.toss();

            if (quarter.getSideUp() == "heads") {
                total += .25;
                cout << count << " heads +.25\n";
                count++;
            }
            if (quarter.getSideUp() == "tails") {
                cout << count << " tails\n";
                count++;
            }
            if (dime.getSideUp() == "heads") {
                total += .10;
                cout << count << " heads +.10\n";
                count++;
            }
            if (dime.getSideUp() == "tails") {
                cout << count << " tails\n";
                count++;
            }
            if (nickel.getSideUp() == "heads") {
                total += .05;
                cout << count << " heads +.05\n";
                count++;
            }
            if (nickel.getSideUp() == "tails") {
                cout << count << " tails\n";
                count++;
            }

            cout << "\n" "your total is: $" << total << endl << "\n";
        }

        if (total == 1.00) {
            cout << "CONGRATULATIONS you win!!!" << endl;
        }
        else {
            cout << "please play again" << endl;
        }
    } while (total != 1.00);
    return 0;
}
