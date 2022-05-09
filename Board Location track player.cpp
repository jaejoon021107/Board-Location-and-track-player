// mypart project pt2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void spotNames(string nameLocation, string color, int cost, int playerLocation, bool passgo)     // this function will keep track of each players on the board. 
{                                                                                               // function wil provide the essential information for respective spot on the board.
    switch (playerLocation) {                                                                   // there are 40 different cases under switch statement since there are 40 different spots. 
    case 0:                                                                                      
        nameLocation = "Go";
        passgo = true;
        cout << nameLocation << endl;

        break;
    case 1:

        nameLocation = "Mediterranean Ave. \nPrice $60";
        cost = 60;
        color = "\nBrown";
        cout << nameLocation << " " << color << endl;

        break;
    case 2:
        nameLocation = "Community Chest ";
        cout << nameLocation << endl;

        break;
    case 3:
        nameLocation = "Baltic Ave. \nPrice $60 ";
        cost = 60;
        color = "\nBrown";
        cout << nameLocation << " " << color << endl;

        break;
    case 4:
        nameLocation = "Income Tax \nPay $200 ";
        cout << nameLocation << endl;

        break;
    case 5:
        nameLocation = "Reading Railroad. \nPrice $200 ";
        cost = 200;
        cout << nameLocation << " " << color << endl;

        break;
    case 6:
        nameLocation = "Oriental Ave. \nPrice $100";
        cost = 200;
        color = "\nSkyblue";
        cout << nameLocation << " " << color << endl;

        break;
    case 7:
        nameLocation = "Chance Card";
        cout << nameLocation << endl;

        break;
    case 8:
        nameLocation = "Vermont Ave. \nPrice $100";
        cost = 100;
        color = "\nSkyblue";
        cout << nameLocation << " " << color << endl;

        break;
    case 9:
        nameLocation = "Conneticut Ave. \nPrice $120";
        cost = 120;
        color = "\nSkyblue";
        cout << nameLocation << " " << color << endl;

        break;
    case 10:
        nameLocation = "Just Visiting (unless you are bad boy)";
        cout << nameLocation << endl;

        break;
    case 11:
        nameLocation = "St. Charles Place \nPrice $140";
        cost = 140;
        color = "\nPink";
        cout << nameLocation << " " << color << endl;

        break;
    case 12:
        nameLocation = "Electric Company \nPay $150";
        cost = 150;
        cout << nameLocation << endl;

        break;
    case 13:
        nameLocation = "States Ave. \nPrice $140";
        cost = 140;
        color = "\nPink";
        cout << nameLocation << " " << color << endl;

        break;
    case 14:
        nameLocation = "Virginia Ave. \nPrice $160";
        cost = 160;
        color = "\nPink";
        cout << nameLocation << " " << color << endl;

        break;
    case 15:
        nameLocation = "Pennsylvania Railroad. \nPrice $200";
        cost = 200;
        cout << nameLocation << endl;

        break;
    case 16:
        nameLocation = "St. James Place \nPrice $180";
        cost = 180;
        color = "\nOrange";
        cout << nameLocation << " " << color << endl;

        break;
    case 17:
        nameLocation = "Community Chest ";
        cout << nameLocation << endl;

        break;
    case 18:
        nameLocation = "Tennessee Ave. \nPrice $180";
        cost = 180;
        color = "\nOrange";
        cout << nameLocation << " " << color << endl;

        break;
    case 19:
        nameLocation = "New York Ave. \nPrice $200";
        cost = 200;
        color = "\nOrange";
        cout << nameLocation << " " << color << endl;

        break;
    case 20:
        nameLocation = "Free Parking";
        cout << nameLocation << endl;

        break;
    case 21:
        nameLocation = "Kentucky Ave. \nPrice $220.";
        cost = 220;
        color = "\nRed";
        cout << nameLocation << " " << color << endl;

        break;
    case 22:
        nameLocation = "Chance Card";
        cout << nameLocation << endl;

        break;
    case 23:
        nameLocation = "Indiana Ave. \nPrice $220.";
        cost = 220;
        color = "\nRed";
        cout << nameLocation << " " << color << endl;

        break;
    case 24:
        nameLocation = "Illinois Ave. \nPrice $240.";
        cost = 240;
        color = "\nRed";
        cout << nameLocation << " " << color << endl;

        break;
    case 25:
        nameLocation = "B. & O. Railroad. \nPrice $200";
        cost = 200;
        cout << nameLocation << endl;

        break;
    case 26:
        nameLocation = "Atlantic Ave. \nPrice $260";
        cost = 260;
        color = "\nYellow";
        cout << nameLocation << " " << color << endl;

        break;
    case 27:
        nameLocation = "Ventnor Ave. \nPrice $260";
        cost = 260;
        color = "\nYellow";
        cout << nameLocation << " " << color << endl;

        break;
    case 28:
        nameLocation = "Water Works \nPrice $150";
        cost = 150;
        cout << nameLocation << endl;

        break;
    case 29:
        nameLocation = "Marvin Gardens \nPrice $280";
        cost = 280;
        color = "\nYellow";
        cout << nameLocation << " " << color << endl;

        break;
    case 30:
        nameLocation = "Go to Jail.";
        cout << nameLocation;

        break;
    case 31:
        nameLocation = "Pacific Ave. \nPrice $300";
        cost = 300;
        color = "\nGreen";
        cout << nameLocation << " " << color << endl;

        break;
    case 32:
        nameLocation = "North Carolina Ave. \nPrice $300";
        cost = 300;
        color = "\nGreen";
        cout << nameLocation << " " << color << endl;

        break;
    case 33:
        nameLocation = "Community Chest";
        cout << nameLocation << endl;

        break;
    case 34:
        nameLocation = "Pennsylvania Ave. \nPrice $320";
        cost = 320;
        color = "\nGreen";
        cout << nameLocation << " " << color << endl;

        break;
    case 35:
        nameLocation = "Short Line \nPrice $200";
        cost = 200;
        cout << nameLocation << endl;

        break;
    case 36:
        nameLocation = "Chance Card";
        cout << nameLocation << endl;

        break;
    case 37:
        nameLocation = "Park Place \nPrice $350";
        cost = 350;
        color = "\nBlue";
        cout << nameLocation << " " << color << endl;

        break;
    case 38:
        nameLocation = "Luxury Tax \nPay $100";
        cost = 100;
        cout << nameLocation << endl;

        break;
    case 39:
        nameLocation = "BoardWalk \nPrice $400";
        cost = 400;
        color = "\nBlue";
        cout << nameLocation << " " << color << endl;

        break;
    }
}

int main()
{
    int spotnum = 25;
    string locationname;
    string usrcolor;
    int usrcost = 0;
    bool isPlayerPassGo = true;
    spotNames(locationname, usrcolor, usrcost, spotnum, isPlayerPassGo);
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file