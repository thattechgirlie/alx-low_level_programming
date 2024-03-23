#!/usr/bin/python3
""" Define function to return perimeter of the island."""


def island_perimeter(grid):
    """Returns perimeter of island.
    Grid represents 0 to represent water and 1 for land.
    Args:
        grid (list): List of integers representing island.
    Returns:
        Perimeter of island defined in the grid.
    """

    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0
    for a in range(height):
        for b in range(width):
            if grid[a][b] == 1:
                size += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    edges += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    edges += 1
    return size * 4 - edges * 2
