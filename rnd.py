import numpy as np
import matplotlib.pyplot as plt

if __name__ == "__main__":
    filename = "numbers.csv"
    with open(filename, "r") as my_file:
        l=[line.strip() for line in my_file.readlines()]

    my_array=np.array(l, dtype=float)
    plt.hist(my_array)
    plt.show()
