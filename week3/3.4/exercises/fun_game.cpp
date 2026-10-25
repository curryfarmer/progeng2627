#include <iostream> 
#include <cstdlib> 
#include <string>
#include <ctime>

int main(){
    std::cout << "this is a rock paper scissors game, type 0 to exit" << std::endl;
    int ai_score = 0, player_score = 0;
    int ai_num_input, player_num_input;


    std::string player_input, ai_input; 

    std::cout << "Choose rock paper scissors, or 0 to exit" << std::endl; 

    std::cin >> player_input; 
    srand(time(0));

    while(player_input != "0"){

        //converting player_input; 

        if(player_input == "rock"){
            player_num_input = 1; 
        } else if(player_input == "scissors"){
            player_num_input = 2; 
        } else if(player_input == "paper"){
            player_num_input = 3; 
        }

        // ai inputs 

        ai_num_input = (rand() % 3) + 1;

        if(ai_num_input == 1){
            ai_input = "rock"; 
        }else if(ai_num_input == 2){
            ai_input ="scissors";
        }else if(ai_num_input ==3){
            ai_input = "paper";
        }

        //computing results 
        std::string result;

        if (player_num_input == ai_num_input) {
            result = "draw";
        } else if (player_num_input == 1 && ai_num_input == 2) {
            result = "player";   // rock beats scissors
        } else if (player_num_input == 2 && ai_num_input == 3) {
            result = "player";   // scissors beats paper
        } else if (player_num_input == 3 && ai_num_input == 1) {
            result = "player";   // paper beats rock
        } else {
            result = "ai";
        }

        //score update 
        if (result == "player") {
            player_score = player_score + 1;
        } else if (result == "ai") {
            ai_score = ai_score + 1;
        }

        //printing results 
        std::cout << "You chose " << player_input << ", AI chose " << ai_input << std::endl;

        if (result == "draw") {
            std::cout << "It's a draw." << std::endl;
        } else if (result == "player") {
            std::cout << "You win this round." << std::endl;
        } else {
            std::cout << "AI wins this round." << std::endl;
        }

        std::cout << "Score: You " << player_score << " - AI " << ai_score << std::endl;

        //core gameplay loop 
        std::cout << "Choose rock paper scissors, or 0 to exit" << std::endl; 
        std::cin >> player_input; 



    }

}