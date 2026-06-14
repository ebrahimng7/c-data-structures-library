# C Data Structures Library

A collection of fundamental data structures implemented in C.

## Implemented Data Structures

### Vector

- create / destroy
- push_back / pop_back
- get / set
- front / back
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

## Project Structure

```text
.
├── docs/
│   ├── design.md
│   └── linked_list_design.md
├── include/
│   ├── vector.h
│   └── linked_list.h
├── src/
│   ├── vector.c
│   └── linked_list.c
├── tests/
│   ├── test_vector.c
│   └── test_linked_list.c
├── Makefile
└── README.md
```

## Build

```bash
make
```

## Run Vector Tests

```bash
make test-vector
```

## Run Linked List Tests

```bash
make test-linked-list
```

## Clean

```bash
make clean
```

## Releases

- v1.0.0 Vector
- v2.0.0 Linked List
