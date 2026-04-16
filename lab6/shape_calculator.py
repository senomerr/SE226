import geometry_utils


def main():

    operations = {
        "circle_area": geometry_utils.circle_area,
        "circle_perimeter": geometry_utils.circle_perimeter,
        "rectangle_area": geometry_utils.rectangle_area,
        "rectangle_perimeter": geometry_utils.rectangle_perimeter,
        "triangle_area": geometry_utils.triangle_area
    }

    print("Available shapes: circle, rectangle, triangle")
    print("Available calculations: area, perimeter (e.g., circle_area)")

    op_name = input("Enter the operation you want to perform: ").strip().lower()

    if op_name not in operations:
        print("Invalid operation.")
        return

    func = operations[op_name]

    try:
        if "circle" in op_name:
            radius = float(input("Enter radius: "))
            result = func(radius)
        elif "rectangle" in op_name:
            width = float(input("Enter width: "))
            height = float(input("Enter height: "))
            result = func(width, height)
        elif "triangle" in op_name:
            base = float(input("Enter base: "))
            height = float(input("Enter height: "))
            result = func(base, height)

        print(f"Result: {result:.2f}")

    except ValueError as e:

        if str(e) == "Dimensions must be strictly positive.":
            print(f"Input Error: {e}")
        else:
            print("Input Error: Please enter valid numeric dimensions.")


if __name__ == "__main__":
    main()