def primeNumber(number: int) -> bool:
    numberHalf: float = number / 2
    divisor = 1
    divisorList: list[int] = []

    while divisor <= numberHalf:
        if number % divisor == 0:
            divisorList.append(divisor)
        divisor = divisor + 1

    return len(divisorList) == 1


number = int(input("What number: "))

print(primeNumber(number))
