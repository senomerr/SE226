def strip_whitespaces(string_list):
    return [s.strip() for s in string_list]

def remove_duplicates(data_list):
    seen = set()
    unique_list = []
    for item in data_list:
        if item not in seen:
            unique_list.append(item)
            seen.add(item)
    return unique_list