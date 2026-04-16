import math

def check_positive(*args):

    for val in args:
        if val <= 0:
            raise ValueError("Dimensions must be strictly positive.")

def circle_area(radius):
    check_positive(radius)
    return math.pi * (radius ** 2)

def circle_perimeter(radius):
    check_positive(radius)
    return 2 * math.pi * radius

def rectangle_area(width, height):
    check_positive(width, height)
    return width * height

def rectangle_perimeter(width, height):
    check_positive(width, height)
    return 2 * (width + height)

def triangle_area(base, height):
    check_positive(base, height)
    return 0.5 * base * height
