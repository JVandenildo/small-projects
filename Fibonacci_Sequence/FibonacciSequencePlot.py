import pandas as pd
import matplotlib.pyplot as plt

nth_term = int(input("Last term: "))
n1 = int(input("First term: "))
n2 = int(input("Second term: "))
secFib = [n1, n2]

if nth_term <= 0:
    print("Only numbers above zero!")
else:
    nth = n1 + n2
    while nth <= nth_term:
        secFib.append(nth)
        n1 = n2
        n2 = nth
        nth = n1 + n2
    print(f"Your Fibonacci sequence, with {len(secFib)} terms, is: {secFib}.")

pd.Series(secFib).plot(lw=1, title="Fibonacci Sequence")
plt.show()
