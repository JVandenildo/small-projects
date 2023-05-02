# have a sequence of n terms with geometric progression
def GeometricProgression(n, term, constant):
    listTerms = [term]

    while len(listTerms) < n:
        term = term * constant
        listTerms.append(term)

    return round(listTerms, 2)

n = int(input("Number of terms: "))
term = float(input("1st term: "))
constant = float(input("Constant: "))

print(GeometricProgression(n, term, constant))