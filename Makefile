CC = gcc

CFLAGS = -Wall -Wextra -Werror -std=c11 -Iinclude

VECTOR_TARGET = test_vector
LIST_TARGET = test_linked_list
STACK_TARGET = test_stack
QUEUE_TARGET = test_queue

all: $(VECTOR_TARGET) $(LIST_TARGET) $(STACK_TARGET) $(QUEUE_TARGET)

$(VECTOR_TARGET):
	$(CC) $(CFLAGS) src/vector.c tests/test_vector.c -o $(VECTOR_TARGET)

$(LIST_TARGET):
	$(CC) $(CFLAGS) src/linked_list.c tests/test_linked_list.c -o $(LIST_TARGET)

$(STACK_TARGET):
	$(CC) $(CFLAGS) src/linked_list.c src/stack.c tests/test_stack.c -o $(STACK_TARGET)

$(QUEUE_TARGET):
	$(CC) $(CFLAGS) src/linked_list.c src/queue.c tests/test_queue.c -o $(QUEUE_TARGET)

test-vector: $(VECTOR_TARGET)
	./$(VECTOR_TARGET)

test-linked-list: $(LIST_TARGET)
	./$(LIST_TARGET)

test-stack: $(STACK_TARGET)
	./$(STACK_TARGET)

test-queue: $(QUEUE_TARGET)
	./$(QUEUE_TARGET)

clean:
	rm -f $(VECTOR_TARGET) $(LIST_TARGET) $(STACK_TARGET) $(QUEUE_TARGET)
	rm -f src/*.o

.PHONY: all clean test-vector test-linked-list test-stack test-queue
