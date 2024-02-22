# A perfect number is a number that is equal to the sum of its positive divisors, excluding the number itself.
# For instance, 6 is a perfect number, because `1 + 2 + 3 = 6`.


def PerfectNumber(number):
    count = 2
    finalSum = 1

    while finalSum < number:
        if number % count == 0:
            finalSum = finalSum + count

        count = count + 1

    if finalSum == number:
        return True
    else:
        return False


testPerfect = int(input("Number: "))

print(f"{testPerfect} is perfect? {PerfectNumber(testPerfect)}.")
