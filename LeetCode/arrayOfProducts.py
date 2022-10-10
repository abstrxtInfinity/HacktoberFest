def arrayOfProducts(arr):
    left = [1 for _ in arr]
    right = [1 for _ in arr]
    result = [1 for _ in arr]

    product = 1
    for i in range(len(arr)):
        left[i] = product
        product *= arr[i]

    product = 1
    for i in reversed(range(len(arr))):
        right[i] = product
        product *= arr[i]

    for i in range(len(result)):
        result[i] = left[i] * right[i]

    return result


def arrayOfProducts2(arr):
    result = [1 for _ in arr]

    product = 1
    for i in range(len(arr)):
        result[i] = product
        product *= arr[i]

    product = 1
    for i in reversed(range(len(arr))):
        result[i] *= product
        product *= arr[i]

    return result


def arrayOfProducts3(arr):
    result = [1 for _ in arr]

    product = 1

    for el in arr:
        product *= el

    for i in range(len(result)):
        result[i] = int(product / arr[i])
    return result


print(arrayOfProducts([5, 1, 4, 2]))
