countrycap = {'U.S.': 'Washington D.C.', 'U.K.': 'London',
              'India': 'New Delhi', 'S.A.': 'Pretoria'}
country = input("Enter country: ")
if country in countrycap:
    print('The capital of {} is {}' .format(country, countrycap[country]))
else:
    print('{} is not currently in our directory' .format(country))
countrycap['Australia'] = 'Sydney'
print('New updated directory: (recent country addition)')
for c, capital in countrycap.items():
    print('Capital of {} is {}' .format(c, capital))
m = input("Enter country to delete from directory: ")
del countrycap[m]
print("New updated directory: (recent country removal)")
for c, capital in countrycap.items():
    print('Capital of {} is {}' .format(c, capital))
