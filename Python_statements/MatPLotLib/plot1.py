import matplotlib.pyplot as plt
import numpy as np

months=np.arange(1,13)

sales_A=np.array([120,130,140,150,160,170,180,190,200,210,220,230])
sales_B=np.array([220,200,150,180,140,200,210,300,330,200,190,320])

fig, axes=plt.subplots(2,2, figsize=(12,8))

fig.suptitle("2025 Sales Analytic Dashboard", fontsize=16, fontweight="bold")

ax1=axes[0,0]
ax1.plot(months,sales_A,marker="o",label="Product A")
ax1.plot(months,sales_B,marker="s",label="Product B")
ax1.set_title("Monthly Sales.",fontsize=16, fontweight="bold")
ax1.set_xlabel("Sales",fontsize=16, fontweight="bold")
ax1.set_ylabel("Month",fontsize=16, fontweight="bold")
ax1.legend()
ax1.grid(True)

ax2=axes[0,1]
bar_width=0.5

ax3=axes[1,0]
ax3.scatter(months,sales_A,marker="o",label="Product A")
ax1.scatter(months,sales_B,marker="s",label="Product B")
ax1.set_title("Monthly Sales.",fontsize=16, fontweight="bold")
ax1.set_xlabel("Sales",fontsize=16, fontweight="bold")
ax1.set_ylabel("Month",fontsize=16, fontweight="bold")
ax1.legend()
plt.show()