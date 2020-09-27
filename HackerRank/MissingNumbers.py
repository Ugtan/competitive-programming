# Return the array of missing numbers between the two given arrays.
# LINK = https://www.hackerrank.com/challenges/missing-numbers/problem

from collections import Counter

def missingNumbers(arr, brr):
    numbers = list((Counter(brr) - Counter(arr)).elements())
    numbers = list(set(numbers))
    numbers.sort()
    return numbers
