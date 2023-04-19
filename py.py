# def mutlak(x):
#     return x if x > 0 else -x


# def main():
#     val = float(input('Masukkan bilangan: '))

#     print("Harga mutlak dari {} adalah" .format(val, mutlak(val)))


# if __name__ == '__main__':
#     main()

# bahasa = 'python'
# versi = 3

# print(f'{bahasa}  {versi}', type(versi))

# import fractions
# a = fractions.Fraction(2, 4)
# b = fractions.Fraction(2, 4)

# c = a * b
# print(c.numerator)
# print(c.denominator)
# print(c)

# b = complex(2.0,  3.0)
# print(b.imag)

# x = set()
# print(x)
# x.add(5)
# x.add(5)
# x.add(4)
# print(x)

# for i in range(5):
#     print("Baris ke - ", i+1)

# def main():
#     print("bilangan :")

#     i = 0
#     while i <= 15:
#         print(i, end=' ')
#         i += 3


# if __name__ == '__main__':
#     main()

# a = 5
# b = 5
# print(a < b)

# c = input('Masukkan huruf: ')[0].lower()

# if c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u':
#     print('%c adalah huruf vocal' % c)
# else:
#     print("Bukan Huruf vocal")


c = input('Masukkan huruf: ')[0].lower()

if c in ['a', 'e', 'i', 'o', 'u']:
    print('%c adalah huruf vocal' % c)
else:
    print('%c bukan huruf vocal' % c)
