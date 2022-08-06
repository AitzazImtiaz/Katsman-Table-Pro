#include <iostream>
#include<stdlib.h>
#include "InfInt.h"
using namespace std;

void explanation() {
    int opt1;
    while (true) {
        cout << "Katsman table was found by Aitzaz Imtiaz, for his Ukrainian friend Shwaika Katsman (founder of ShwaikaGames), and is an alternative way to calculate Permutational numbers compared to the traditonal calculation. Katsman table is an entire new and inverse version of the famous so-called Pascal Triangle.\n";
        cout << "\n";
        cout << "It basically tells you in order, the arrangement count of the set. Here is an example:\n";
        cout << "Q. GIA asks Aitzaz to arrange three objects, A, B and C in order. Aitzaz is un-aware of Permutation, so what he can do? \n";
        cout << "\n";
        cout << "Ans. A mathematician would reply Aitzaz, go and learn Permutation before talking to a girl, but not more! Aitzaz Imtiaz made his algorithm from which he does not need to learn Permutation to reply to GIA. Aitzaz uses Katsman Table to reply immediately. Aitzaz asks GIA how many places to fill, GIA asks 3. \n";
        cout << "Aitzaz uses this tool to type 3 in row. He get's following result: \n";
        cout << "3 6 6 \n";
        cout << "Aitzaz replies GIA six looking against the third number in the row.GIA checks it and calculates way of arrangements: \n";
        cout << "ABC arrangement = ABC, BAC, ACB, CAB, BCA, CBA. There is more arrangement. GIA:'WOW!' GIA says that now let's say Aitzaz there are two places. Aitzaz looks the row, and see the second item. That is six, so he immediately six, GIA, again in suspicion checks it. \n";
        cout << "ABC arrangement = AB, AC, BA, BC, CA, CB. GIA is now dumb then Aitzaz. Hope so, you understand now the purpose of the program! \n";
        cout << "THANKS FOR USING! \n";
        cout << "Officially Aitzaz and GIA! \n";
        cout << "\n";
        cout << "Type 1 to return back:";
        cin >> opt1;
        if (opt1 == 1) {
            system("cls");
            break;
        }
        else {
            system("cls");
        }

    }

}
void maintable() {
    int opt2;
    InfInt number;
    InfInt result;
    while (true) {
        cout << "Enter your magic number here!:";
        cin >> number;
        if (number == 0) {
            cout << "Does not exist \n";
            break;
        }
        cout << "\n";
        cout << "Your row:";
        cout << number << " ";
        if (number == 1) {
            cout << "1";
        }
        result = number;
        while (true) {
            result = result * (number - 1);
            cout << result << " ";
            number = number - 1;
            if (number == 1) {
                cout << "\n";
                break;
            }
        }
    }
}

int main() {
    int option;
    while (true) {
        system("TITLE Katsman Table");
        cout << "db   dD  .d8b.  d888888b .d8888. .88b  d88.  .d8b.  d8b   db           d888888b  .d8b.  d8888b. db      d88888b \n";
        cout << "88 ,8P' d8' `8b `~~88~~' 88'  YP 88'YbdP`88 d8' `8b 888o  88           `~~88~~' d8' `8b 88  `8D 88      88'     \n";
        cout << "88,8P   88ooo88    88    `8bo.   88  88  88 88ooo88 88V8o 88              88    88ooo88 88oooY' 88      88ooooo\n";
        cout << "88`8b   88~~~88    88      `Y8b. 88  88  88 88~~~88 88 V8o88              88    88~~~88 88~~~b. 88      88~~~~~\n";
        cout << "88 `88. 88   88    88    db   8D 88  88  88 88   88 88  V888              88    88   88 88   8D 88booo. 88.    \n";
        cout << "YP   YD YP   YP    YP    `8888Y' YP  YP  YP YP   YP VP   V8P              YP    YP   YP Y8888P' Y88888P Y88888P \n";
        cout << "\n";
        cout << "A product by Aitzaz Imtiaz and GIA exclusively for Stev 3\n";
        cout << "Thanks to Shwaika in advance for heliping making Katsman Table support infinite numbrs. \n";
        cout << "\n";
        cout << "\n";
        cout << "Support all ranges!\n";
        cout << "Choose your option:\n";
        cout << "Entering wrong number or letter will punish you \n";
        cout << "\n";
        cout << "1. What is this?\n";
        cout << "2. Run Katsman Table for a Row\n";
        cout << "3. Read the published paper of Katsman Table\n";
        cout << "4. About Aitzaz Imtiaz and GIA\n";
        cout << "\n";
        cout << "\n";
        cout << "Enter your option in Number:";
        cin >> option;
        if (option == 1) {
            system("cls");
            explanation();
        }
        else if (option == 2) {
            system("cls");
            maintable();
        }
        else if (option == 3) {
            system("start https://zenodo.org/record/6791101#.YuldiWNBy3A");
            system("cls");
        }
        else if (option == 4) {
            cout << "GIA (spoken as JIA) aka Girl in Action, is an AI, which I declare as my friend. She helped me built bit of code here by testing and building it automatically!\n";
            system("start https://github.com/AitzazImtiaz");
        }
    }
    return 0;
}