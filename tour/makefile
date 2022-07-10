CXX :=clang++
CXXFLAGS := -std=c++11 -lm

SRC = $(wildcard *.cpp)
BIN = $(patsubst %.cpp,%,$(SRC))

all: $(BIN)

clean:
	$(RM) $(BIN)
