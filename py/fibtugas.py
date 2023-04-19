def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n-1) + fibonacci(n-2)


for n in range(5):
    print(fibonacci(n), end=" ")
