import matplotlib.pyplot as plt
import numpy as np

fig, axis=plt.subplots(2,2)

x = np.linspace(1, 5, 5)
y = np.linspace(1, 3, 5)

axis[0,1].plot(x, y)
axis[0,1].pie(x)
axis[1,0].scatter(x,y)
axis[1,1].bar(x,y)
plt.show()