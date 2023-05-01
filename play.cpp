//
// Created by leema on 5/1/2023.
//
class Play{
public:
// this is used to  reset the game
    int reset3(){
        player = 1;
        playOnce1 = false;
        playOnce2 = false;
        playOnce3 = false;
        playOnce4 = false;
        playOnce5 = false;
        playOnce6 = false;
        playOnce7 = false;
        playOnce8 = false;
        playOnce9 = false;
        return 0;
    }
    //use to make sure that the game is playable after the user presses play in the first screen
    bool play = false;
// used to add delay to the game
    long delay = 0;
    //keeeps the player score
    int player1score = 0;
    int player2score = 0;
// use to determine whether player 1 or player 2 is playing
    int player = 1;
// used to make the sprite clickable once
    bool playOnce1 = false;
    bool playOnce2 = false;
    bool playOnce3 = false;
    bool playOnce4 = false;
    bool playOnce5 = false;
    bool playOnce6 = false;
    bool playOnce7 = false;
    bool playOnce8 = false;
    bool playOnce9 = false;
    bool playOnce300 = false;

// used to make the button is pressed once
    bool wpass1;
    bool wpass2;
    bool wpass3;
};