#include "../include/snake.hpp"
#include <cassert>
#include <iostream>

void TestSnakeOperations() {
    Snake snake;

    Point initialHead(10, 10);
    assert(snake.GetHeadPosition() == initialHead);


    snake.Move(Point(1, 0));
    Point newHeadRight(11, 10);
    assert(snake.GetHeadPosition() == newHeadRight);


    snake.Grow(); 
    snake.Move(Point(0, 1));  
    Point newHeadDown(11, 11);
    assert(snake.GetHeadPosition() == newHeadDown);

}

int main() {
    TestSnakeOperations();

    std::cout << "All Snake tests passed successfully!" << std::endl;
    return 0;
}
