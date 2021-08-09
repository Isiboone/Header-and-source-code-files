#include "Header.h"

//Global Var
string userinput;
int sceneNum = 1;
bool statusOfFishLife = true;

//Introduction: This introduces you to the game and what it will be about.
void Introduction1() {
	PuffPrint("----Welcome to How to Care for Puffer Fish--- \n");
	PuffPrint("You have walked into a fish store called Aquarium Arts.");
	PuffPrint("You wonder what you want to get as your first pet fish. ");
	PuffPrint("Many workers approached you with many options from Tetras to Ghost Knife fish.");

}

//Introduction 2 for part 2 
void Introduction2() {
    //int pointer
    //Pointer for the puffer fish prices as they are both different prices.
    int puffPrice1, puffPrice2;
    //Pointer
    int* thePointer;
    //setting the pointer
    thePointer = &puffPrice1;
    //Value of price 1
    *thePointer = 5;
    //setting the pointer
    thePointer = &puffPrice2;
    //Value of price 2
    *thePointer = 3;


    PuffPrint("You did not want none of all those different types of fish they offered.");
    PuffPrint("You looked around the store once more, and spotted a tank with some cute small fish.");
    PuffPrint("You asked about them");
    PuffPrint("They were Pea Puffer Fish!!!");
    PuffPrint("You decided to buy a Pea Puffer Fish!");
    cout << "The first type of pufferfish costs $" << puffPrice1 << "!\n";
    cout << "The second type of  pufferfish costs $" << puffPrice2 << "!\n";
    PuffPrint("Oh no, those were not the right prices of the pufferfish, let me change them!");
    //Switching for the passing of the pointer function and changing the price of the puffers
    change(&puffPrice1, &puffPrice2);
    cout << "These are the new prices for first type of pufferfish costs $" << puffPrice1 << "!\n";
    cout << "These are the new prices for second type of  pufferfish costs $" << puffPrice2 << "!\n";
    PuffPrint("A worker comes up to and askes ");

}
//This is for printing out the cout
void PuffPrint(string phrase) {

    cout << phrase << "\n";
}
//This is passing a pointer through a function and changing the prices of the fish. This is 
void change(int* x, int* y) {
    //int for price
    int price;
    //x = price
    price = *x;
    //x = y
    *x = *y;
    //so y = new price
    *y = price;
}

//Scene Tracker for each questions that is asked
void SceneTracker(int scene) {
    //Scene 1
    if (scene == 1) {

        PuffPrint("Hello, would you want to learn how to care for your new puffer fish ? ");
        PuffPrint("Yes or No?");
        //Scene two question
    }
    else if (scene == 2) {
        //second data type fo pointer
        string puffName1, puffName2;
        //Pointer
        string* namePointer;
        //setting the pointer
        namePointer = &puffName1;
        //name of puff 1
        *namePointer = "Anika";
        //setting the pointer
        namePointer = &puffName2;
        //name of puff 2
        *namePointer = "Carlos";
        cout << "Now, you have your pufferfish! Would you like " << puffName1 << " the puffer fish, or " << puffName2 << " the puffer fish ? \n";
        cout << "Type " << puffName1 << " or " << puffName2 << "\n";
    }
    //Scene 3 question
    else if (scene == 3) {
        PuffPrint("What size fish tank would you choose 3 gallons or 5 gallons?\n");
        PuffPrint("Type 3 or 5\n");

    }
    //Scene 4 question
    else if (scene == 4) {
        PuffPrint("You forgot to condition the water for your puffer, oh no!Do you do nothing, or do you help?\n ");
        PuffPrint("Type nothing or help\n");
    }
}
//Next Scene
int Nextscene(int scene) {
    scene = (scene + 1);
    return scene;
}
//User input
string GetUserInput() {
    //string GetUserInput(string prompt) {
    string result; // Variable to store the user input

    cin >> result;
    return result;
}

//This is for the dead print out for each scene
void dead() {

    PuffPrint("LOL you died :), better luck next time sweetheart <3!");
    statusOfFishLife = false;

}
void questions() {
    do {
        //this is for scenario one
        if (sceneNum == 1) {
            //tracks scene
            SceneTracker(sceneNum);
            //gets users input choice
            userinput = GetUserInput();
            //if yes you live
            if (userinput == "Yes") {
                sceneNum = Nextscene(sceneNum);
                //if no you die
            }
            else if (userinput == "No") {
                dead();
            }
            //this is for scenario two
        }
        else if (sceneNum == 2) {
            //tracks scene
            SceneTracker(sceneNum);
            //gets user input choice 
            userinput = GetUserInput();
            //if anika you get a nice sweet female puffer fish
            if (userinput == "Anika") {
                sceneNum = Nextscene(sceneNum);
                PuffPrint("Now you own Anika, your friendly female puffer!");
                //if carlos you get an agressive male puffer fish
            }
            else if (userinput == "Carlos") {
                sceneNum = Nextscene(sceneNum);
                PuffPrint("Now you own Carlos, your aggressive male puffer!");
                // picking nothing you die :)
            }
            else {
                dead();
            }
        }
        //this is for scenario three
        else if (sceneNum == 3) {
            //tracks scene
            SceneTracker(sceneNum);
            //gets user input choice
            userinput = GetUserInput();
            //if choosing 3 gallons you could die or live depending you next choice
            if (userinput == "3") {
                PuffPrint("Your pufferfish is sad with the 3-gallon tank, he looks like he is getting sick? Do you want to upgrade or purchase medicine?");
                PuffPrint("Type Up or Meds");
                userinput = GetUserInput();
                //you live if you choose upgrade
                if (userinput == "Up") {
                    PuffPrint("You upgrade your tank to a 5-gallon tank, you puffer fish is now happy!");
                    sceneNum = Nextscene(sceneNum);
                    // you die if you choose medicine
                }
                else if (userinput == "Meds") {
                    PuffPrint("You bought the puffer fish medicine, although it did not work… you puffer fish died... oof");
                    statusOfFishLife = false;
                }
                //you choose 5 gallons you will live
            }
            else if (userinput == "5") {
                PuffPrint("Your pufferfish is quite happy in the new tank! Your puffer fish is thriving!");
                sceneNum = Nextscene(sceneNum);
            }
            //choosing something else you will die
            else {
                dead();
            }
        }
        //this is scenario four
        else if (sceneNum == 4) {
            //tracks scene
            SceneTracker(sceneNum);
            //tracks user input choice
            userinput = GetUserInput();
            //if you choose nothing you will die
            if (userinput == "nothing") {
                PuffPrint("Your pufferfish has died due to poor water condition.");
                statusOfFishLife = false;
            }
            //if you choose help your puffer fish will live a happy life but die in the end
            else if (userinput == "help") {
                PuffPrint("You conditioned the water, and your puffer fish is happy! Your puffer fish lived happily through the years… happily ever after.");
                statusOfFishLife = false;
                //if you choosing something else you will die and have a great message :)
            }
            else {
                dead();
            }
        }
    }
    //checks the puffer fish life status like dead or alive
    while (statusOfFishLife);
}