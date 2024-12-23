import json
l=[1,2,3,4]
with open("data1.json","w") as file:
    json.dump(l,file)
    print("Data inserted succesffuly")