# convert total minutes of a movie to its hour length

def convertMinToHr(MinutesTotal):
    hour = MinutesTotal//60
    min = MinutesTotal%60

    HourLength = f'{hour}hr and {min}min.'

    return HourLength

MinutesTotal = int(input("Minutes: "))

# for testing: 159 (2hrs and 39min)
print(convertMinToHr(MinutesTotal))
