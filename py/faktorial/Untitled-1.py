def sum(n):
    if n <= 1:
        return n
    else:
        ans = sum(n-1)

    return ans


print(sum(6))
