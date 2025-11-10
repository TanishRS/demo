my_tuple=[5,6,7]
my_list=[5,6,7]
print(my_tuple[0])

for x in my_tuple:
    print(x)

x=0
while x < len(my_tuple):
    print(my_tuple[x])
    x=x+1

print(my_tuple[0:2])

my_list[1]=34
my_con_tuple=list(my_tuple)
print(type(my_con_tuple))
my_con_tuple[0]=34
print(my_con_tuple)