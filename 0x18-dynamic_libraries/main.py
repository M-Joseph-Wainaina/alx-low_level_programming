#!/usr/bin/python3
import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 100)
b = random.randint(-111, 100)

print("{} + {} = {}".format(a, b, cops.div(a, b)))
