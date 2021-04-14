names = ('John', 'Kelly', 'Caroline', 'Steve', 'Katheline')
name = input("Search for a name: ")
if name in names:
    print("The name {} is present in the tuple", format(name))
else:
    print("No {} in the tuple" .format(name))
countries = ("U.S.", "U.K.", "India", "South Africa")
names += countries
print("The tuples are concatenated. The concatenation tuple is {}" .format(names))
