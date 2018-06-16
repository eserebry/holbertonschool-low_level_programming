#!/usr/bin/python3
'''
returns the perimeter of the island described in grid
'''


def island_perimeter(grid):
    perimeter = 0
    if grid != 0 and grid != [[]]:
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == 1:
                    if grid[i][j - 1] == 0:
                        perimeter += 1
                    if grid[i][j + 1] == 0:
                        perimeter += 1
                    if grid[i + 1][j] == 0:
                        perimeter += 1
                    if grid[i - 1][j] == 0:
                        perimeter += 1
    return perimeter
