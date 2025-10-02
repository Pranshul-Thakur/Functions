# C++ Array Utilities

Simple command-line tool for common vector operations including max, min, sum, reverse, and sort.

## Features

- Find maximum element
- Find minimum element
- Calculate sum of elements
- Reverse array
- Sort array (ascending)

## Usage

```bash
g++ "Functions - 1.cpp" -o functions
./functions
```

### Input Format

```
n                    # Number of elements
element1 element2 ...# Array elements
operation            # Operation code (1-5)
```

### Operations

| Code | Operation | Output |
|------|-----------|--------|
| 1 | Find Maximum | Single integer |
| 2 | Find Minimum | Single integer |
| 3 | Sum All Elements | Single integer |
| 4 | Reverse Array | Space-separated integers |
| 5 | Sort Array | Space-separated integers |

## Example

```
Input:
5
3 1 4 1 5
1

Output:
5
```

```
Input:
4
10 20 5 15
5

Output:
5 10 15 20
```

## Implementation Details

- **Max/Min**: Linear search O(n)
- **Sum**: Iterative addition O(n)
- **Reverse**: Creates new vector O(n)
- **Sort**: Bubble sort O(n²)

## Code Structure

```cpp
findmax(vector<int>)      // Returns largest element
findmin(vector<int>)      // Returns smallest element
addvec(vector<int>)       // Returns sum
reversearray(vector<int>) // Returns reversed vector
sortarray(vector<int>)    // Returns sorted vector
```

## Compilation

```bash
g++ -std=c++11 "Functions - 1.cpp" -o functions
```
