#include <SFML/Graphics.hpp>
#include <iostream>

// makes it easy to change the color in the board
#define Bcolor  Blue
#define color  Green


int main()
{
    //int player1score = 0;
    //int player2score = 0;

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

// used to make the sprite click once
    bool wpass1;

// makes the window
    sf::RenderWindow window(sf::VideoMode(700, 700), "LEE'S TIC-TAC-TOE GAME",sf::Style::Default);

// shape use as background
    sf::RectangleShape shape;
    shape.setSize(sf::Vector2f(700.f, 700.f));
    shape.setPosition(0.f, 0.f);
    shape.setFillColor(sf::Color::Bcolor);

    sf::RectangleShape winscreen;
    winscreen.setSize(sf::Vector2f(700.f, 700.f));
    winscreen.setPosition(0.f, 0.f);
    winscreen.setFillColor(sf::Color(255,255,255,0));

// setting for the displayed text
    sf::Font myfont;
    myfont.loadFromFile("../COMIC.ttf");
    sf::Text text("welcome to lee's tic-tac-toc game",myfont,30);
    text.setPosition(100.f,60.f);
    text.setFillColor(sf::Color::color);


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

// use to display in the 9 sprites

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

    //event will be use to make the game playable
        sf::Event event;
    //use to allow the make actions
        while (window.pollEvent(event)) {
            // allows use to close the window and the program
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left && wpass1 != true) {
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
                    if (bounds1.contains(mouse1) && playOnce1 != true) {
                        switch (player) {
                            case 1:
                                std::cout << "click\n";
                                sprite1.setTexture(textureO);
                                player++;
                                playOnce1 = true;
                                break;
                            case 2:
                                std::cout << "click\n";
                                sprite1.setTexture(textureX);
                                player--;
                                playOnce1 = true;
                                break;
                        }
                    }
                    if (bounds2.contains(mouse1) && playOnce2 != true) {
                        switch (player) {
                            case 1:
                                std::cout << "click\n";
                                sprite2.setTexture(textureO);
                                player++;
                                playOnce2 = true;
                                break;
                            case 2:
                                std::cout << "click\n";
                                sprite2.setTexture(textureX);
                                player--;
                                playOnce2 = true;
                                break;
                        }
                    }
                    if (bounds3.contains(mouse1) && playOnce3 != true) {
                        switch (player) {
                            case 1:
                                std::cout << "click\n";
                                sprite3.setTexture(textureO);
                                player++;
                                playOnce3 = true;
                                break;
                            case 2:
                                std::cout << "click\n";
                                sprite3.setTexture(textureX);
                                player--;
                                playOnce3 = true;
                                break;
                        }
                    }
                    if (bounds4.contains(mouse1) && playOnce4 != true) {
                        switch (player) {
                            case 1:
                                std::cout << "click\n";
                                sprite4.setTexture(textureO);
                                player++;
                                playOnce4 = true;
                                break;
                            case 2:
                                std::cout << "click\n";
                                sprite4.setTexture(textureX);
                                player--;
                                playOnce4 = true;
                                break;
                        }
                    }
                    if (bounds5.contains(mouse1) && playOnce5 != true) {
                        switch (player) {
                            case 1:
                                std::cout << "click\n";
                                sprite5.setTexture(textureO);
                                player++;
                                playOnce5 = true;
                                break;
                            case 2:
                                std::cout << "click\n";
                                sprite5.setTexture(textureX);
                                player--;
                                playOnce5 = true;
                                break;
                        }
                    }
                    if (bounds6.contains(mouse1) && playOnce6 != true) {
                        switch (player) {
                            case 1:
                                std::cout << "click\n";
                                sprite6.setTexture(textureO);
                                player++;
                                playOnce6 = true;
                                break;
                            case 2:
                                std::cout << "click\n";
                                sprite6.setTexture(textureX);
                                player--;
                                playOnce6 = true;
                                break;
                        }
                    }
                    if (bounds7.contains(mouse1) && playOnce7 != true) {
                        switch (player) {
                            case 1:
                                std::cout << "click\n";
                                sprite7.setTexture(textureO);
                                player++;
                                playOnce7 = true;
                                break;
                            case 2:
                                std::cout << "click\n";
                                sprite7.setTexture(textureX);
                                player--;
                                playOnce7 = true;
                                break;
                        }
                    }
                    if (bounds8.contains(mouse1) && playOnce8 != true) {
                        switch (player) {
                            case 1:
                                std::cout << "click\n";
                                sprite8.setTexture(textureO);
                                player++;
                                playOnce8 = true;
                                break;
                            case 2:
                                std::cout << "click\n";
                                sprite8.setTexture(textureX);
                                player--;
                                playOnce8 = true;
                                break;
                        }
                    }
                    if (bounds9.contains(mouse1) && playOnce9 != true) {
                        switch (player) {
                            case 1:
                                std::cout << "click\n";
                                sprite9.setTexture(textureO);
                                player++;
                                playOnce9 = true;
                                break;
                            case 2:
                                std::cout << "click\n";
                                sprite9.setTexture(textureX);
                                player--;
                                playOnce9 = true;
                                break;
                        }
                    }
                }
                wpass1 = true;
            }
            if (event.type == sf::Event::MouseButtonReleased) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    wpass1 = false;
                }
            }


            if(playOnce1 == true){
             winscreen.setFillColor(sf::Color(138,43,226,200));
            }

        }
// displays the board
        window.clear();
        window.draw(shape);
        window.draw(text);
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

        window.draw(winscreen);
//displays everything
        window.display();
    }
}

