n_terms = int(input("How many terms: "))
n1 = int(input("First term: "))
n2 = int(input("Second term: "))
secFib = [n1, n2]

if n_terms <= 0 or n_terms < 2:
    print("Only numbers above zero and sequence bigger than 2 terms!")
else:
    while len(secFib) < n_terms:
        nth = n1 + n2
        secFib.append(nth)
        n1 = n2
        n2 = nth

    print(f'Your fibonacci sequence is: {secFib}. With {len(secFib)} terms.')