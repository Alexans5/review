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

    void displayResults() {
        cout << "side facing up: " << sideUp << endl;
    }
};

int main() {
    
    srand(time(0));

    Coin coin;
    cout << "Initial side: " << coin.getSideUp() << endl;

    int heads = 0;
    int tails = 0;

    for (int i = 0; i < 20; ++i) {

        coin.toss();
        coin.displayResults();

        //cout << "Side facing up: " << coin.getSideUp() << endl;

        if (coin.getSideUp() == "heads") {
            heads++;
        }

        else {
            tails++;
        }
    }

    cout << "Number of heads: " << heads <<endl;
    cout << "Number of tails: " << tails <<endl;

    return 0;
}
