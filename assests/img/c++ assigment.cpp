#include <iostream>
#include <string>
using namespace std;  // Add this line

int main() {
    string names[5] = {"mild", "medium", "sweet", "hot", "zesty"};
    int sales[5];
    int i, HighestSell = 0, HighestName, LowestSell = 0, LowestName;

    int total = 0;

    for (i = 0; i <= 4; i++) {
        do {
            cout << "Enter number of sold " << names[i] << " jars: ";
            cin >> sales[i];

            if (sales[i] < 0) {
                cout << "Please enter a non-negative value.\n";
            }
        } while (sales[i] < 0);

        total += sales[i];

        if (i == 0) {
            HighestSell = sales[i];
            HighestName = i;
            LowestSell = sales[i];
            LowestName = i;
        }

        if (HighestSell < sales[i]) {
            HighestSell = sales[i];
            HighestName = i;
        }

        if (LowestSell > sales[i]) {
            LowestSell = sales[i];
            LowestName = i;
        }
    }

    cout << "There were sold:\n";
    for (i = 0; i <= 4; i++) {
        cout << sales[i] << " " << names[i] << " jars\n";
    }

    cout << "Total sales: " << total << " jars\n";
    cout << "Highest sales: " << HighestSell << " (" << names[HighestName] << " salsa)\n";
    cout << "Lowest sales: " << LowestSell << " (" << names[LowestName] << " salsa)\n";

    return 0;
    //ali sarhan
}