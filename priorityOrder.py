# this function is for finding how big is a number on a list

import random as rd


def priorityOrder(array: list[int], place: int):
    copiedArray = array.copy()
    count = 1

    while len(copiedArray) > 1 and max(copiedArray) != place:
        copiedArray.remove(max(copiedArray))
        count = count + 1

    return count


lst = [rd.randint(1, 100) for i in range(rd.randint(5, 7))]
lst.append(50)
print(f"List: {lst}\n{priorityOrder(lst, 50)}")
