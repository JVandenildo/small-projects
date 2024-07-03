import random as rd  # generate a random list, for testing


def priorityOrder(array: list[int], number: int) -> int:
    """
    Returns how big is the number within the list.

    Args:
        array: the list to be examined.
        number: value that will compare to the other values within the list.

    Returns:
        An int representing of how big is the input value. 1 for the biggest, 2 for the 2nd biggest, so forth.
    """

    copiedArray = array.copy()
    count = 1

    while len(copiedArray) > 1 and max(copiedArray) != number:
        copiedArray.remove(max(copiedArray))
        count = count + 1

    return count


# just for testing
lst = [rd.randint(1, 100) for i in range(rd.randint(5, 10))]
lst.append(50)  # a number I know it will be there
print(f"List: {lst}\n{priorityOrder(lst, 50)}")
lst.sort()
print(lst)
