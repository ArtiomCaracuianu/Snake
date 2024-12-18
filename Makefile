CXX = g++

CXXFLAGS = -Wall -Wextra -std=c++17

EXEC = snake_game

SRC = point.cpp snake.cpp board.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(OBJ) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)
