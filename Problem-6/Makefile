C# compiler
CC = gcc
# compiler flags
CFLAGS = -std=c11 -g -Wall -Wshadow --pedantic -Wvla -Werror -Wno-strict-prototypes
# Source files
C_FILES = merge_sorted.c main.c
SRC_FILES = $(C_FILES) merge_sorted.h unittest.h
EXEC = practica

$(EXEC): $(SRC_FILES)
	$(CC) $(CFLAGS) $(C_FILES) -o $(EXEC)

testall: $(EXEC)
	./$(EXEC)

# run valgrind
memory: $(EXEC)
	valgrind --leak-check=full --show-leak-kinds=all ./$(EXEC)

# clean rule
clean:
	rm -f $(EXEC)
