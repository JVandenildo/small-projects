import numpy as np


def DistancePoints() -> float:
    # coordinates for the 1st point
    x1 = float(input("X1: "))
    y1 = float(input("Y1: "))

    # coordinates for the 2nd point
    x2 = float(input("X2: "))
    y2 = float(input("Y2: "))

    # distance between points on each axis
    x = abs(x1 - x2)
    y = abs(y1 - y2)

    # distance itself
    distance = np.sqrt((x**2) + (y**2))

    return round(distance, 2)


print(DistancePoints())
