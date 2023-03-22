/*
 * #include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include "main.h"


#define Bcolor  Blue
#define color  Green


int main()
{
    //int player1score = 0;
    //int player2score = 0;


    int player = 1;

    bool playOnce1;
    bool playOnce2;
    bool playOnce3;
    bool playOnce4;
    bool playOnce5;
    bool playOnce6;
    bool playOnce7;
    bool playOnce8;
    bool playOnce9;

    sf::RenderWindow window(sf::VideoMode(700, 700), "LEE'S TIC-TAC-TOE GAME",sf::Style::Close);



    sf::RectangleShape shape;
    shape.setSize(sf::Vector2f(700.f, 700.f));
    shape.setPosition(0.f, 0.f);
    shape.setFillColor(sf::Color::Bcolor);

    sf::Font myfont;
    myfont.loadFromFile("../COMIC.ttf");
    sf::Text text("welcome to lee's tic-tac-toc game",myfont,30);
    text.setPosition(100.f,60.f);
    text.setFillColor(sf::Color::color);

    sf::RectangleShape line1(sf::Vector2f(500.f, 15.f));
    line1.setFillColor(sf::Color::color);
    line1.setPosition(sf::Vector2f(100.f, 300.f));


    sf::RectangleShape line2(sf::Vector2f(500.f, 15.f));
    line2.setFillColor(sf::Color::color);
    line2.setPosition(sf::Vector2f(100.f, 460.f));



    sf::RectangleShape line3(sf::Vector2f(15.f, 500.f));
    line3.setFillColor(sf::Color::color);
    line3.setPosition(sf::Vector2f(430.f, 150.f));


    sf::RectangleShape line4(sf::Vector2f(15.f, 500.f));
    line4.setFillColor(sf::Color::color);
    line4.setPosition(sf::Vector2f(250.f, 150.f));


    sf::Texture textureclear;
    textureclear.loadFromFile("../clear.png");


    sf::Texture textureO;
    textureO.loadFromFile("../O.png");


    sf::Texture textureX;
    textureX.loadFromFile("../X.png");



    sf::Sprite sprite1;
    sprite1.setTexture(textureclear);
    sprite1.setScale(sf::Vector2f(0.07f, .07f));
    sprite1.setPosition(sf::Vector2f(110.f, 150.f));

    sf::Sprite sprite2;
    sprite2.setTexture(textureclear);
    sprite2.setScale(sf::Vector2f(0.07f, .07f));
    sprite2.setPosition(sf::Vector2f(285.f, 150.f));

    sf::Sprite sprite3;
    sprite3.setTexture(textureclear);
    sprite3.setScale(sf::Vector2f(0.07f, .07f));
    sprite3.setPosition(sf::Vector2f(460.f, 150.f));

    sf::Sprite sprite4;
    sprite4.setTexture(textureclear);
    sprite4.setScale(sf::Vector2f(0.07f, .07f));
    sprite4.setPosition(sf::Vector2f(110.f, 320.f));

    sf::Sprite sprite5;
    sprite5.setTexture(textureclear);
    sprite5.setScale(sf::Vector2f(0.07f, .07f));
    sprite5.setPosition(sf::Vector2f(285.f, 320.f));

    sf::Sprite sprite6;
    sprite6.setTexture(textureclear);
    sprite6.setScale(sf::Vector2f(0.07f, .07f));
    sprite6.setPosition(sf::Vector2f(460.f, 320.f));

    sf::Sprite sprite7;
    sprite7.setTexture(textureclear);
    sprite7.setScale(sf::Vector2f(0.07f, .07f));
    sprite7.setPosition(sf::Vector2f(110.f, 490.f));

    sf::Sprite sprite8;
    sprite8.setTexture(textureclear);
    sprite8.setScale(sf::Vector2f(0.07f, .07f));
    sprite8.setPosition(sf::Vector2f(285.f, 490.f));

    sf::Sprite sprite9;
    sprite9.setTexture(textureclear);
    sprite9.setScale(sf::Vector2f(0.07f, .07f));
    sprite9.setPosition(sf::Vector2f(460.f, 490.f));

    while (window.isOpen()) {
        bool wpass1;
        bool wpass2;
        bool wpass3;
        bool wpass4;
        bool wpass5;
        bool wpass6;
        bool wpass7;
        bool wpass8;
        bool wpass9;

        std::cout << "lol\n";
        sf::Event event;
        sf::Event event2;

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::MouseButtonPressed && playOnce1 != true) {
                if (event.mouseButton.button == sf::Mouse::Left && wpass1 != true) //specifies
                {
                    sf::Vector2f mouse1 = window.mapPixelToCoords(sf::Mouse::getPosition(window));

                    // retrieve the bounding box of the sprite
                    sf::FloatRect bounds = sprite1.getGlobalBounds();

                    // hit test

                    if (bounds.contains(mouse1)) {
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
                }
                wpass1 = true;
            }
            if (event.type == sf::Event::MouseButtonReleased) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    wpass1 = false;
                }
            }

            if (event.type == sf::Event::MouseButtonPressed && playOnce2 != true) { //Mouse button Pressed{
                if (event.mouseButton.button == sf::Mouse::Left && wpass2 != true) { //specifies{
                    sf::Vector2f mouse2 = window.mapPixelToCoords(sf::Mouse::getPosition(window));

                    // retrieve the bounding box of the sprite
                    sf::FloatRect bounds2 = sprite2.getGlobalBounds();

                    // hit test


                    if (bounds2.contains(mouse2)) {
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



                        // transform the mouse position from window coordinates to world coordinates


                        // mouse is on sprite!
                    }
                    wpass2 = true;
                }



            }
            if (event.type == sf::Event::MouseButtonReleased)
            {
                if (event.mouseButton.button == sf::Mouse::Left) //specifies the held button       again. (You can make a variable for that if you want)
                {
                    wpass2 = false; //unlock when the button has been released.
                }
            }

            if (event.type == sf::Event::MouseButtonPressed && playOnce3 != true) { //Mouse button Pressed{
                if (event.mouseButton.button == sf::Mouse::Left && wpass3 != true) { //specifies{
                    sf::Vector2f mouse3 = window.mapPixelToCoords(sf::Mouse::getPosition(window));

                    // retrieve the bounding box of the sprite
                    sf::FloatRect bounds3 = sprite3.getGlobalBounds();

                    // hit test


                    if (bounds3.contains(mouse3)) {
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



                        // transform the mouse position from window coordinates to world coordinates


                        // mouse is on sprite!
                    }
                    wpass3 = true;
                }



            }
            if (event.type == sf::Event::MouseButtonReleased)
            {
                if (event.mouseButton.button == sf::Mouse::Left) //specifies the held button       again. (You can make a variable for that if you want)
                {
                    wpass3 = false; //unlock when the button has been released.
                }
            }

            if (event.type == sf::Event::MouseButtonPressed && playOnce4 != true) {
                if (event.mouseButton.button == sf::Mouse::Left && wpass4 != true) //specifies
                {
                    sf::Vector2f mouse4 = window.mapPixelToCoords(sf::Mouse::getPosition(window));

                    // retrieve the bounding box of the sprite
                    sf::FloatRect bounds4 = sprite4.getGlobalBounds();

                    // hit test

                    if (bounds4.contains(mouse4)) {
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
                    wpass4 = true;
                }

            }
            if (event.type == sf::Event::MouseButtonReleased) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    wpass4 = false;
                }
            }

        }
        window.clear();
        window.draw(shape);
        window.draw(text);
        window.draw(line1);
        window.draw(line2);
        window.draw(line3);
        window.draw(line4);

        window.draw(sprite1);
        window.draw(sprite2);
        window.draw(sprite3);
        window.draw(sprite4);
        window.draw(sprite5);
        window.draw(sprite6);
        window.draw(sprite7);
        window.draw(sprite8);
        window.draw(sprite9);

        window.display();
    }
}


 *
 */