def hellocounter(count):

    def counter(name):
        count[0] += 1
        print ('Hello,', name, ',', str(count[0]) + ' access!')

    count[0] = 100

    return counter


hello = hellocounter([1])
hello('a')
hello('b')
hello('c')

hello1 = hellocounter([10])
hello1('a')

def wrapper(func):
    def inner(name):
        func(name, "value")
    return inner

def printfunc(name, value):
    print name, value

f = wrapper(printfunc)
print "begin"
f("sadaf")
print "end"



