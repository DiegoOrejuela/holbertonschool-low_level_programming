#!/usr/bin/python3
"""
5-main

"""


def island_perimeter(grid):
    """Create a function def island_perimeter(grid):
    that returns the perimeter of the island described in grid:
    """
    if len(grid) == 0 or grid == [[]]:
        return(0)

    count_lenght = 0
    lenght = []

    count_hight = 0
    hight = []

    for row in range(len(grid)):
        count_lenght = 0
        for column in range(len(grid[row])):
            if grid[row][column] == 1:
                count_lenght += 1
        lenght.append(count_lenght)

    i = 0
    j = 0
    while(j < len(grid[0])):
        i = 0
        count_hight = 0
        while(i < len(grid)):
            if grid[i][j] == 1:
                count_hight += 1
            i += 1
        hight.append(count_hight)
        j += 1

    return max(lenght) * 2 + max(hight) * 2
