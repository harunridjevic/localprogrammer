#include <iostream>
#include <stdlib.h> 
using namespace std;

int main()
{
    
    char board[3][3];
    int turn = 1;
    int place;
    
    //init
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            board[i][j] = '-';
    
    while(1){
        //player's turn
        cin>>place;
        switch(place){
            case 1:
                if(turn){
                board[0][0]='x';
                turn = 0;
                }else{
                board[0][0]='o';
                turn = 1;
                }
            break;
            case 2:
                if(turn){
                board[0][1]='x';
                turn = 0;
                }else{
                board[0][1]='o';
                turn = 1;
                }
            break;
            case 3:
                if(turn){
                board[0][2]='x';
                turn = 0;
                }else{
                board[0][2]='o';
                turn = 1;
                }
            break;
            case 4:
                if(turn){
                board[1][0]='x';
                turn = 0;
                }else{
                board[1][0]='o';
                turn = 1;
                }
            break;
            case 5:
                if(turn){
                board[1][1]='x';
                turn = 0;
                }else{
                board[1][1]='o';
                turn = 1;
                }
            break;
            case 6:
                if(turn){
                board[1][2]='x';
                turn = 0;
                }else{
                board[1][2]='o';
                turn = 1;
                }
            break;
            case 7:
                if(turn){
                board[2][0]='x';
                turn = 0;
                }else{
                board[2][0]='o';
                turn = 1;
                }
            break;
            case 8:
                if(turn){
                board[2][1]='x';
                turn = 0;
                }else{
                board[2][1]='o';
                turn = 1;
                }
            break;
            case 9:
                if(turn){
                board[2][2]='x';
                turn = 0;
                }else{
                board[2][2]='o';
                turn = 1;
                }
            break;
            
            
        }
        
        //Checking if someone won
        if((board[0][0] == 'x' && board[0][1] == 'x' && board[0][2] == 'x')||(board[0][0] == 'o' && board[0][1] == 'o' && board[0][2] == 'o')){
              break;
            }
        else if((board[1][0] == 'x' && board[1][1] == 'x' && board[1][2] == 'x')||(board[1][0] == 'o' && board[1][1] == 'o' && board[1][2] == 'o')){
              break;
            }
         else if((board[2][0] == 'x' && board[2][1] == 'x' && board[2][2] == 'x')||(board[2][0] == 'o' && board[2][1] == 'o' && board[2][2] == 'o')){
              break;
            }
         else if((board[0][0] == 'x' && board[1][0] == 'x' && board[2][0] == 'x')||(board[0][0] == 'o' && board[1][0] == 'o' && board[2][0] == 'o')){
              break;
            }
         else if((board[0][1] == 'x' && board[1][1] == 'x' && board[2][1] == 'x')||(board[0][1] == 'o' && board[1][1] == 'o' && board[2][1] == 'o')){
              break;
            }
         else if((board[0][2] == 'x' && board[1][2] == 'x' && board[2][2] == 'x')||(board[0][2] == 'o' && board[1][2] == 'o' && board[2][2] == 'o')){
              break;
            }
         else if((board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x')||(board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o')){
              break;
            }
         else if((board[0][2] == 'x' && board[1][1] == 'x' && board[2][0] == 'x')||(board[0][2] == 'o' && board[1][1] == 'o' && board[2][0] == 'o')){
              break;
            }
        //writeout
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++)
                cout << board[i][j];
            cout<<endl;
        }
    }
    
    //Declaring the winner
    if(turn)
        cout<<"O Won!";
    else
        cout<<"X Won!";
    return 0;
}