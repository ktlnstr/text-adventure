#include <iostream>
#include <algorithm>
#include <thread>
#include <chrono>

using namespace std;

int main () {

    /* Game intro */
    cout << "\n" << "Welcome to Dreambound Escape! A mythical text based adventure game.\n";
    this_thread::sleep_for(chrono::seconds(3));
    cout << "\n" << "You wake up in a surreal landscape, where time twists and gravity bends...\n";
    cout << "There's a faint glow on the horizon, and ethereal voices echo in the distance. This isn't reality... you are trapped in a dream that you must escape from before it becomes your eternal prison.\n";
    cout << "Strange characters lurk in the shadows, their eyes gleaming with the intent to bind your soul forever. Escape before it is too late.\n";

    string choice1;
    cout << "\n" << "Do you wish to play the game? (yes/no) \n";
    cin >> choice1;

    transform(choice1.begin(), choice1.end(), choice1.begin(), ::tolower);
    if (choice1 == "yes") {
        cout << "\n" << "Great choice. I hope you have sweet dreams!\n";

    }  else if (choice1 == "no") {
        cout << "\n" << "Very well... maybe next time!\n";
        exit(0);

    }  else {
        cout << "\n" << "Invalid input. Please enter 'yes' or 'no' next time! I have no clue how to code this in a different way, sorry! :)\n";
        exit(0);
    }
    
    double escapeprobability = 50.0;

    /* Describing the rules after player has decided to play the game */
    cout << "\n" << "Unfortunately, or fortunately, every choice you make matters. Your choices can either increase or decrease your chances of escaping. Everyone starts their adventure at" << escapeprobability << "% chance of escaping!\n";
    cout << "This world has it's own set of rules, it's up to you if you would like to know them before your adventure or not...\n";

    string choice2;
    cout << "\n" << "Would you like to see the rules of this mysterious dream world? (yes/no) \n";
    cin >> choice2;

    
    transform(choice2.begin(), choice2.end(), choice2.begin(), ::tolower);
    if (choice2 == "yes") {
        cout << "\n" << "Here are the rules you should be following: \n" << 
            "1. Some may wish to bind your soul to the dream realm forever, avoid their evil glimpses. -- making eye contact with an irritated character reduces your chances of escaping by 5-30%.\n" << 
            "2. The dream whispers to those who linger around for too long. -- listening to eerie whispers can decrease your chances of escaping by 10-15%, but they may also be a source of great intel.\n" << 
            "3. RULE 3\n"; 

    } else if (choice2 == "no") {
        cout << "\n" << "Suit yourself. Good luck.\n";

    } else {
        cout << "\n" << "Invalid input. Please enter 'yes' or 'no' next time! I have no clue how to code this in a different way, sorry! :)\n";
    }
    
    cout << "\n" << "Your current escape probability: " << escapeprobability << "%\n";
    cout << "\n" << "\n" << "\n" << "\n" << "\n";

    this_thread::sleep_for(chrono::seconds(5));

    /* Game starts */
    cout << "You open your eyes and wake up confused...\n" <<
            "Well... at least you think that you have woken up.\n\n" <<
            "Everything looks so... strange and the atmosphere feels heavy... yet comforting.\n\n\n" <<
            "Further ahead you notice a strange figure... they look nervous, what do you do? \n" <<
            "A) Approach the figure.\n" <<
            "B) You wait to see what happens.\n";
    
    char choice3;
    cin >> choice3;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (choice3 == 'A' || choice3 == 'a') {
        cout << "\n" << "You attempt to approach the figure in the distance but suddently get pulled away.\n";

    } else if (choice3 == 'B' || choice3 == 'b') {
        cout << "\n" << "You wait and keep your eyes on the figure in the distance...\n\n" <<
                "when you finally turn your head away, you see someone else approaching you from afar.";

    } else {
        cout << "\n" << "Sorry, you haven't entered a valid choice!\n" <<
                "Goodbye.\n";
                return 0;
        
    }

return 0;

}