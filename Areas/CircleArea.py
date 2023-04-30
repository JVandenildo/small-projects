from numpy import pi

def areaCircle(radius):
    return round(pi * (pow(radius, 2)), 2)

r = int(input("Radius of the circle: "))
print(f'Area of a circle with {r} radius is {areaCircle(r)} units².')