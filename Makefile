CC = gcc

CFLAGS = -Wall -Wextra -Werror -std=c11 -Iinclude

SRC_DIR = src
TEST_DIR = tests

SRC = $(SRC_DIR)/vector.c
TEST = $(TEST_DIR)/test_vector.c

OBJ = $(SRC:.c=.o)

TARGET = test_vector

all: $(TARGET)

$(TARGET): $(OBJ) $(TEST)
	$(CC) $(CFLAGS) $(OBJ) $(TEST) -o $(TARGET)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c include/vector.h
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

test: run

clean:
	rm -f $(OBJ)
	rm -f $(TARGET)

rebuild: clean all

.PHONY: all run test clean rebuild
