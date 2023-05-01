

// class that checks and has the wining condition
class winCon{
public:
    //this will be used to check if o or x won and what should be displayed
    int oWin = 0;
    int xWin = 0;

    // this keeps tracks of how many times the players play(both combined)
    int playCount = 0;
    // the spots win be set to either 1 for o or 2 for X and use to check for the win condition function
    int spot1 = 11;
    int spot2 = 12;
    int spot3 = 13;
    int spot4 = 14;
    int spot5 = 15;
    int spot6 = 16;
    int spot7 = 17;
    int spot8 = 18;
    int spot9 = 19;

    // this function is used to  reset everything to the default state so that we can play multiple times
    int reset2(){
        oWin = 0;
        xWin = 0;
        playCount = 0;
        spot1 = 11;
        spot2 = 12;
        spot3 = 13;
        spot4 = 14;
        spot5 = 15;
        spot6 = 16;
        spot7 = 17;
        spot8 = 18;
        spot9 = 19;

        return 0;
    }

    // function that checks if someone won and set Owin or Xwin  to 1
    int ifWinGame(){
        if (playCount >= 5){
            if (spot1 == spot2 && spot2 == spot3 ){
                if (spot1 == 1){
                    oWin = 1;
                }
                else if (spot1 == 2){
                        xWin = 1;
                }
            }

            else if (spot4 == spot5 && spot5 == spot6 ){
                if (spot4 == 1){
                    oWin = 1;
                }
                else if (spot4 == 2){
                    xWin = 1;
                }
            }

            else if (spot7 == spot8 && spot8 == spot9 ){
                if (spot7 == 1){
                    oWin = 1;
                }
                else if (spot7 == 2){
                    xWin = 1;
                }
            }

            else if (spot1 == spot4 && spot4 == spot7 ){
                if (spot1 == 1){
                    oWin = 1;
                }
                else if (spot1 == 2){
                    xWin = 1;
                }
            }

            else if (spot2 == spot5 && spot5 == spot8 ){
                if (spot2 == 1){
                    oWin = 1;
                }
                else if (spot2 == 2){
                    xWin = 1;
                }
            }

            else if (spot3 == spot6 && spot6 == spot9 ){
                if (spot3 == 1){
                    oWin = 1;
                }
                else if (spot3 == 2){
                    xWin = 1;
                }
            }

            else if (spot1 == spot5 && spot5 == spot9 ){
                if (spot1 == 1){
                    oWin = 1;
                }
                else if (spot1 == 2){
                    xWin = 1;
                }
            }

            else if (spot3 == spot5 && spot5 == spot7 ){
                if (spot3 == 1){
                    oWin = 1;
                }
                else if (spot3 == 2){
                    xWin = 1;
                }
            }

        }
        return 0;
    }
};

