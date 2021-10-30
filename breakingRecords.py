def breakingRecords(ar):
# Write your code here
    min = ar[0]
    max = ar[0]
    minCount = 0
    maxCount = 0

    for i in range(1, len(ar)):
        if max < ar[i]:
            max = ar[i]
            maxCount += 1
        if min > ar[i]:
            min = ar[i]
            minCount += 1

    return maxCount, minCount
