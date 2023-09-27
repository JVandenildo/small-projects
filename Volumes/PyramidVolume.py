from numpy import pi


def PyramidVolume(height, baseSide, baseForm):
    if baseForm == "square":
        return round((height * (pow(baseSide, 2))) / 3, 2)

    elif baseForm == "circle":
        return round((height * (pi * (pow(baseSide, 2)))) / 3, 2)

    else:
        return 0


baseForm = str(input("circle or square? "))
baseSide = float(input("Base side: "))
height = float(input("Height: "))

print(PyramidVolume(height, baseSide, baseForm))
