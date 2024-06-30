nth_term = int(
    input("Last term: ")
)  # all terms in the sequence are smaller than this one
n1 = int(input("First term: "))
n2 = int(input("Second term: "))
secFib = [n1, n2]  # sequence begins here

if nth_term <= 0:
    print("Only numbers above zero!")
else:
    nth = n1 + n2
    while nth <= nth_term:
        secFib.append(nth)
        n1 = n2
        n2 = nth
        nth = n1 + n2
    print(f"Your Fibonacci sequence is: {secFib}. With {len(secFib)} terms.")
