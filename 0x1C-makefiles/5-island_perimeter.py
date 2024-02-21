#!/usr/bin/python3
""" Module that contains the island_perimeter function """


def island_perimeter(grid):
    """ Function that returns the perimeter of island described in grid """
    perimeter = 0

    num_rows = len(grid)

    if grid != []:
        num_columns = len(grid[0])

    for a in range(num_rows):
        for b in range(num_columns):
            if grid[a][b] == 1:
                if (a - 1) == -1 or grid[a - 1][b] == 0:
                    perimeter += 1
                if (a + 1) == num_rows or grid[a + 1][b] == 0:
                    perimeter += 1
                if (b - 1) == -1 or grid[a][b - 1] == 0:
                    perimeter += 1
                if (b + 1) == num_columns or grid[a][b + 1] == 0:
                    perimeter += 1

    return perimeter
