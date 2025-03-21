def great(a,b,c):
    if a>b and a>c:
        return a
    elif b>a and b>c:
        return b
    else:
        return c

great(6,3,9)

def CtF(temp):
    c = ((temp-32)/9)*5
    return c
print (f"{round(CtF(105),2)} Deg Cel")


# 
def Sum(n):
    if n == 1:
        return 1
    else:
        s = n + Sum(n-1)
        return s

print (Sum(5))


# 
def star(n):
    # for i in range(1,n):
    for i in range(n):    # == 0-(n-1)
        print("*" * (n-i))
        
star(5)


def star2(n):
    if(n==0):
        return 
    
    print("*" * n)
    return star2(n-1)

star2(5)


# 
def ItC(inch):
    return inch * 2.5
print(f"Inch to C for 10 inch is : {ItC(10)}cm")


# 
def rem(l,word):
    # for item in l:
        # print(item)
        l.remove(word)
        return l
    
l = ["Harry", "Rohan", "Kan", "Pri", " "]

print(l)
# print(rem(l,"kan"))
print(rem(l,"Kan"))


def rem2(l,word):
    n = []
    for item in l:
        if not(item == word):
            n.append(item.strip(word))
    return n

l = ["Harry", "Rohan", "Kan", "Pri", " ","an"]

print(l)
print(rem2(l,"an"))



# 
def Mul(n,i):
    if(i==0):
        return 0
    print(f"{n} X {i} = {n*i}")
    Mul(n,i-1)
    
Mul(5,10)


# 
def Mul(n):
    for i in range(1,11):
        print(f"{n} X {i} = {n*i}")
    
    
Mul(5)