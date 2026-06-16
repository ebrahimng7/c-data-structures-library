# C Data Structures Library

A collection of fundamental data structures implemented in C.

## Implemented Data Structures

### Vector

- create / destroy
- push_back / pop_back
- get / set
- size / capacity
- is_empty

### Linked List

- create / destroy
- push_front
- push_back
- pop_front
- front
- back
- size
- is_empty

### Stack

- create / destroy
- push
- pop
- top
- size
- is_empty

## Project Structure

```text
.
├── docs/
├── include/
├── src/
├── tests/
├── Makefile
└── README.md
```

## Build

```bash
make
```

## Run Tests

```bash
make test-vector
make test-linked-list
make test-stack
```

## Clean

```bash
make clean
```

## Releases

- v1.0.0 Vector
- v2.0.0 Linked List
- v3.0.0 Stack
