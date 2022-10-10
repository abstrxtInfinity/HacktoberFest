def levenshteinDistance(str1, str2):
    small = str1 if len(str1) < len(str2) else str2
    big = str1 if len(str1) >= len(str2) else str2

    record = [[x for x in range(len(small) + 1)]] * 2

    for i in range(1, len(big) + 1):
        current = [0 for _ in range(len(small) + 1)]
        current[0] = record[0][0] + 1
        record[1] = current

        for j in range(1, len(small) + 1):
            if big[i - 1] == small[j - 1]:
                record[1][j] = record[0][j - 1]
            else:
                record[1][j] = 1 + min(record[1][j - 1], record[0][j],
                                       record[0][j - 1])

        record[0] = record[1]
    return record[-1][-1]


print(levenshteinDistance("ab", "abc"))
