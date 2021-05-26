def mySum(a: int, b: int = 5):
    "Adds two numbers together"
    return a + b


mySum.version = "1.0"
mySum.author = "Craig Gallimore"
k = mySum(10, 20)
print("Sum is %d" % k)
print('The documentation of the mySum is %s' % mySum.__doc__)
print('The function name is %s' % mySum.__name__)
print('The default value is %s' % mySum.__defaults__)
print('The code object is %s' % mySum.__code__)
print('The dictionary is %s' % mySum.__dict__)
