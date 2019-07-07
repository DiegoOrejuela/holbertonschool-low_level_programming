#!/usr/bin/python3
"""
5-main

"""


def island_perimeter(grid):
    """Create a function def island_perimeter(grid):
    that returns the perimeter of the island described in grid:
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                # print("({}, {})".format(i, j))  # Position in grid

                if grid[i][j - 1] == 0 and j != 0:  # Case review: <- [1]
                        perimeter += 1
                elif j == 0:
                    perimeter += 1

                try:
                    if grid[i][j + 1] == 0:  # Case review: [1] ->
                        perimeter += 1
                except:
                    perimeter += 1

                if grid[i - 1][j] == 0 and i != 0:  # Case review: ^[1]
                        perimeter += 1
                elif i == 0:
                    perimeter += 1

                try:
                    if grid[i + 1][j] == 0:  # Case review: [1]v
                        perimeter += 1
                except:
                    perimeter += 1
                # print(" --- Perimeter {}".format(perimeter))

    return perimeter
