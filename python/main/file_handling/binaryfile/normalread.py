import pickle
f=open("binary.dat","rb")
temp=pickle.load(f)
print(temp)