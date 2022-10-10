def longestPeak(arr):
    longestPeak = -1
    i = 1
    while i < len(arr) - 1:
        isPeak = arr[i] > arr[i - 1] and arr[i] > arr[i + 1]
        if not (isPeak):
            i += 1
            continue

        leftIdx = i - 2

        while leftIdx >= 0 and arr[leftIdx] < arr[leftIdx + 1]:
            leftIdx -= 1

        rightIdx = i + 2

        while rightIdx < len(arr) and arr[rightIdx] < arr[rightIdx - 1]:
            rightIdx += 1

        length = rightIdx - leftIdx - 1

        if length > longestPeak:
            longestPeak = length

        i = rightIdx
    return longestPeak


print(longestPeak([1, 0, 3, 3, 4, 0, 10, 6, 5, -1, -3, 2, 3]))
