#!/usr/bin/python3
"""
    Method that returns the perimeter of the
    island described in grid.
"""


def island_perimeter(grid):
    """Calculate and return the perimiter of an island."""
    width = len(grid[0])
    height = len(grid)
    edges = 0
    perimeter = 0

    for a in range(height):
        for b in range(width):
            if grid[a][b] == 1:
                perimeter += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    edges += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    edges += 1
    return perimeter * 4 - edges * 2

