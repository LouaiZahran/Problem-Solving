#include<bits/stdc++.h>
#define prArr(Arr,n) for(int _=0;_<n;_++)   cout<<(Arr)[_]<<" ";
using namespace std;

char grid[3][3];

void print_grid(){
    cout << "\n";
    for(int i=0; i<3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << grid[i][j] << "|\n"[j == 2];
        }
        if(i != 2)
            cout << "------\n";
    }
    cout << "\n";
}

bool game_ended(){
    for(int i=0; i<3; i++){
        if((grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2] && grid[i][0] != '\0')
         ||(grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i] && grid[0][i] != '\0')){
            cout << (grid[i][0] == 'X'? "Player 1 ":"Player 2 ") << "won!";
            return true;
        }
    }

    if((grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2] && grid[1][1] != '\0')
    || (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0] && grid[1][1] != '\0')){
        cout << (grid[1][1] == 'X'? "Player 1 ":"Player 2 ") << "won!";
        return true;
    }

    return false;
}

int main()
{
    cout << "Welcome to tic-tac-toe!\n";
    print_grid();

    for(int i=0; i<9; i++){
        int x, y;
        cout << "Player " << 1 + (i&1) << " turn: ";
        cin >> x >> y;
        grid[x][y] = ((i&1)? 'O':'X');
        print_grid();
        if(game_ended())
            return 0;
    }

    cout << "The game is a tie!";
    return 0;
}

