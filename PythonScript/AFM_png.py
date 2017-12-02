import matplotlib.pyplot as plt
import numpy as np
from matplotlib import cm

FILENAME = r'D:\computer13\AFM\PI\DATA\UpDowndata_B.txt'


def read_data(data, filename):
    with open(filename) as f:
        for line in f.readlines():
            data.append([line.split('\t\t\t')])
    return data


def draw(data):
    fig = plt.figure()
    ax = fig.add_subplot(111)
    x, y = np.linspace(0, 1, 256), np.linspace(0, 1, 319)
    x, y = np.meshgrid(x, y)
    z2 = []
    for zgroup in data:
        if len(zgroup) - 1 == 256:
            z2.append(zgroup[:-1])
    surf = ax.plot_surface(x, y, z2, rstride=1, cstride=1, cmap=cm.jet,
        linewidth=0, antialiased=False)
    plt.show()


if __name__ == "__main__":
    data = []
    data = read_data(data, FILENAME)
    draw(data)
