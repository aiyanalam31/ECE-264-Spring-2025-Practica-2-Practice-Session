# compiler
CC = gcc
# compiler flags
CFLAGS = -std=c11 -g -Wall -Wshadow --pedantic -Wvla -Werror -Wno-strict-prototypes
# Source files
C_FILES = reverse.c main.c
SRC_FILES = $(C_FILES) reverse.h unittest.h
EXEC = practica

$(EXEC): $(SRC_FILES)
	$(CC) $(CFLAGS) $(C_FILES) -o $(EXEC)

testall: $(EXEC)
	./$(EXEC)

test0: $(EXEC)
	./$(EXEC) read_missing

test1: $(EXEC)
	./$(EXEC) read_empty

test2: $(EXEC)
	./$(EXEC) read_1

test3: $(EXEC)
	./$(EXEC) read_3

test4: $(EXEC)
	./$(EXEC) read_5

# run valgrind
memory: $(EXEC)
	valgrind --leak-check=full --show-leak-kinds=all ./$(EXEC)

# clean rule
clean:
	rm -f $(EXEC)