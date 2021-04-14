m = input("Enter a string: ")
n = input("Enter a substring: ")
if n in m:
    print("%s is found in the string %s" % (n, m))
else:
    print("%s doesn't exist in the string %s" % (n, m))
