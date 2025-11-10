try:
    print(x)
except Exception as e:
    print("default",e)
except Exception as e:
    print("inside else")
finally:
    print("inside finally")
