// CSC 134
// M5LAB1
// Toni Wilson
// 03/31/2025

#include <iostream>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
[name]
[date]
This template serves as a starting point
for your own program. We'll be using
void functions to tell a simple story,
where the user gets to make choices.

You can fork this template by clicking on the name above, then click the three
dots on the top right, and click 'fork repl'. This makes a copy for you to use.
*/

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();

// choice 1
void choice_front_door();

// choice 2
void choice_back_door();
// choices within choice 2
void choice_explore_further();
void choice_yeah_no_go_home();

// choice 3
void choice_go_home();
// choices within choice 3
void choice_left_hallway();
// choice withing left hallway
void choice_leave_the_house();
void choice_right_hallway();


int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
    cout << "Try the front door." << endl;
    cout << "It's locked. " << endl;
    cout << "Do you:" << endl;
    cout << "1. Check around back" << endl;
    cout << "2. Give up and go home" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        choice_back_door();
    } else if (2 == choice) {
        choice_go_home();
    }
}

void choice_back_door() { 
    cout << "Sneak in through the back." << endl;
    cout << "There's a pool of blood and the door ajar." << endl; 
    cout << "Do you:" << endl;
    cout << "1. Explore the house further." << endl;
    cout << "2. Yeah no... We're going home." << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        choice_explore_further();
    } else if (2 == choice) {
        choice_yeah_no_go_home();
    }

}

void choice_go_home() { 
    cout << "You chose to go back home." << endl;
    cout << "You go past the gate, waiting to cross the road." << endl; 
    cout << "As soon as you take your first step, a horn blares and your vision goes dark." << endl; 
}

void choice_explore_further() {
    cout << "You chose to go further into the house." << endl;   
    cout << "With each step into the home, more and more chills run down your spine." << endl;
    cout << "You notice two hallways. Left and right." << endl;
    cout << "Do you:" << endl;
    cout << "1. Take the left hallway." << endl;
    cout << "2. Take the right hallway." << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        choice_left_hallway();
    } else if (2 == choice) {
        choice_right_hallway();
    }
}

void choice_left_hallway() {
    cout << "You chose to go down the left hallway." << endl;
    cout << "It's a dead end." << endl;
    cout << "Do you:" << endl;
    cout << "1. Go down the right hallway." << endl;
    cout << "2. Leave the house." << endl;
    int choice;
    cout << "Choice: ";
    cin >> choice;
    if (1 == choice) {
        choice_right_hallway();
    } else if (2 == choice) {
        choice_leave_the_house();
    }
}

void choice_leave_the_house() {
    cout << "You turn to leave the house and come face to face with a shadowy figure." << endl;
    cout << "As soon as you blink, you open your eyes to nothingness." << endl;
    cout << "YOU ARE DEAD" << endl;
}

void choice_right_hallway() {
    cout << "You chose to go down the right hallway." << endl;
    cout << "You come face to face with a pale woman with long, straggly hair." << endl;
    cout << "She is holding a large mace." << endl;
    cout << "YOU ARE DEAD" << endl;
}

void choice_yeah_no_go_home() {
    cout << "You chose to go back home after seeing a pool of blood by the back door." << endl;
}