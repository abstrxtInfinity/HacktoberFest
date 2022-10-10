def numbers(arr, target):
    visited = {}
    visited[arr[0]] = True 
    
    for el in range(1, len(arr)):
        target_el  = target - arr[el]
        if visited.get(target_el):
            return True
        visited[arr[el]] = True
    return False 

arr = [3,5,-4,8,11,1,-1,6,4]
print(numbers(arr, 5))         
