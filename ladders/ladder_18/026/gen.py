from random import randint, random
from os import system


def gen():
    with open("in", "w") as f:
        n = randint(1, 25)
        f.write(f"{n}\n")
        for _ in range(n):
            f.write(f"{random()/2} ")


it = 100
for _ in range(it):
    gen()
    system("./a.out < in > out && ./brute < in > out2")

    o1 = open("out", "r").readlines()
    o2 = open("out2", "r").readlines()
    if o1 != o2:
        print("DIFFFF !!!!")
        exit(0)

    print(f"OK {_+1}")
