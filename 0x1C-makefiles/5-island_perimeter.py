#!/usr/bin/python3
"""
this program defines a function,
this function calculates the perimeter of an island
"""


def island_perimeter(grid):
    """
    Function that returns the perimeter of the island
    """

    directions = [
            (-1, 0),  # up
            (0, 1),  # right
            (1, 0),  # down
            (0, -1)  # left
            ]

    row, column = len(grid), len(grid[0])
    tot = 0
    for i in range(row):
        for j in range(column):
            if grid[i][j] == 1:
                for direction in directions:
                    # define x and y
                    dx, dy = direction
                    new_i, new_j = i + dx, j + dy
                    if 0 <= new_i < row and 0 <= new_j < column:
                        if grid[new_i][new_j] != 1:
                            tot += 1
                    else:
                        tot += 1
    return tot
