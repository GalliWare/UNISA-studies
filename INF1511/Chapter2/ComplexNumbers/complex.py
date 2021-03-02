# example of accessing real and imaginary components of a complex number
a = 3.0 + 1.2j
b = -2.0 - 9.0j
print('The two complex numbers are', a, 'and', b)
c = a+b
print('The addition of the two complex numbers is', c)
print('The addition of the real numbers is', a.real+b.real)
print('The addition of the imaginary numbers is', a.imag+b.imag)
