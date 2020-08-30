c,d=5,5
for i in range(3):
    print(" "*5," "*(3-i),"*"*c," "*d,"*"*c)
    c,d=c+2,d-2
c=23
for i in range(12):
    print(" " * 5, " " * (i), "*" * c)
    c=c-2
print()
for i in range(1,11):
    #print(" "*3)
    for j in range(1,11):
        if j == 1 or j == 10 or ((i == j or i + j == 11) and (i <= 5)):
            print('*',end="")
        else :
            print(" ",end="")
    print(" ",end="")
    for j in range(1,11):
        if i==1 or i==10 or j==1 or j==10:
            print('*',end="")
        else :
            print(" ",end="")
    print(" ",end="")
    for j in range(1, 11):
        if j == 1 or j == 10 or ((i == j or i + j == 11) and (i <= 5)):
            print('*', end="")
        else:
            print(" ", end="")
    print(" ", end="")
    print()
print()
c,d=5,5
for i in range(3):
    print(" "*5," "*(3-i),"*"*c," "*d,"*"*c)
    c,d=c+2,d-2
c=23
for i in range(12):
    print(" " * 5, " " * (i), "*" * c)
    c=c-2

