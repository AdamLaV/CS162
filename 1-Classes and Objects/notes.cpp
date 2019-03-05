#include <iostream>
#include <string>
using namespace std;

// a class is a datatype or a blueprint for a new datatype
class Book {
    public:
        string title;
        string author;
        int pages;
};

int main()
{
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    cout << book1.title << endl;

    return 0;
}

// What is an boject? -- Bicycle 
// Has Attributes -- color: black
//                 -- brand: Globe
//                 -- price: $50


// Has Behaviors 
//          -- peddle()
//          -- break()
//          -- chnageGears()

// Constructor: designed to perfrom initializing

-------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

const int WALL_SIZE = 10;
// gridFiller function
void gridFiller(char grid[WALL_SIZE][WALL_SIZE]);

// radiationChecker function
void radiationChecker(char grid[WALL_SIZE][WALL_SIZE], int x, int y);

// contaminationChecker function
int contaminationChecker(char radiationZone[WALL_SIZE][WALL_SIZE]);

// safetyChecker function
void safetyChecker(char grid[WALL_SIZE][WALL_SIZE]);

// printWall function
void printWall(char currentWall[WALL_SIZE][WALL_SIZE]);

int main()
{

    char grid[WALL_SIZE][WALL_SIZE] =
    {{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    ,{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    ,{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    ,{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    ,{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    ,{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    ,{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    ,{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    ,{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
    ,{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}};

    //get user input
    int x, y;
    cout << "Enter contiminated location: ";
    cin >> x >> y;
    cout << endl;

    //fill the area with #
    gridFiller(grid);

    //check if the radiation can leak
    radiationChecker(grid, x, y);

    //checks if the area is safe or not
    safetyChecker(grid);

    //prints the amount of contaminated squares
    cout << "\n contaminated area: " << contaminationChecker(grid) << endl;


    return 0;
}


// gridFiller function
void gridFiller(char grid[WALL_SIZE][WALL_SIZE]){
    int x, y;
    cout << "Enter wall locations (x y), followed by 0 0 to indicate end of input: ";
    for (int i = 0; i < 100; i++){
        cin >> x >> y;
        if (x == 0 && y == 0){
            break;
        }
        else
            grid[x][y] = '#';
    }
}

// radiationChecker function
void radiationChecker(char grid[WALL_SIZE][WALL_SIZE], int x, int y){
    if (x < 0 || y < 0 || x > WALL_SIZE || y > WALL_SIZE){
        return;
    }
    if (grid[x][y] != ' '){
        return;
    }

    grid[x][y] = '*';

    radiationChecker(grid, x + 1 , y + 1 );
    radiationChecker(grid, x + 1 , y - 1 );
    radiationChecker(grid, x - 1 , y + 1 );
    radiationChecker(grid, x - 1 , y - 1 );
    radiationChecker(grid, x + 1 , y );
    radiationChecker(grid, x - 1 , y );
    radiationChecker(grid, x , y + 1 );
    radiationChecker(grid, x , y - 1 );
}

// contaminationChecker function
int contaminationChecker(char radiationZone[WALL_SIZE][WALL_SIZE]){
    int contaminatedArea = 0;
    for (int i = 0; i < WALL_SIZE; i++){
        for (int j = 0; j < WALL_SIZE; j++){
            if (radiationZone[i][j] == '*')
                contaminatedArea++;
        }
    }
    return contaminatedArea;
}

// safetyChecker function
void safetyChecker(char grid[WALL_SIZE][WALL_SIZE]){
    for (int i = 0; i < WALL_SIZE; i++){
        if (grid[0][i] != ' '){
            printWall(grid);
            cout << "Not Safe! ";
            break;
        }
        else if (grid[i][0] != ' '){
            printWall(grid);
            cout << "Not Safe! ";
            break;
        }
        else if (grid[WALL_SIZE-1][i] != ' '){
            printWall(grid);
            cout << "Not Safe! ";
            break;
        }
        else if (grid[i][WALL_SIZE-1] != ' '){
            printWall(grid);
            cout << "Not Safe! ";
            break;
        }
        else {
            printWall(grid);
            cout << "Safe! ";
            break;
        }
    }
}

// printWall function
void printWall(char currentWall[WALL_SIZE][WALL_SIZE]) {
    cout << "   ";
    for(int i = 0; i < WALL_SIZE; i++)
        cout << i << " ";
    cout << endl;
    for(int j = 0; j < WALL_SIZE; j++) {
        cout << j << "  ";
        for(int k = 0; k < WALL_SIZE; k++) {
            cout << currentWall[j][k] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
}
