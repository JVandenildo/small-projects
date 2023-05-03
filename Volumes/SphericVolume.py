from numpy import pi

def sphericVolume(radius):
    return round(pi * (radius**3) * (4/3), 2)

r = float(input("Radius: "))

print(sphericVolume(r))