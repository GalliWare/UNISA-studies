# example of how to display octal and hexa values
a = 0o25
b = 0x1af
print('Value of a in decimal is ', a)
c = 19
print('19 in octal is %o and in hex is %x' % (c, c))
d = oct(c)
e = hex(c)
print('19 in octal is', d, ' and in hex is ', e)
