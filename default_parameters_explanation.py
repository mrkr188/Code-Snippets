def f(a, L=[]):
    L.append(a)
    return L

print f(1)
print f(2)
print f.func_defaults
print f(3,[5])
print f.func_defaults
f.func_defaults = (['foo'],) # Don't do this!
print f(3)
print f.func_defaults

def g(a, L=None):
    L = []
    L.append(a)
    return L

print g(1)
print g(2)
print g(3)
print g.func_defaults

*** more detailed explanation here - http://effbot.org/zone/default-values.htm  ***


