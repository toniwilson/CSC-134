// CSC 134
// M6LAB2
// Toni Wilson
// 04/23/2025

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// Define constants for directions
enum Direction {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_DIRECTIONS = 4
};

// Direction strings for output
const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

// Define constants for rooms
enum Room {
    GREAT_ROOM = 0,
    WINERY = 1,
    LIBRARY = 2,
    GARDEN = 3,
    CELLAR = 4,
    MASTER_BEDROOM = 5,
    OFFICE = 6,
    NUM_ROOMS = 7
};

int main() {
    // Room names array
    string roomNames[NUM_ROOMS] = {
        "Great Room",
        "Winery",
        "Library",
        "Garden",
        "Cellar",
        "Master Bedroom",
        "Office"
    };
    
    // Room descriptions array
    string roomDescriptions[NUM_ROOMS] = {
        "A grand living area with a chandelier hanging above.",
        "Walls lined with the most expensive and equisite bottles of liquor.",
        "Walls lined with ancient books. The air smells of old paper.",
        "A breautifully structured and kept flower garden with large statues and fountains.",
        "A dark, damp cellar with holding cells. Each with cobwebs in the corners."
        "A large room with gold lined wallpaper, canopy bed and a heavy wardrobe.",
        "A dark, dimly lit room with a heavy mahogony desk and office chair."
    };
    
    // Adjacency list using a 2D array
    // connections[from_room][direction] = to_room or -1 if no connection
    int connections[NUM_ROOMS][NUM_DIRECTIONS];
    
    // Initialize all connections to -1 (no connection)
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }
    
    // Define the connections between rooms using the Room enum
    // Great Room connections
    connections[GREAT_ROOM][NORTH] = WINERY;            // Great Room -> North -> Winery
    connections[GREAT_ROOM][EAST] = LIBRARY;           // Great Room -> East -> Library
    connections[GREAT_ROOM][SOUTH] = -1;              // No connection south
    connections[GREAT_ROOM][WEST] = GARDEN;          // Great Room -> West -> Garden
    
    // Library connections
    connections[LIBRARY][NORTH] = MASTER_BEDROOM;     // Library -> North -> Master Bedroom
    connections[LIBRARY][EAST] = -1;                 // No connection east
    connections[LIBRARY][SOUTH] = OFFICE;           // Library -> South -> Office
    connections[LIBRARY][WEST] = GREAT_ROOM;       // Library -> West -> Great Room
    
    // Garden connections
    connections[GARDEN][NORTH] = CELLAR;             // Garden -> North -> Cellar
    connections[GARDEN][EAST] = GREAT_ROOM;         // Garden -> East -> Great Room
    connections[GARDEN][SOUTH] = -1;               // No connection south
    connections[GARDEN][WEST] = -1;               // No connection west
    
    // Winery connections
    connections[WINERY][NORTH] = -1;                // No connection north
    connections[WINERY][EAST] = MASTER_BEDROOM;     // Winery -> East -> Master Bedroom
    connections[WINERY][SOUTH] = GREAT_ROOM;      // Winery -> South -> Great Room
    connections[WINERY][WEST] = -1;              // No connection west
    
    // Cellar connections
    connections[CELLAR][NORTH] = -1;                // No connection north
    connections[CELLAR][EAST] = -1;                // No connection east
    connections[CELLAR][SOUTH] = GARDEN;          // Cellar -> South -> Garden
    connections[CELLAR][WEST] = -1;              // No connection west

    // Master Bedroom connections
    connections[MASTER_BEDROOM][NORTH] = -1;          // No connection north
    connections[MASTER_BEDROOM][EAST] = -1;          // No connection east
    connections[MASTER_BEDROOM][SOUTH] = LIBRARY;   // Master Bedroom -> South -> Library
    connections[MASTER_BEDROOM][WEST] = WINERY;    // Master Bedroom -> West -> Winery

    // Office connections
    connections[OFFICE][NORTH] = LIBRARY;             // Office -> North -> Library
    connections[OFFICE][EAST] = -1;                  // No connection south
    connections[OFFICE][SOUTH] = -1;                // No connection south
    connections[OFFICE][WEST] = -1;                // No connection south
    
    // Game state
    int currentRoom = GREAT_ROOM; // Start in the Great Room
    bool gameRunning = true;
    
    // Game loop
    while (gameRunning) {
        // Display current room information
        cout << "\nYou are in the " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;
        
        // Show available exits
        cout << "Exits: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
            if (connections[currentRoom][dir] != -1) {
                cout << DIRECTION_NAMES[dir] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) {
            cout << "none";
        }
        cout << endl;
        
        // Get player input
        string command;
        cout << "\nWhat would you like to do? ";
        cin >> command;
        
        // Process movement commands
        if (command == "north" || command == "n") {
            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "east" || command == "e") {
            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "south" || command == "s") {
            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "west" || command == "w") {
            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "quit" || command == "q") {
            gameRunning = false;
        } else {
            cout << "I don't understand that command." << endl;
        }
    }
    
    cout << "Thanks for playing!" << endl;
    return 0;
}