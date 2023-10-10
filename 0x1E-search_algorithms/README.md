# C - Search Algorithms
Search algorithms are a fundamental component of computer science and information retrieval.

![The algorithm meme](https://www.memecreator.org/static/images/memes/4944915.jpg)

## Description
 They are used to locate specific items or data within a larger collection, often with the aim of finding the most efficient or relevant results. Search algorithms come in various forms, and their selection depends on the problem and the data structure in use. Search algorithms are fundamental tools for tasks like data retrieval, pathfinding, optimization, and artificial intelligence. The choice of a search algorithm depends on the problem's nature and specific requirements, such as time complexity and available data structures.

## Features
 * **Linear Search:** Also known as sequential search, it checks each element one by one in a list or array until it finds the target item. It's simple but not very efficient for large datasets.
 * **Binary Search:** Applicable to sorted arrays, binary search repeatedly divides the search interval in half. This makes it highly efficient for finding items in large datasets, with a time complexity of O(log n).
 * **Hashing:** Using a hash function, hashing algorithms map data to an index in an array. This enables quick data retrieval with a constant time complexity, O(1), in ideal cases.
 * **Depth-First Search (DFS):** DFS is used in graph-based search problems. It explores as far as possible along a branch before backtracking, making it useful for traversing graphs.
 * **Breadth-First Search (BFS):** BFS explores all neighbor nodes before moving to the next level in a graph. It's often employed for shortest path or connected component problems.
 * **A Search Algorithm:** * A* is a heuristic search algorithm used in pathfinding and graph traversal. It considers both the cost to reach a node and an estimate of the cost to reach the goal.
 * **K-Nearest Neighbors (K-NN):** K-NN is used in machine learning for classification and regression tasks. It finds the K-nearest neighbors of a data point to make predictions.
 * **Greedy Search:** Greedy search algorithms select the best available option at each step to reach a goal. While they often produce suboptimal solutions, they are fast and straightforward.
 * **Minimax Algorithm:** Used in decision-making and game theory, the minimax algorithm minimizes potential losses in games by considering the opponent's best possible moves.
 * **Pattern Matching Algorithms:** These algorithms locate patterns or substrings within larger texts. Common examples include the Knuth-Morris-Pratt (KMP) and Boyer-Moore algorithms.

## Usage
```c
#include <stdio.h>

/**
 * linear_search - Perform linear search on an array.
 * @arr: The array to search.
 * @size: The size of the array.
 * @target: The value to search for.
 *
 * Return: Index of the target if found, or -1 if not found.
 */
int
linear_search(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return (i);
    }
    return -1;
}

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int
main()
{
    int data[] = {10, 20, 30, 40, 50};
    int target = 30;
    int result = linear_search(data, 5, target);
    if (result != -1)
    {
        printf("Linear search found the target at index %d\n", result);
    }
    else
        printf("Target not found in the array\n");

    return 0;
}
```

## Contact
 * [Sakhile Ndlazi](https://www.twitter.com/sakhilelindah)
