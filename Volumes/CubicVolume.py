def cubicVolume(size):
    return round(pow(size, 3), 2)

faceLength = float(input("Face length: "))

print(f'{cubicVolume(faceLength)} cubic units.')