def arrival_of_the_general():
    n = int(input())
    arr = list(map(int, input().split()))
 
    max_index = arr.index(max(arr))
    min_index = -1
 
    # Find the last occurrence of the minimum value
    min_value = min(arr)
    for i in range(n-1, -1, -1):
        if arr[i] == min_value:
            min_index = i
            break
 
    swaps = max_index + (n - 1 - min_index)
 
    if max_index > min_index:
        swaps -= 1
 
    print(swaps)
 
arrival_of_the_general()