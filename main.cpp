#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "wincondion_and_reset.cpp"
#include "play.cpp"

// makes it easy to change the color in the board
#define Bcolor  Blue
#define color  Green

// the declaration foŕ the reset function that set everything back to default
// so that we can play multiple times without having to restart the program
int reset(sf::Sprite & sprite1, sf::Sprite & sprite2, sf::Sprite & sprite3, sf::Sprite & sprite4, sf::Sprite & sprite5,
          sf::Sprite & sprite6, sf::Sprite & sprite7, sf::Sprite & sprite8, sf::Sprite & sprite9,
          sf::Texture & textureclear, sf::Text & text2, sf::Text & text3,sf::Text & text11, sf::Text & text4,
          sf::RectangleShape & winMenu1, sf::RectangleShape & winMenu2,  sf::RectangleShape & winscreen, sf::Text & text5);

int main()
{
// calling the class from wincondition_and_reset.cpp
 winCon loction = winCon();
 Play playCon = Play();


// makes the window
    sf::RenderWindow window(sf::VideoMode(700, 700), "LEE'S TIC-TAC-TOE GAME",sf::Style::Default);

// shape use as background
    sf::RectangleShape shape;
    shape.setSize(sf::Vector2f(700.f, 700.f));
    shape.setPosition(0.f, 0.f);
    shape.setFillColor(sf::Color::Bcolor);
// this is the first background screen that shows up when the program is used
    sf::RectangleShape firstScreen;
    firstScreen.setSize(sf::Vector2f(700.f, 700.f));
    firstScreen.setPosition(0.f, 0.f);
    firstScreen.setFillColor(sf::Color::Bcolor);
// this will be use as the background for the winn screen and draw screen
    sf::RectangleShape winscreen;
    winscreen.setSize(sf::Vector2f(700.f, 700.f));
    winscreen.setPosition(0.f, 0.f);
    winscreen.setFillColor(sf::Color::Transparent);

// setting for the displayed text
    sf::Font myfont;
    myfont.loadFromFile("../COMIC.ttf");



// this is the rectange that will be used as a button in the fist screen to play the game
    sf::RectangleShape playGame;
    playGame.setFillColor(sf::Color::color);
    playGame.setSize(sf::Vector2f(300.f, 170.f));
    playGame.setPosition(200,400);

// these are all the text in the game
    sf::Text text("welcome to lee's tic-tac-toc game",myfont,30);
    text.setPosition(100.f,60.f);
    text.setFillColor(sf::Color::color);

    sf::Text Playagemtext("play",myfont,100);
    Playagemtext.setPosition(260.f,410.f);
    Playagemtext.setFillColor(sf::Color::Bcolor);

    sf::Text text2("o wins",myfont,200);
    text2.setPosition(70.f,50.f);
    text2.setFillColor(sf::Color::Transparent);

    sf::Text text3("x wins",myfont,200);
    text3.setPosition(70.f,50.f);
    text3.setFillColor(sf::Color::Transparent);

    sf::Text text11("you both lose",myfont,90);
    text11.setPosition(80.f,45.f);
    text11.setFillColor(sf::Color::Transparent);

    sf::Text text4("exit",myfont,100);
    text4.setPosition(90.f,395.f);
    text4.setFillColor(sf::Color::Transparent);

    sf::Text text5("play \n again",myfont,50);
    text5.setPosition(450.f,395.f);
    text5.setFillColor(sf::Color::Transparent);

    sf::Text text8("player 1 or 'o' score is : " ,myfont,30);
    text8.setPosition(150.f,30.f);
    text8.setFillColor(sf::Color:: color);

    sf::Text text9("player 2 or 'x' score is : " ,myfont,30);
    text9.setPosition(150.f,80.f);
    text9.setFillColor(sf::Color:: color);

// these are the play again and exit rectangles
    //exeit
    sf::RectangleShape winMenu1;
    winMenu1.setFillColor(sf::Color::Transparent);
    winMenu1.setSize(sf::Vector2f(250.f, 130.f));
    winMenu1.setPosition(60,400);
    // play again
    sf::RectangleShape winMenu2;
    winMenu2.setFillColor(sf::Color::Transparent);
    winMenu2.setSize(sf::Vector2f(250.f, 130.f));
    winMenu2.setPosition(390,400);


// the shape use to make the tic-tac-toe board
//horizontal 1
    sf::RectangleShape line1(sf::Vector2f(500.f, 15.f));
    line1.setFillColor(sf::Color::color);
    line1.setPosition(sf::Vector2f(100.f, 300.f));
//horizontal 2
    sf::RectangleShape line2(sf::Vector2f(500.f, 15.f));
    line2.setFillColor(sf::Color::color);
    line2.setPosition(sf::Vector2f(100.f, 460.f));
//vertical 2
    sf::RectangleShape line3(sf::Vector2f(15.f, 470.f));
    line3.setFillColor(sf::Color::color);
    line3.setPosition(sf::Vector2f(430.f, 150.f));
//vertical 1
    sf::RectangleShape line4(sf::Vector2f(15.f, 470.f));
    line4.setFillColor(sf::Color::color);
    line4.setPosition(sf::Vector2f(250.f, 150.f));

//displays a blue square
    sf::Texture textureclear;
    textureclear.loadFromFile("../clear.png");

//displays an "O" picture
    sf::Texture textureO;
    textureO.loadFromFile("../O.png");

//displays a "X" picture
    sf::Texture textureX;
    textureX.loadFromFile("../X.png");


/*
 * create a spite with a size and set the location
 * also is set with a blue texture to appear invisible
 * and duplicated 9 time for each playable area
 */
    sf::Sprite sprite1;
    sprite1.setTexture(textureclear);
    sprite1.setScale(sf::Vector2f(0.072f, .082f));
    sprite1.setPosition(sf::Vector2f(103.f, 150.f));

    sf::Sprite sprite2;
    sprite2.setTexture(textureclear);
    sprite2.setScale(sf::Vector2f(0.08f, .082f));
    sprite2.setPosition(sf::Vector2f(267.f, 150.f));

    sf::Sprite sprite3;
    sprite3.setTexture(textureclear);
    sprite3.setScale(sf::Vector2f(0.077f, .082f));
    sprite3.setPosition(sf::Vector2f(445.f, 150.f));

    sf::Sprite sprite4;
    sprite4.setTexture(textureclear);
    sprite4.setScale(sf::Vector2f(0.072f, .078f));
    sprite4.setPosition(sf::Vector2f(103.f, 318.f));

    sf::Sprite sprite5;
    sprite5.setTexture(textureclear);
    sprite5.setScale(sf::Vector2f(0.08f, .078f));
    sprite5.setPosition(sf::Vector2f(267.f, 318.f));

    sf::Sprite sprite6;
    sprite6.setTexture(textureclear);
    sprite6.setScale(sf::Vector2f(0.077f, .078f));
    sprite6.setPosition(sf::Vector2f(445.f, 318.f));

    sf::Sprite sprite7;
    sprite7.setTexture(textureclear);
    sprite7.setScale(sf::Vector2f(0.073f, .08f));
    sprite7.setPosition(sf::Vector2f(103.f, 477.f));

    sf::Sprite sprite8;
    sprite8.setTexture(textureclear);
    sprite8.setScale(sf::Vector2f(0.08f, .08f));
    sprite8.setPosition(sf::Vector2f(267.f, 477.f));

    sf::Sprite sprite9;
    sprite9.setTexture(textureclear);
    sprite9.setScale(sf::Vector2f(0.077f, .08f));
    sprite9.setPosition(sf::Vector2f(445.f, 477.f));


//use to make actions while the window is up
    while (window.isOpen()) {
// turns the int into a strring so that it could be displayed
        std::string player1scoreString = std::to_string(playCon.player1score );
        std::string player2scoreString = std::to_string(playCon.player2score);
// theses 2 are the displayed score
        sf::Text text6(player1scoreString ,myfont,30);
        text6.setPosition(490.f,32.f);
        text6.setFillColor(sf::Color:: color);

        sf::Text text7(player2scoreString ,myfont,30);
        text7.setPosition(500.f,82.f);
        text7.setFillColor(sf::Color:: color);
    //event will be used to make the game playable
        sf::Event event;
    //use to allow the make actions
        while (window.pollEvent(event)) {
            // allows use to close the window and the program
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            // allows the use to lay the game when they press play
            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left && playCon.wpass3 != true) {
                    sf::Vector2f mouse300 = window.mapPixelToCoords(sf::Mouse::getPosition(window));
                    sf::FloatRect bounds300 = playGame.getGlobalBounds();
                    if (bounds300.contains(mouse300) && playCon.playOnce300 != true) {
                        firstScreen.setFillColor(sf::Color::Transparent);
                        text.setFillColor(sf::Color::Transparent);
                        Playagemtext.setFillColor(sf::Color::Transparent);
                        playGame.setFillColor(sf::Color::Transparent);
                        playCon.play = true;
                    }
                    playCon.wpass3 = true;
                }
            }
            if (event.type == sf::Event::MouseButtonReleased) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    playCon.wpass3 = false;
                }
            }
            //this add delay betwen the click and the use being able to play
            if (playCon.play == true && playCon.delay< 20) {
                playCon.delay++;
            }


            //get the location of the sprites
            if (event.type == sf::Event::MouseButtonPressed && playCon.play == true&& playCon.delay>= 20 ) {
                if (event.mouseButton.button == sf::Mouse::Left && playCon.wpass1 != true) {

                    sf::Vector2f mouse1 = window.mapPixelToCoords(sf::Mouse::getPosition(window));
                    sf::FloatRect bounds1 = sprite1.getGlobalBounds();
                    sf::FloatRect bounds2 = sprite2.getGlobalBounds();
                    sf::FloatRect bounds3 = sprite3.getGlobalBounds();
                    sf::FloatRect bounds4 = sprite4.getGlobalBounds();
                    sf::FloatRect bounds5 = sprite5.getGlobalBounds();
                    sf::FloatRect bounds6 = sprite6.getGlobalBounds();
                    sf::FloatRect bounds7 = sprite7.getGlobalBounds();
                    sf::FloatRect bounds8 = sprite8.getGlobalBounds();
                    sf::FloatRect bounds9 = sprite9.getGlobalBounds();
                    // checks if mouse click iss in a spite and changes the sprite to a "x" or an "o"
                    // changes the player
                    //adds to playcount
                    if (bounds1.contains(mouse1) && playCon.playOnce1 != true) {
                        switch (playCon.player) {
                            case 1:
                                std::cout << "click\n";
                                sprite1.setTexture(textureO);
                                playCon.player++;
                                loction.spot1 = 1;
                                loction.playCount++;
                                playCon.playOnce1 = true;
                                break;
                            case 2:
                                std::cout << "click\n";
                                sprite1.setTexture(textureX);
                                playCon.player--;
                                loction.spot1 = 2;
                                loction.playCount++;
                                playCon.playOnce1 = true;
                                break;
                        }
                    }
                    if (bounds2.contains(mouse1) && playCon.playOnce2 != true) {
                        switch (playCon.player) {
                            case 1:
                                std::cout << "click\n";
                                sprite2.setTexture(textureO);
                                playCon.player++;
                                loction.spot2 = 1;
                                loction.playCount++;
                                playCon.playOnce2 = true;
                                break;
                            case 2:
                                std::cout << "click\n";
                                sprite2.setTexture(textureX);
                                playCon.player--;
                                loction.spot2 = 2;
                                loction.playCount++;
                                playCon.playOnce2 = true;
                                break;
                        }
                    }
                    if (bounds3.contains(mouse1) && playCon.playOnce3 != true) {
                        switch (playCon.player) {
                            case 1:
                                std::cout << "click\n";
                                sprite3.setTexture(textureO);
                                playCon.player++;
                                loction.spot3 = 1;
                                loction.playCount++;
                                playCon.playOnce3 = true;
                                break;
                            case 2:
                                std::cout << "click\n";
                                sprite3.setTexture(textureX);
                                playCon.player--;
                                loction.spot3 = 2;
                                loction.playCount++;
                                playCon.playOnce3 = true;
                                break;
                        }
                    }
                    if (bounds4.contains(mouse1) && playCon.playOnce4 != true) {
                        switch (playCon.player) {
                            case 1:
                                std::cout << "click\n";
                                sprite4.setTexture(textureO);
                                playCon.player++;
                                loction.spot4 = 1;
                                loction.playCount++;
                                playCon.playOnce4 = true;
                                break;
                            case 2:
                                std::cout << "click\n";
                                sprite4.setTexture(textureX);
                                playCon.player--;
                                loction.spot4 = 2;
                                loction.playCount++;
                                playCon.playOnce4 = true;
                                break;
                        }
                    }
                    if (bounds5.contains(mouse1) && playCon.playOnce5 != true) {
                        switch (playCon.player) {
                            case 1:
                                std::cout << "click\n";
                                sprite5.setTexture(textureO);
                                playCon.player++;
                                loction.spot5 = 1;
                                loction.playCount++;
                                playCon.playOnce5 = true;
                                break;
                            case 2:
                                std::cout << "click\n";
                                sprite5.setTexture(textureX);
                                playCon.player--;
                                loction.spot5 = 2;
                                loction.playCount++;
                                playCon.playOnce5 = true;
                                break;
                        }
                    }
                    if (bounds6.contains(mouse1) && playCon.playOnce6 != true) {
                        switch (playCon.player) {
                            case 1:
                                std::cout << "click\n";
                                sprite6.setTexture(textureO);
                                playCon.player++;
                                loction.spot6 = 1;
                                loction.playCount++;
                                playCon.playOnce6 = true;
                                break;
                            case 2:
                                std::cout << "click\n";
                                sprite6.setTexture(textureX);
                                playCon.player--;
                                loction.spot6 = 2;
                                loction.playCount++;
                                playCon.playOnce6 = true;
                                break;
                        }
                    }
                    if (bounds7.contains(mouse1) && playCon.playOnce7 != true) {
                        switch (playCon.player) {
                            case 1:
                                std::cout << "click\n";
                                sprite7.setTexture(textureO);
                                playCon.player++;
                                loction.spot7 = 1;
                                loction.playCount++;
                                playCon.playOnce7 = true;
                                break;
                            case 2:
                                std::cout << "click\n";
                                sprite7.setTexture(textureX);
                                playCon.player--;
                                loction.spot7 = 2;
                                loction.playCount++;
                                playCon.playOnce7 = true;
                                break;
                        }
                    }
                    if (bounds8.contains(mouse1) && playCon.playOnce8 != true) {
                        switch (playCon.player) {
                            case 1:
                                std::cout << "click\n";
                                sprite8.setTexture(textureO);
                                playCon.player++;
                                loction.spot8 = 1;
                                loction.playCount++;
                                playCon.playOnce8 = true;
                                break;
                            case 2:
                                std::cout << "click\n";
                                sprite8.setTexture(textureX);
                                playCon.player--;
                                loction.spot8 = 2;
                                loction.playCount++;
                                playCon.playOnce8 = true;
                                break;
                        }
                    }
                    if (bounds9.contains(mouse1) && playCon.playOnce9 != true) {
                        switch (playCon.player) {
                            case 1:
                                std::cout << "click\n";
                                sprite9.setTexture(textureO);
                                playCon.player++;
                                loction.playCount++;
                                loction.spot9 = 1;
                                playCon.playOnce9 = true;
                                break;
                            case 2:
                                std::cout << "click\n";
                                sprite9.setTexture(textureX);
                                playCon.player--;
                                loction.playCount++;
                                loction.spot9 = 2;
                                playCon.playOnce9 = true;
                                break;
                        }
                    }
                }
                playCon.wpass1 = true;
            }
            if (event.type == sf::Event::MouseButtonReleased) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    playCon.wpass1 = false;
                }
            }
            //checks if one of the wining condition is meet
            loction.ifWinGame();

            //add delay betwwen the winner being found and the screen changing
            if (loction.playCount == 9|| loction.oWin == 1 || loction.xWin ==1 && playCon.delay< 25){
                playCon.delay++;
            }
//changes the screen to show which person won or if it was a draw
//allows they user to exit or play again
//if they choose play again the game will reset everything to that they can play again

            if (loction.oWin == 1 && playCon.delay>= 25) {
                playCon.wpass2 = true;
                winscreen.setFillColor(sf::Color::Bcolor);
                text2.setFillColor(sf::Color::color);
                winMenu1.setFillColor(sf::Color::color);
                winMenu2.setFillColor(sf::Color::color);
                text4.setFillColor(sf::Color::Bcolor);
                text5.setFillColor(sf::Color::Bcolor);

                if (event.type == sf::Event::MouseButtonPressed) {
                    if (event.mouseButton.button == sf::Mouse::Left && playCon.delay!= true) {
                        sf::Vector2f mouse2 = window.mapPixelToCoords(sf::Mouse::getPosition(window));
                        sf::FloatRect bounds10 = winMenu1.getGlobalBounds();
                        sf::FloatRect bounds11 = winMenu2.getGlobalBounds();
                        if (bounds10.contains(mouse2)) {
                            window.close();
                        }
                        if (bounds11.contains(mouse2)) {
                            std::cout << playCon.player1score;
                            playCon.player1score ++;
                            loction.reset2();
                            playCon.reset3();
                            reset(sprite1,sprite2,sprite3,sprite4,sprite5,sprite6,sprite7,
                                  sprite8,sprite9,textureclear,text2,text3,text11,text4,
                                  winMenu1,winMenu2, winscreen,text5);
                            playCon.delay= 20;
                        }
                        playCon.wpass2 = true;
                    }
                }

                if (event.type == sf::Event::MouseButtonReleased) {
                    if (event.mouseButton.button == sf::Mouse::Left) {
                        playCon.wpass2= false;
                    }
                }

            }


            else if (loction.xWin == 1 && playCon.delay>= 25) {
                playCon.wpass2 = true;
                winscreen.setFillColor(sf::Color::Bcolor);
                text3.setFillColor(sf::Color::color);
                winMenu1.setFillColor(sf::Color::color);
                winMenu2.setFillColor(sf::Color::color);
                text4.setFillColor(sf::Color::Bcolor);
                text5.setFillColor(sf::Color::Bcolor);


                if (event.type == sf::Event::MouseButtonPressed) {
                    if (event.mouseButton.button == sf::Mouse::Left && playCon.delay!= true) {
                        sf::Vector2f mouse2 = window.mapPixelToCoords(sf::Mouse::getPosition(window));
                        sf::FloatRect bounds10 = winMenu1.getGlobalBounds();
                        sf::FloatRect bounds11 = winMenu2.getGlobalBounds();
                        if (bounds10.contains(mouse2)) {
                            window.close();
                        }
                        if (bounds11.contains(mouse2)) {
                            playCon.player2score ++;
                            loction.reset2();
                            playCon.reset3();
                            reset(sprite1,sprite2,sprite3,sprite4,sprite5,sprite6,sprite7,
                                  sprite8,sprite9,textureclear,text2,text3,text11,text4,
                                  winMenu1,winMenu2, winscreen,text5);
                            playCon.delay= 20;
                        }
                        playCon.wpass2= true;
                    }
                }

                if (event.type == sf::Event::MouseButtonReleased) {
                    if (event.mouseButton.button == sf::Mouse::Left) {
                        playCon.wpass2= false;
                    }
                }

            }
            else if (loction.playCount == 9 && playCon.delay>= 25) {

                playCon.wpass2 = true;
                winscreen.setFillColor(sf::Color::Bcolor);
                text11.setFillColor(sf::Color::color);
                winMenu1.setFillColor(sf::Color::color);
                winMenu2.setFillColor(sf::Color::color);
                text4.setFillColor(sf::Color::Bcolor);
                text5.setFillColor(sf::Color::Bcolor);

                if (event.type == sf::Event::MouseButtonPressed) {
                    if (event.mouseButton.button == sf::Mouse::Left && playCon.delay!= true) {
                        sf::Vector2f mouse2 = window.mapPixelToCoords(sf::Mouse::getPosition(window));
                        sf::FloatRect bounds10 = winMenu1.getGlobalBounds();
                        sf::FloatRect bounds11 = winMenu2.getGlobalBounds();
                        if (bounds10.contains(mouse2)) {
                            window.close();
                        }
                        if (bounds11.contains(mouse2)) {
                            std::cout << playCon.player1score;
                            playCon.player1score ++;
                            loction.reset2();
                            playCon.reset3();
                            reset(sprite1,sprite2,sprite3,sprite4,sprite5,sprite6,sprite7,
                                  sprite8,sprite9,textureclear,text2,text3,text11,text4,
                                  winMenu1,winMenu2, winscreen,text5);
                            playCon.delay= 20;
                        }
                        playCon.wpass2= true;
                    }
                }

                if (event.type == sf::Event::MouseButtonReleased) {
                    if (event.mouseButton.button == sf::Mouse::Left) {
                        playCon.wpass2= false;
                    }

            }
            }

        }
// displays the board
        window.clear();
        window.draw(shape);

        window.draw(text);
        window.draw(text6);
        window.draw(text7);
        window.draw(text8);
        window.draw(text9);
        window.draw(line1);
        window.draw(line2);
        window.draw(line3);
        window.draw(line4);
// displays the 9 playable area

        window.draw(sprite1);
        window.draw(sprite2);
        window.draw(sprite3);
        window.draw(sprite4);
        window.draw(sprite5);
        window.draw(sprite6);
        window.draw(sprite7);
        window.draw(sprite8);
        window.draw(sprite9);

// displays the various screens like O win screen, x win screen and draw screen
// also displays the option in those screens
        window.draw(winscreen);
        window.draw(text2);
        window.draw(text3);
        window.draw(text11);
        window.draw(winMenu1);
        window.draw(winMenu2);
        window.draw(text4);
        window.draw(text5);
        window.draw(firstScreen);
        window.draw(text);
        window.draw(playGame);
        window.draw(Playagemtext);


//displays everything
        window.display();
    }
    return 0;
}
// the body of the reset funtion
int reset(sf::Sprite & sprite1, sf::Sprite & sprite2, sf::Sprite & sprite3, sf::Sprite & sprite4, sf::Sprite & sprite5,
          sf::Sprite & sprite6, sf::Sprite & sprite7, sf::Sprite & sprite8, sf::Sprite & sprite9,
          sf::Texture & textureclear, sf::Text & text2, sf::Text & text3,sf::Text & text11, sf::Text & text4,
          sf::RectangleShape & winMenu1, sf::RectangleShape & winMenu2,  sf::RectangleShape & winscreen, sf::Text & text5){

    text2.setFillColor(sf::Color::Transparent);
    text3.setFillColor(sf::Color::Transparent);
    text4.setFillColor(sf::Color::Transparent);
    text5.setFillColor(sf::Color::Transparent);
    text11.setFillColor(sf::Color::Transparent);
    winscreen.setFillColor(sf::Color::Transparent);
    winMenu1.setFillColor(sf::Color::Transparent);
    winMenu2.setFillColor(sf::Color::Transparent);
    sprite1.setTexture(textureclear);
    sprite2.setTexture(textureclear);
    sprite3.setTexture(textureclear);
    sprite4.setTexture(textureclear);
    sprite5.setTexture(textureclear);
    sprite6.setTexture(textureclear);
    sprite7.setTexture(textureclear);
    sprite8.setTexture(textureclear);
    sprite9.setTexture(textureclear);

    return 0;
}
