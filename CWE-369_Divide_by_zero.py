def get_average(input_list):
    list_sum = 0
    count = 0

    for i in input_list:
        if isinstance(i, int):
            list_sum += i
            count += 1
    
    # Divide by zero (if input_list contains no ints)
    avg = list_sum/count
    
    return avg


print(get_average([1,2,3]))

print(get_average([]))
