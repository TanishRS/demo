import matplotlib.pyplot as plt
import numpy as np

eng_salary=np.random.normal(55,25,100)
sales_salary=np.random.normal(25,55,100)

plt.boxplot([eng_salary,sales_salary])
plt.show()