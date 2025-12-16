import matplotlib.pyplot as plt
import numpy as np 
import pandas as pd

df=pd.read_csv("amazon_cameras.csv")
print(df)
number_siblings = df["price"]
print(number_siblings)
ages = np.random.normal(18,10,100)
print(ages)

plt.hist(ages, bins=10,edgecolor="black", color="blue")
plt.show()