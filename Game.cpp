#include iostream
#include cstdlib

using namespace std;

int main() 
{

    char b1 = '-' , b2 = '-', b3 = '-', b4 = '-', b5 = '-', b6 = '-', b7 = '-', b8 = '-', b9 = '-';
    char turn = 'X';
    char row , col;
    char winner = '0';
    

        system(cls);

        coutt===T I C - T A C - T O E - G A M E===endl;

        cout       1     2     3  endl;
        cout    +-----+-----+-----+  endl;
        cout  1     b1        b2        b3      endl;
        cout    +-----+-----+-----+  endl;
        cout  2     b4        b5        b6      endl;
        cout    +-----+-----+-----+  endl;
        cout  3     b7        b8        b9      endl;
        cout    +-----+-----+-----+  endl;

        coutendlplayer[1] = X     Player[2] = Oendlendl;
        
        while(true)
        {

            if(turn == 'X')
            {   
                cout  PLayer1 (X) . Enter row and column (1-3)   ;
            }
            if(turn == 'O')
            {
                cout  PLayer2 (O) . Enter row and column (1-3)   ;
            }
            cin  row  col;

            if(row  '1'  row  '3'  col  '1'  col  '3')
            {
                cout  Invalid rows and column entered PLease Try Again ..........  endl;
                continue;
            }

            system(cls);

            if(row == '1' && col == '1' && b1 != 'X' && b1 != 'O')
            {
                b1 = turn;
            }
            else if(row == '1' && col == '2' && b2 != 'X' && b2 != 'O')
            {
                b2 = turn;
            }
            else if(row == '1' && col == '3' && b3 != 'X' && b3 != 'O')
            {
                b3 = turn;
            }
            else if(row == '2' && col == '1' && b4 != 'X' && b4 != 'O')
            {
                b4 = turn;
            }
            else if(row == '2' && col == '2' && b5 != 'X' && b5 != 'O')
            {
                b5 = turn;
            }
            else if(row == '2' && col == '3' && b6 != 'X' && b6 != 'O')
            {
                b6 = turn;
            }
            else if(row == '3' && col == '1' && b7 != 'X' && b7 != 'O')
            {
                b7 = turn;
            }
            else if(row == '3' && col == '2' && b8 != 'X' && b8 != 'O')
            {
                b8 = turn;
            }
            else if(row == '3' && col == '3' && b9 != 'X' && b9 != 'O')
            {
                b9 = turn;
            }
            else {
                cout  Error Selected box is not available! Enter again ...  endl;
                continue;
            }

            coutt===T I C - T A C - T O E - G A M E===endl;

            cout       1     2     3  endl;
            cout    +-----+-----+-----+  endl;
            cout  1     b1        b2        b3      endl;
            cout    +-----+-----+-----+  endl;
            cout  2     b4        b5        b6      endl;
            cout    +-----+-----+-----+  endl;
            cout  3     b7        b8        b9      endl;
            cout    +-----+-----+-----+  endl;


            if(b1 == b2 && b2 == b3 && b1 != '-')
            {
                winner = turn;
            }
            else if(b4 == b5 && b5 == b6 && b4 != '-')
            {
                winner = turn;
            }
            else if(b7 == b8 && b8 == b9 && b7 != '-')
            {
                winner = turn;
            }
            else if(b1 == b4 && b4 == b7 && b1 != '-')
            {
                winner = turn;
            }
            else if(b2 == b5 && b5 == b8 && b2 != '-')
            {
                winner = turn;
            }
            else if(b3 == b6 && b6 == b9 && b3 != '-')
            {
                winner = turn;
            }
            else if(b1 == b5 && b5 == b9 && b1 != '-')
            {
                winner = turn;
            }
            else if(b3 == b5 && b5 == b7 && b3 != '-')
            {
                winner = turn;
            }

            if(winner == 'X')
            {
                cout  Player[1] winnner !  endl;
                break ;
            }
            else if(winner == 'O')
            {
                cout  Player[2] winnner !  endl;
                break ; 
            }


            if(turn == 'X')
            {
                turn = 'O';
            }
            else if(turn == 'O')
            {
                turn = 'X';
            }

            if( (b1 == 'X'  b1 == 'O') &&
                (b2 == 'X'  b2 == 'O') &&
                (b3 == 'X'  b3 == 'O') &&
                (b4 == 'X'  b4 == 'O') &&
                (b5 == 'X'  b5 == 'O') &&
                (b6 == 'X'  b6 == 'O') &&
                (b7 == 'X'  b7 == 'O') &&
                (b8 == 'X'  b8 == 'O') &&
                (b9 == 'X'  b9 == 'O') && 
                winner != 'X' && winner != 'O' )
            {
                cout  Game Over ! Draw.....  endl;
                break ;
            }



        }




    return 0;
}