#include "../include/board.hpp"
#include <cassert>
#include <iostream>
#include <sstream>  // Include for std::stringstream

void TestGameBoardOperations() {
    // Test constructor with width and height
    GameBoard board(20, 15);
    assert(board.GetWidth() == 20);
    assert(board.GetHeight() == 15);

    // Test copy constructor and operator==
    GameBoard board2(20, 15);
    assert(board == board2);

    // Test assignment operator
    GameBoard board3 = board;
    assert(board3 == board);

    // Test input operator (>>)
    GameBoard board4;
    std::stringstream input("30 25");
    input >> board4;
    assert(board4 == GameBoard(30, 25));

    // Test output operator (<<)
    std::stringstream output;
    output << board4;
    assert(output.str() == "30 25");
}

int main() {
    // Run the test functions
    TestGameBoardOperations();

    std::cout << "All GameBoard tests passed!" << std::endl;
    return 0;
}
