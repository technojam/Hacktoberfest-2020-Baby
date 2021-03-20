// Tic Tac Toe Game 
//  it is important to make use of arrays.
//  The Xs and Os are kept in different arrays, and they are passed between several functions in the code to keep track of how the game goes.
//  With the code here you can play the game choosing either X or O against the computer.
//  This Tic Tac Toe C game is such that you will have to input a numerical character, from 1 to 9,
//  to select a position for X or O into the space you want. 
// For example: if you are playing with O and you input 2, the O will go to first row – second column. If you want to place O in third row – first column, you have to enter 7. And, it is similar for the other positions. This has been done this way because it is just a console application without graphics designe

#include <stdio.h>

// to print the grid
void print_board(int board[3][3]);

// check if the possition is empty to play here
int is_empty(int grid[3][3],int i,int j);

// to check if any one wins in the grid 
int is_win(int grid[3][3],int human,int bot,int space_left);


void main(){
    int grid[3][3] ; // make the grid for the game 
    int space_left = 9,human_posi,win_num;

    // make user chose the O or X
    printf("Enter your choice to play [X/O] : ");
    int human = getchar();
    int bot;
    if (human == 111 || human == 79){
        human = 79;
        bot = 88;
    }
    else{
        human = 88;
        bot = 79;
    } 
    printf("You are assigned with - %c\n",human);    

    // start playing
    print_board(grid);
    while (space_left > 0){
        printf("Enter number [1-9] to play : ");
        scanf("%d",&human_posi);
        // check if the numbers is between 0 to 10 --> [1-9]
        if (0 < human_posi && human_posi < 10){
            // extract the index of the possiion 
            int i = human_posi/3,j = human_posi%3 ;
            if (i && j == 0){i -= 1;}
            if (j){j -= 1;}
            else if (j == 0){j =2;}            
            // printf("%d ,%d \n",i,j);

            // check if that possition is empty else continue
            if (is_empty(grid,i,j)){
                grid[i][j] = human;
                --space_left;
            }
            else { 
                printf("Not avilable try again!\n");
                continue;
            }
           
            // check if human wins
            win_num = is_win(grid,human,bot,space_left);
            if (win_num){
                // printf("win digit in human box- %d",win_num);
                // show the board one last time 
                print_board(grid);
                if (win_num == 3){
                    printf("Its a tie");
                }
                else if (win_num == 1  ){
                    printf("You Won.");
                }
                else{
                    printf("Bot Won,you loses.");
                }
                break;
            }

            // bot chance
            // first check if space left then play
            if (space_left){
                // then find the first empty step and play
                int bot_find_place = 0;
                for (int i = 0; i < 3; i++){
                    for (int j = 0; j < 3; j++){
                        if (is_empty(grid,i,j)){
                            grid[i][j] = bot;
                            --space_left;
                            bot_find_place = 1;
                            break;
                        }
                    }
                    if (bot_find_place){
                        break;
                    }
                }
                

            }

            // show the board 
            print_board(grid);

            // check if bot wins
            win_num = is_win(grid,human,bot,space_left);
            if (win_num){
                // printf("win digit in bot box- %d",win_num);
                // show the board one last time 
                print_board(grid);
                if (win_num == 3){
                    printf("Its a tie");
                }
                else if (win_num == 1  ){
                    printf("You Won.");
                }
                else{
                    printf("Bot Won,you loses.");
                }
                break;
            }
        }else{
            printf("Not Possible only (1 to 9 )\n");
        }
        
    }
}

void print_board(int grid[3][3]){
    // print grid butifully in the commad line 
    printf("\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (48 <= grid[i][j] && grid[i][j] <= 122 ){
                printf("%c ",grid[i][j]);
            }
            else{
                printf("  ");
            }
            if (j != 2){
                printf("| ");
            }
        }
        printf("\n");

        if (i != 2){
            printf("----------\n");
        } 
    }
    printf("\n");
}

int is_empty(int grid[3][3],int i,int j){
    // confirn the empty space in the grid
    if (grid[i][j] == 79  || grid[i][j] == 88 ){
        return 0;
    }
    
    return 1;
}

int is_win(int grid[3][3],int human,int bot,int space_left){
    // 0 for no win yet ,1 for human and 2 for bot and 3 for tie 
    int count_human = 0,count_bot = 0; 

    // row 
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){

            if (grid[i][j] == 79 || grid[i][j] == 88){
                if (grid[i][j] == human){
                    count_human++;
                }
                else{count_bot++;}
            }
        }
        
        if (count_human == 3){
            printf("Human win in the row \n");
            return 1;
        } 
        if (count_bot == 3){
            printf("Bot win in the row \n");
            return 2;
        }

        count_human = 0;
        count_bot = 0; 
    }

    // col
    for (int j = 0; j < 3; j++){
        for (int i = 0; i < 3; i++){
            if (grid[i][j] == 79 || grid[i][j] == 88){
                if (grid[i][j] == human){
                    count_human++;
                }
                else{count_bot++;}
            }
        }
        if (count_human == 3){
            printf("Human win in the col \n");
            return 1;
            } 
        if (count_bot == 3){
            printf("Bot win in the col \n");
            return 2;
        }

        count_human = 0;
        count_bot = 0; 
    }
    
    // diagonals 1
    if ( (grid[0][0] == 79 || grid[0][0] == 88) && (grid[1][1] == 79 || grid[1][1] == 88) && (grid[2][2] == 79 || grid[2][2] == 88)){
        // dignal is full from value 
        if (grid[0][0] == human && grid[1][1] == human && grid[2][2] == human ){
            printf("Human win in the 1st Diagonals\n");
            return 1;
        }
        else if (grid[0][0] == bot && grid[1][1] == bot && grid[2][2] == bot ){
            printf("Bot win in the 1st Diagonals\n");
            return 2;
        }
    }

    // dignals 2
    if ( (grid[0][2] == 79 || grid[0][2] == 88) && (grid[1][1] == 79 || grid[1][1] == 88) && (grid[2][0] == 79 || grid[2][0] == 88)){
        // dignal is full from value 
        if (grid[0][2] == human && grid[1][1] == human && grid[2][0] == human ){
            printf("Human win in the 2st Diagonals\n");
            return 1;
        } else if (grid[0][2] == bot && grid[1][1] == bot && grid[2][0] == bot ){
            printf("bot win in the 2st Diagonals\n");
            return 2;
        }
    }

    // if no space left and no one wins
    if (space_left == 0){
        return 3;
    }

    return 0;
}