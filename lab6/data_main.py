from data_package import strip_whitespaces, remove_duplicates, calculate_mean, find_maximum


def main():
    user_input = input("Enter a comma-separated list of numbers (e.g., 12, 5, 12, 8, 21): ")


    raw_strings = user_input.split(',')


    cleaned_strings = strip_whitespaces(raw_strings)


    cleaned_strings = [s for s in cleaned_strings if s != ""]

    try:

        num_list = [float(x) for x in cleaned_strings]


        unique_data = remove_duplicates(num_list)


        mean_val = calculate_mean(unique_data)
        max_val = find_maximum(unique_data)

        print(f"Cleaned and unique data: {unique_data}")
        print(f"Mean: {mean_val:.2f}")
        print(f"Maximum: {max_val}")

    except ValueError:

        print("Data Error: Please make sure you only enter numbers separated by commas.")


if __name__ == "__main__":
    main()