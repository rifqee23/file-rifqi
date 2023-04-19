# import time


# def main():
#     i = 0
#     while i <= 5:
#         print('i=%d : Python' % i, end=" ")
#         i += 1
#         print('nilai i berubah menjadi %d' % i)

#         time.sleep(1)


# if __name__ == '__main__':
#     main()

# def main():
#     total = 0
#     i = 1
#     while i < 5:
#         print('i = %d : Python ' % i, end='')
#         print(' + ' if i < 4 else ' = ', end='')
#         total += i
#         i += 1
#         print('nilai i berubah menjadi %d' % i)

#     print(total)


# if __name__ == '__main__':
#     main()

# def main():
#     data = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]

#     val = int(input('Masukkan nilai yang dicari: '))
#     index = -1
#     for i in range(0, 10):
#         if data[i] == val:
#             index = i
#             break

#     if index > -1:
#         print('%d ditemukan pada index ke -%d' % (val, index))
#     else:
#         print('%d tidak ditemukan' % val)


# if __name__ == '__main__':
#     main()


# def main():
#     for i in range(10):
#         if i % 2 == 0: continue
#         print(i, end =" ")


# if __name__ == '__main__':
#     main()

# import sys


# def main():
#     a = float(input('Masukkan nilai a: '))
#     b = float(input('Masukkan nilai b: '))

#     if b == 0:
#         print('\nSalah: Nilai b tidak boleh nol')
#         sys.exit(1)

#     print('\n%.3f / %.3f = %.3f' % (a, b, a / b))


# if __name__ == '__main__':
#     main()

def main():
    nilai = input('Input nilai: ')
    grade = int(nilai)

    if grade >= 90:
        hasil = 'A'
    elif grade >= 80:
        hasil = 'B'
    elif grade >= 70:
        hasil = 'C'
    elif grade >= 60:
        hasil = 'D'
    else:
        hasil = 'F'

    print('Nilai anda adalah %s' % hasil)


if __name__ == '__main__':
    main()
