//#include <SFML/Graphics.hpp>
//#include <iostream>
//#include <math.h>
//float xVelocity;
//float yVelocity;
//
//void setVelocity(float x, float y) {
//    xVelocity = x;
//    yVelocity = y;
//}
//
//using namespace std;
//int main()
//{
//    const int PADDLE_WIDTH = 50;
//    const int PADDLE_HEIGHT = 150;
//
//    sf::RenderWindow window(sf::VideoMode(1280, 720), "window (heheheha)");
//    window.setFramerateLimit(60);
//
//
//    sf::CircleShape circle(25.f);
//    sf::RectangleShape player_pad;
//    sf::Vector2f circlePosition(600, 350);
//    sf::Vector2f player_padPosition(100, 360);
//    circle.setPosition(circlePosition);
//    player_pad.setPosition(player_padPosition);
//    player_pad.setSize(sf::Vector2f(PADDLE_WIDTH, PADDLE_HEIGHT));
//    sf::RectangleShape opponent_pad;
//    opponent_pad.setPosition(sf::Vector2f(1280 - 100 - PADDLE_WIDTH, 360));
//    opponent_pad.setSize(sf::Vector2f(PADDLE_WIDTH, PADDLE_HEIGHT));
//
//    int playerScore = 0;
//    int opponentScore = 0;
//
//    sf::Font font;
//    if (!font.loadFromFile("FFFFORWA.TTF")) {
//        // handle error
//    }
//
//
//    xVelocity = 5;
//    yVelocity = 5;
//
//    while (window.isOpen())
//    {
//
//        sf::Text playerScoreText;
//        playerScoreText.setFont(font);
//        playerScoreText.setString(std::to_string(playerScore));
//        playerScoreText.setCharacterSize(100);
//        playerScoreText.setFillColor(sf::Color::White);
//        playerScoreText.setPosition(400, 100); // set the position of the text on the screen
//
//        sf::Text opponentScoreText;
//        opponentScoreText.setFont(font);
//        opponentScoreText.setString(std::to_string(opponentScore));
//        opponentScoreText.setCharacterSize(100);
//        opponentScoreText.setFillColor(sf::Color::White);
//        opponentScoreText.setPosition(840, 100); // set the position of th
//
//        sf::Text line;
//        line.setFont(font);
//        line.setString("|\n\n|\n\n|\n\n|\n\n|\n\n|\n\n|\n\n|");
//        line.setCharacterSize(50);
//        line.setFillColor(sf::Color::White);
//        line.setPosition(640, 20);
//
//        sf::Text TK;
//        TK.setFont(font);
//        TK.setString("MADE BY THE AWESOME TK");
//        TK.setCharacterSize(10);
//        TK.setFillColor(sf::Color::White);
//        TK.setPosition(1070, 710);
//
//
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//
//
//            if (event.type == sf::Event::Closed) window.close();
//
//            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) window.close();
//        }   if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && player_pad.getPosition().y < 720 - PADDLE_HEIGHT) player_pad.move(sf::Vector2f(0, 5));
//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && player_pad.getPosition().y > 0) player_pad.move(sf::Vector2f(0, -5));
//
//
//
//        // AI opponent logic
//        float opponent_pad_velocity = 1;
//        if (opponent_pad.getPosition().y < circle.getPosition().y)
//            opponent_pad_velocity = 1;
//        if (opponent_pad.getPosition().y > circle.getPosition().y)
//            opponent_pad_velocity = -1;
//        opponent_pad.move(sf::Vector2f(0, opponent_pad_velocity));
//
//
//
//        // physics
//
//        circle.move(xVelocity, yVelocity);
//        if (circle.getGlobalBounds().intersects(player_pad.getGlobalBounds())) {
//            // Get the position of the ball and the paddle
//            sf::Vector2f circlePos = circle.getPosition();
//            sf::Vector2f paddlePos = player_pad.getPosition();
//            // Calculate the angle of collision using trigonometry
//            float collisionAngle = atan2(circlePos.y - paddlePos.y, circlePos.x - paddlePos.x);
//            collisionAngle += (std::rand() / RAND_MAX) * M_PI / 4 - M_PI / 8; // Add randomization to collision angle
//            setVelocity(xVelocity, yVelocity);
//            xVelocity = -xVelocity;
//        }
//        if (circle.getGlobalBounds().intersects(opponent_pad.getGlobalBounds())) {
//            sf::Vector2f circlePos = circle.getPosition();
//            sf::Vector2f paddlePos = opponent_pad.getPosition();
//            float collisionAngle = atan2(circlePos.y - paddlePos.y, circlePos.x - paddlePos.x);
//            collisionAngle += (std::rand() / RAND_MAX) * M_PI / 4 - M_PI / 8;
//            setVelocity(xVelocity, yVelocity);
//            xVelocity = -xVelocity;
//        }
//
//        if (circle.getPosition().x < 0) {
//            opponentScore++;
//            circle.setPosition(sf::Vector2f(600, 350));
//        }
//        if (circle.getPosition().x > 1230) {
//            playerScore++;
//            circle.setPosition(sf::Vector2f(600, 350));
//        }
//
//        if (circle.getPosition().x < 0 || circle.getPosition().x > 1280 - 50) xVelocity = -xVelocity;
//        if (circle.getPosition().y < 0 || circle.getPosition().y > 720 - 50) yVelocity = -yVelocity;
//
//
//
//
//
//        //RENDER
//        window.clear();
//        window.draw(circle);
//        window.draw(player_pad);
//        window.draw(opponent_pad);
//        window.draw(playerScoreText);
//        window.draw(opponentScoreText);
//        window.draw(line);
//        window.draw(TK);
//        window.display();
//    }
//
//    return 0;
//}