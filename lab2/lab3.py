def main():

    n1 = int(input("Please enter a positive integer greater than 1: "))
    steps = 0
    print(n1, end="")

    while n1 > 1:
        if n1 % 2 == 0:
            n1 = n1 // 2
        else:
            n1 = n1 * 3 + 1
        steps += 1
        print(f" → {n1}", end="")
    print(f"\nTotal steps: {steps}\n")


    n2 = int(input("Please enter a number between 10 and 100: "))
    while not (10 <= n2 <= 100):
        n2 = int(input("Invalid input. Please enter a number between 10 and 100: "))

    fizz_count = 0
    buzz_count = 0
    fizzbuzz_count = 0

    for i in range(1, n2 + 1):
        if i % 7 == 0:
            print(f"({i} is skipped)")
            continue

        if i % 3 == 0 and i % 5 == 0:
            print("FizzBuzz")
            fizzbuzz_count += 1
        elif i % 3 == 0:
            print("Fizz")
            fizz_count += 1
        elif i % 5 == 0:
            print("Buzz")
            buzz_count += 1
        else:
            print(i)

    print("--- Summary ---")
    print(f"Fizz count : {fizz_count}")
    print(f"Buzz count : {buzz_count}")
    print(f"FizzBuzz count: {fizzbuzz_count}\n")

    pattern_size = int(input("Please enter a number between 3 and 9: "))

    for i in range(1, 2 * pattern_size):
        k = pattern_size - abs(pattern_size - i)
        print("*" * k)


if __name__ == "__main__":
    main()
