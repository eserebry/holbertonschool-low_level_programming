#!/usr/bin/python3
'''
returns the perimeter of the island described in grid
'''


def island_perimeter(grid):
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 1
    return perimeter
