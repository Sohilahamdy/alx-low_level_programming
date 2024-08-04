#!/usr/bin/python3
"""
Module to calculate the perimeter of an island in a grid.
"""


def island_perimeter(grid):
    """
    Function to calculate the perimeter of an island described in a grid.

    Args:
        grid (list of list of int): 2D grid representation of the island.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Check the top neighbor
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                # Check the bottom neighbor
                if i == rows - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                # Check the left neighbor
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                # Check the right neighbor
                if j == cols - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
