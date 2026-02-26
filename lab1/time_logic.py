total_seconds = int(input("Enter a total number of seconds: "))
hours = total_seconds // 3600
minutes = (total_seconds % 3600) // 60
seconds = total_seconds % 60
print(f"{total_seconds} seconds is {hours} hours, {minutes} minutes, and {seconds} seconds.")
