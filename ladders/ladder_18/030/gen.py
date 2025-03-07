from random import randint
from os import system


def gen():
    with open("in", "w") as f:
        n = 17
        N = 1 << n
        m = 10**5

        f.write(f"{n} {m}\n")
        for _ in range(N):
            f.write(f"{randint(0, 2**30 - 1)} ")
        f.write("\n")

        for _ in range(m):
            f.write(f"{randint(1, N)} {randint(0, 2**30 - 1)}\n")


it = 100
for _ in range(it):
    gen()
    system("time ./a.out < in > out")
    print("=========\n")
