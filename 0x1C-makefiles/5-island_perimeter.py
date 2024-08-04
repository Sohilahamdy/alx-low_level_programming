#!/usr/bin/python3
"""
5-island_perimeter - Computes the perimeter of an island described in a grid.
"""

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.

    Parameters:
    grid (list of list of int): A 2D grid where 0 represents water and 1 represents land.

    Returns:
    int: The perimeter of the island.
    """
    if not grid:
        return 0
    
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Each cell contributes up to 4 sides to the perimeter
                # Check each side
                if i == 0 or grid[i - 1][j] == 0:  # Top side
                    perimeter += 1
                if i == rows - 1 or grid[i + 1][j] == 0:  # Bottom side
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:  # Left side
                    perimeter += 1
                if j == cols - 1 or grid[i][j + 1] == 0:  # Right side
                    perimeter += 1

    return perimeter
