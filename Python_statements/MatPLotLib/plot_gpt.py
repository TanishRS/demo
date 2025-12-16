import matplotlib.pyplot as plt
import numpy as np

# ------------------------------
# 1. Create some sample monthly sales data
# ------------------------------
months = np.arange(1, 13)  # 1 to 12 for months

# Fake sales numbers for Product A and Product B
sales_A = np.array([120, 135, 150, 160, 170, 180, 190, 200, 195, 185, 175, 165])
sales_B = np.array([100, 110, 130, 140, 145, 155, 165, 175, 180, 178, 170, 160])

# Create a 2x2 grid of subplots
fig, axes = plt.subplots(2, 2, figsize=(12, 8))

# Set an overall title for the entire figure
fig.suptitle("2025 Sales Analytics Dashboard", fontsize=16, fontweight="bold")

# ------------------------------
# Subplot 1: Line plot with markers
# ------------------------------
ax1 = axes[0, 0]
ax1.plot(months, sales_A, marker="o", label="Product A")
ax1.plot(months, sales_B, marker="s", label="Product B")
ax1.set_title("Monthly Sales - Line Plot")
ax1.set_xlabel("Month")
ax1.set_ylabel("Sales (Units)")
ax1.legend()
ax1.grid(True, linestyle="--", linewidth=0.5)

# ------------------------------
# Subplot 2: Side-by-side bar chart
# ------------------------------
ax2 = axes[0, 1]
bar_width = 0.35

# Positions of bars on X axis
index = np.arange(len(months))

ax2.bar(index - bar_width / 2, sales_A, width=bar_width, label="Product A")
ax2.bar(index + bar_width / 2, sales_B, width=bar_width, label="Product B")

ax2.set_title("Monthly Sales - Bar Chart")
ax2.set_xlabel("Month")
ax2.set_ylabel("Sales (Units)")
ax2.set_xticks(index)
ax2.set_xticklabels(months)
ax2.legend()

# ------------------------------
# Subplot 3: Scatter plot with bubble sizes
# ------------------------------
ax3 = axes[1, 0]

# Bubble size proportional to total sales of A + B
bubble_sizes = (sales_A + sales_B) * 2  # multiply to make them more visible

ax3.scatter(months, sales_A, s=bubble_sizes, alpha=0.6, label="Product A")
ax3.scatter(months, sales_B, s=bubble_sizes, alpha=0.6, marker="s", label="Product B")

ax3.set_title("Monthly Sales - Bubble Scatter")
ax3.set_xlabel("Month")
ax3.set_ylabel("Sales (Units)")
ax3.legend()
ax3.grid(True, linestyle="--", linewidth=0.5)

# ------------------------------
# Subplot 4: Area plot with filled regions
# ------------------------------
ax4 = axes[1, 1]

ax4.fill_between(months, sales_A, step="mid", alpha=0.5, label="Product A")
ax4.fill_between(months, sales_B, step="mid", alpha=0.5, label="Product B")

ax4.set_title("Monthly Sales - Area Plot")
ax4.set_xlabel("Month")
ax4.set_ylabel("Sales (Units)")
ax4.legend()

# Automatically adjust layout so titles and labels don't overlap
plt.tight_layout(rect=[0, 0, 1, 0.95])

# Save the figure as a PNG file
plt.savefig("2025_sales_analytics_dashboard.png", dpi=300, bbox_inches="tight")

# Show the plots on screen
plt.show()