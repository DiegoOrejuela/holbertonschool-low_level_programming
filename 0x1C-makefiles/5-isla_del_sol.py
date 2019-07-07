#!/usr/bin/python3
"""
5-main

"""


def island_perimeter(grid):
    """Create a function def island_perimeter(grid):
    that returns the perimeter of the island described in grid, but
    with coordenates for point x and y
    """
    if len(grid) == 0 or grid == [[]]:  # Case: grid is empty
        return 0

    y_1, y_2, x_1, x_2 = -1, -1, len(grid), -1

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1 and y_1 == -1:  # Set 1er value y(?, *)
                y_1 = i
                y_2 = i
            elif grid[i][j] == 1:  # Set 2nd value y(*, ?)
                y_2 = i

            if grid[i][j] == 1 and j < x_1:  # Set 1er value x(?, *)
                x_1 = j
                x_2 = j
            elif grid[i][j] == 1 and j > x_2:  # Set 2nd value x(*, ?)
                x_2 = j

    if y_1 == -1:  # case: 1(land zone) was not found
        return 0
#   print("y({}, {}) - x({}, {})".format(y_1, y_2, x_1, x_2)) Coordenates
    height = len(range(y_1, y_2 + 1))  # Calc: y_1 .. y_2 there is n distance.
    length = len(range(x_1, x_2 + 1))  # Calc: x_1 .. x_2 there is n distance.

    return (height * 2) + (length * 2)  # Calc: perimeter land zone
