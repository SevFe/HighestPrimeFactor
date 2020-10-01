numberGiven = int(input("Input a number: "))

def primeFactor(x):

  if x <= 1:
    print("Not Valid")
    return False

  numberHolder = 0

  while x % 2 == 0:
    numberHolder = 2
    x = x//2

  for i in range(3, x+1, 2):
    while x % i == 0:
      numberHolder = i
      x = x//i

  print("The highest prime factor is:", numberHolder)
  return True

primeFactor(numberGiven)
