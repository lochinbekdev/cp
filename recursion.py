def recursion(n):
    if n == 0:
        return 1
    return n * recursion(n - 1)

def recursionFor(nums):
    result = 1
    for num in nums:
        result *= num
    return result

print(recursion(5))
print(recursionFor([1,2,3,4,5]))

