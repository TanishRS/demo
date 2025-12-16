import matplotlib.pyplot as plt
import numpy as np

days=np.arange(1,8)
errors=[1,7,8,6,10,3,11]

plt.stem(days, errors)
weekday_labels = ["Mon", "Tues","Wed","Thurs","Fri","Sat","Sun"]
plt.xticks(days,weekday_labels)

plt.xlabel("Days of the week")
plt.ylabel("Errors")
plt.title("Errors of the Day")
plt.show()