import sys
from os import system
from random import randint


def gen():
    n = randint(1, 100)
    m = randint(1, 100)

    a = []
    for i in range(m):
        a.append(randint(1, n))

    with open("in", "w") as f:
        f.write(f"{n} {m}\n")
        for i in range(m):
            f.write(f"{a[i]} ")


it = 100
for _ in range(it):
    gen()

    system("./a.out < in > out1")
    system("./brute < in > out2")

    r1 = open("out1", "r").readlines()
    r2 = open("out2", "r").readlines()
    if r1 != r2:
        print(f"!!!! DIFF {r1} vs {r2}")
        exit(0)

    print(f"OK {_+1}")
