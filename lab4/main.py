def main():

    num_tasks = int(input("Enter number of tasks: "))
    tasks = {}

    for _ in range(num_tasks):
        name = input("Enter task name: ")
        num_deps = int(input(f"How many dependencies for {name}? "))
        deps = []
        for i in range(1, num_deps + 1):
            dep_name = input(f"Enter dependency {i}: ")
            deps.append(dep_name)
        tasks[name] = deps


    print("\nTASK STRUCTURE:")
    for task, deps in tasks.items():
        print(f"{task} -> {deps}")


    print("\nINITIAL TASKS (no dependencies):")
    initial_tasks = [t for t, d in tasks.items() if len(d) == 0]
    if initial_tasks:
        for t in initial_tasks:
            print(t)
    else:
        print("None")


    print("\nEXECUTION ORDER:")
    completed_tasks = set()
    execution_order = []

    step = 1
    while len(completed_tasks) < len(tasks):
        progress_made = False

        for task, deps in tasks.items():
            if task not in completed_tasks:

                if all(dep in completed_tasks for dep in deps):
                    completed_tasks.add(task)
                    execution_order.append(task)
                    print(f"Step {step}: {task}")
                    step += 1
                    progress_made = True
                    break


        if not progress_made:
            print("No task can be started.")
            print("\nERROR: Circular dependency detected!")
            print("These tasks could not be completed:")
            for t in tasks:
                if t not in completed_tasks:
                    print(t)
            return

    print("\nALL TASKS COMPLETED SUCCESSFULLY")


if __name__ == "__main__":
    main()
