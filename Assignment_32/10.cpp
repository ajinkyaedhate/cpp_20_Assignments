// 10.Create a C++ class for player objects with the following attributes: player no., name, 
// number of matches and number of goals done in each match. The number of matches 
// varies for each player. Write a parameterized constructor which initializes player no., 
// name, number of matches and creates an array for number of goals and number of 
// matches dynamically.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player {
private:
    int playerNo;
    string playerName;
    int numMatches;
    vector<int> goalsInMatches;

public:
    Player(int pNo, const string& name, int matches) : playerNo(pNo), playerName(name), numMatches(matches) {
        goalsInMatches.resize(matches, 0); // Initializing goalsInMatches vector with size 'matches' and all elements as 0
    }

    // Function to set the number of goals in a specific match
    void setGoalsInMatch(int matchNo, int goals) {
        if (matchNo >= 1 && matchNo <= numMatches) {
            goalsInMatches[matchNo - 1] = goals;
        } else {
            cout << "Invalid match number." << endl;
        }
    }

    // Function to display player information
    void displayPlayerInfo() const {
        cout << "Player No.: " << playerNo << endl;
        cout << "Name: " << playerName << endl;
        cout << "Number of Matches: " << numMatches << endl;
        cout << "Goals in Each Match:" << endl;
        for (int i = 0; i < numMatches; ++i) {
            cout << "Match " << (i + 1) << ": " << goalsInMatches[i] << " goals" << endl;
        }
    }
};

int main() {
    Player player1(1, "John Doe", 5); // Creating a Player object with player number 1, name "John Doe", and 5 matches
    player1.setGoalsInMatch(1, 2); // Setting 2 goals for match 1
    player1.setGoalsInMatch(3, 1); // Setting 1 goal for match 3
    player1.displayPlayerInfo(); // Displaying player information

    return 0;
}
