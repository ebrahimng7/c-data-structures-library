# C Data Structures Library

A collection of fundamental data structures implemented in C.

## Current Progress

### Vector
- [x] Project Structure
- [x] Vector Design
- [x] Vector Interface
- [x] Vector Create/Destroy
- [x] Vector Push Back
- [x] Vector Resize
- [x] Vector Get/Set
- [x] Vector Pop Back
- [x] Vector Front/Back
- [x] Vector Utility Functions
  - [x] vector_size()
  - [x] vector_capacity()
  - [x] vector_is_empty()
- [x] Unit Tests
- [x] Makefile

## Planned Features

- [x] Dynamic Array (Vector)
- [ ] Linked List
- [ ] Stack
- [ ] Queue
- [ ] Hash Table

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
make test
```

## Run

```bash
make run
```

## Rebuild

```bash
make rebuild
```

## Clean

```bash
make clean
```

## Features Implemented

### Vector API

```c
vector_create()
vector_destroy()

vector_push_back()
vector_pop_back()

vector_get()
vector_set()

vector_front()
vector_back()

vector_size()
vector_capacity()

vector_is_empty()
```

## Future Work

- Generic Data Structures
- Linked List
- Stack
- Queue
- Hash Table
- Improved Error Handling
