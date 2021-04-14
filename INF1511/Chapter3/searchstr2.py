p = input("Enter a string: ")
print("Enter string is %s" % p)
q = input("Enter the substring to search: ")
r = p.count(q)
if r == 0:
    print("%s not found in %s" % (p, q))
else:
    print("%s occurs in %s %d times" % (q, p, r+1))
