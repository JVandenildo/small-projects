from numpy import pi

def sphericVolume(radius):
    return round(pi * pow(radius, 3) * (4/3), 2)

r = float(input("Radius: "))

print(f'Volume of a sphere with radius {r} is {sphericVolume(r)} cubic units.')