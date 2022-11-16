#!/usr/bin/python3
'''returns the perimeter of the island described in grid'''

def island_perimeter(grid):
    """Return Island perimeter"""
    island_perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if (i == 0) or (grid[i - 1][j] == 0):
                    island_perimeter += 1
                if (grid[i][j - 1] == 0) or (j == 0):
                    island_perimeter += 1
                if (grid[i][j + 1] == 0) or (j == (len(grid[i]) - 1)):
                    island_perimeter += 1
                if (grid[i + 1][j] == 0) or (i == (len(grid) - 1)):
                    island_perimeter += 1
    return (island_perimeter)
