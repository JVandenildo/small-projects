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
    print(f"Your fibonacci sequence is: {secFib}. With {len(secFib)} terms.")

pd.Series(secFib).plot(lw=1, title="Fibonacci Sequence")
plt.show()
