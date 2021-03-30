# demo of swapcase, upper, lower, istitle and capitalize functions.
s = "Hello World!"
print("Original string is", s)
print("String after toggling the case:", s.swapcase())
print("String in uppercase is", s.upper())
if (s.istitle()):
    print("String in lowercase is", s.lower())
print("String,", s, "is intitle case:", s.istitle())
print("String in capitalized form is", s.capitalize())
