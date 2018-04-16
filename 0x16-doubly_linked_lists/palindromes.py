a, b = 999, 999
for a in range(999, 800, -1):
    for b in range(999, 800, -1):
        mult = a * b
        if (str(mult) == str(mult)[::-1]):
            print("Palindrome is: {:d} * {:d} = {}" .format(a, b, str(mult)))
            file = open("102-result", "w")
            file.write(str(mult))
            file.close()
            quit()
            
