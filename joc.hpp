
Copy code
#ifndef joc_hpp
#define joc_hpp

#include <vector>

class SnakeGame {
public:
    SnakeGame();
    void printBoard();
    void processInput(char input);
    void update();
    bool isGameOver() const;

private:
    enum Direction { UP, DOWN, LEFT, RIGHT };
    struct Point {
        int x, y;
    };
    std::vector<Point> snake;
    Point food;
    Direction dir;
    int width, height;
    bool gameOver;
    void generateFood();
    void moveSnake();
    bool checkCollision() const;
    void growSnake();
};

#endif // joc_hpp

