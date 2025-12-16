import matplotlib.pyplot as plt

scores_in_subject_a=[38,25,15,50,6]
scores_in_subject_b=[20,35,88,10,50]
hrs_studies=[20,15,10,48,8]

plt.scatter(scores_in_subject_a, hrs_studies, color="maroon",s=100, label="Python")
plt.scatter(scores_in_subject_b, hrs_studies, color="blue",s=100, label="Javascript")
plt.grid(True)
plt.legend()
plt.show()