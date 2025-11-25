my_list=[1,2,2,2,2,2,3,4,5,5,5,6,7,7,8]

item_counts = {item: my_list.count(item) for item in my_list}
print(item_counts)