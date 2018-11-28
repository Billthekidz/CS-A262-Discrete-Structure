EXE = lab04
CXX = @clang++
CXXFLAGS = -ggdb3 -O0 -std=c++14 -Wall -Wextra -Wshadow
SRC = $(EXE).cpp main.cpp
OBJS = $(EXE).o main.o

$(EXE): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# Remove object files from folder
clean:
	rm -f core $(EXE) *.o

run: $(EXE)
	./$(EXE)
