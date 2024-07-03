import random as rd  # generate a random list, for testing


def orderPriority(array: list[int], number: int) -> int:
    """
    Returns how big is the number within the list.

    Args:
        array: the list to be examined.
        number: position of the value you want.

    Returns:
        Value from that position. 1 for the biggest, 2 for the 2nd biggest, so forth.
    """

    copiedArray = array.copy()
    count = number

    while len(copiedArray) != number:
        copiedArray.remove(min(copiedArray))

    return min(copiedArray)


# just for testing
lst = [rd.randint(1, 100) for i in range(rd.randint(5, 10))]
print(f"List: {lst}\n{orderPriority(lst, int(input("Order: ")))}")
lst.sort()
print(lst)
