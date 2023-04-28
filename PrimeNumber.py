def primeNumber(number):
    numberHalf = number/2
    divisor = 1
    divisorList = []

    while divisor <= numberHalf:
        if number % divisor == 0:
            divisorList.append(divisor)
        divisor = divisor + 1

    if len(divisorList) == 1:
        return True
    else:
        return False

number = int(input("What number: "))

print(primeNumber(number))