a = []
a = ()
a = ""
a = {}
a = tuple()
a = list()
a = dict()
a = set()
if a:
    print("True")
else:
    print("False")

import types
print(len([i for i in dir(types) if not i.startswith('__')]))

numbers = [1, 2, 3]
dict_numbers = {number: number*2 for number in numbers}
print(dict_numbers)

b = "1984"
a = b, c = "AB"
print(a, b, c)

print(bin(5))
a = bin(5)
print(5 << 2)
print(int('10100', 2))
print(~5)
print(bin(-6))

print(bin(1)) #0b1
print(bin(2)) #0b10
print(1 | 2)  #0b11
print(1 & 1)  #0b1
print(1 ^ 1)  #0b0
print(1 ^ 2)  #0b11