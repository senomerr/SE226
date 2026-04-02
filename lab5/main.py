def factorial(x):
    if x == 0 or x == 1:
        return 1
    else:
        return x * factorial(x - 1)


term = lambda x, n: (x ** n) / factorial(n)

def exp_x(x, n):
    total = 0
    for i in range(n):
        total += term(x, i)
    return total


total_series = 0

def series(n):
    global total_series

    if n == 0:
        return

    if n % 2 == 0:
        total_series -= 1 / n
    else:
        total_series += 1 / n

    series(n - 1)


if __name__ == "__main__":
    x = float(input("Enter x: "))
    n = int(input("Enter number of terms: "))
    print("e^x result:", exp_x(x, n))

    n2 = int(input("Enter n for series: "))
    series(n2)
    print("Series result:", total_series)
