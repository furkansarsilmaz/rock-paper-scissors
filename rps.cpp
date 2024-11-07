#include <iostream>
#include <ctime>
char getUserChoice();
char getComputerChoice();
void winner(char player, char computer);
void showChoice(char choice);

int main(){
    char player ;
    char computer ;
    player = getUserChoice();
    std::cout << "Your choice : ";
    showChoice(player);
    computer = getComputerChoice();
    std::cout<<"computer's choice : "; 
    showChoice(computer);
    winner(player,computer);

    return 0 ;
}

char getUserChoice(){
    char player ;
    do{
        std::cout << "*********************\n";
        std::cout << "r for : Rock\n" ;
        std::cout << "p for : Paper\n" ;
        std::cout << "s for : Scissors\n" ;
        std::cout << "*********************\n";
        std::cout << "Your choice ?: \n";
        std::cin >> player ;
    } while (player != 'r' && player !='p' && player != 's');
    return player ;
}
char getComputerChoice(){
    srand(time(NULL));
    int num = rand() % 3 + 1;
    switch(num){
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
    }
    return 0;
}

void winner(char player, char computer){
    switch(player){
        case 'r':
            if(computer == 'r'){std::cout<<"It's a tie\n";}
            else if(computer == 'p'){std::cout<<"You lose\n";}
            else{std::cout<<"You win !\n";}
            break;
        
        case 'p':
            if(computer == 'r'){std::cout<<"You win !\n";}
            else if(computer == 'p'){std::cout<<"It's a tie\n";}
            else{std::cout<<"You lose..\n";}
            break;
        
        case 's':
            if(computer == 'r'){std::cout<<"You lose..\n";}
            else if(computer == 'p'){std::cout<<"You win !\n";}
            else{std::cout<<"It's a tie\n";}
            break;
    }
}

void showChoice(char choice){
    switch(choice){
        case 'r':
            std::cout<<"Rock\n";
            break;
        case 'p':
            std::cout<<"Paper\n";
            break;
        case 's':
            std::cout<<"Scissors\n";
            break;
    }
}